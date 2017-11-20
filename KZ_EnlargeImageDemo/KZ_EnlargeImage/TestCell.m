//
//  TestCell.m
//  KZ_EnlargeImage
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import "TestCell.h"
#import <KZ_EnlargeImageFramework/KZ_EnlargeImage.h>

@interface TestCell () <KZ_EnlargeImageViewControllerDelegate> {
    KZ_ThumbnailImageCollectionView *imageView;
}

@end

@implementation TestCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        imageView = [[KZ_ThumbnailImageCollectionView alloc] initWithFrame:CGRectMake(10, 10, 300, 0) scrollDirection:UICollectionViewScrollDirectionVertical];
        imageView.maxRow = 5;
        imageView.enlargeImageViewDelegate = self;
        [self.contentView addSubview:imageView];
    }
    return self;
}

- (void)resetCellWithCount:(int)count {
    NSMutableArray *imagesArray = [NSMutableArray arrayWithCapacity:0];
    for (int i = 0; i < count; i++) {
        [imagesArray addObject:@{KZ_ThumbnailImageKey : [KZ_EnlargeImageUtils arrayWithSmallImage][i], KZ_EnlargeImageKey : [KZ_EnlargeImageUtils arrayWithLargeImage][i]}];
    }
    if (imagesArray.count == 1) {
        CGSize size = [KZ_EnlargeImageUtils transImageSizeWithImageSize:CGSizeMake(300, 300) maxSize:CGSizeMake(300, 300) minSize:CGSizeMake(50, 50)];
        imageView.itemSize = size;
    }
    else {
        imageView.itemSize = CGSizeMake(100, 100);
    }
    [imageView resetImagesArray:imagesArray];
}

+ (CGFloat)heightForRowWithCount:(int)count {
    CGSize itemSize;
    if (count == 1) {
        itemSize = [KZ_EnlargeImageUtils transImageSizeWithImageSize:CGSizeMake(300, 300) maxSize:CGSizeMake(300, 300) minSize:CGSizeMake(50, 50)];
    }
    else {
        itemSize = CGSizeMake(100, 100);
    }
    CGSize size = [KZ_EnlargeImageUtils sizeForImagesURLCount:count itemSize:itemSize maxColumn:3 maxRow:5 columnSpacing:10 rowSpacing:10 scrollDirection:UICollectionViewScrollDirectionVertical];
    return size.height + 20;
}

#pragma mark KZ_EnlargeImageViewControllerDelegate
- (NSArray<NSString *> *)enlargeImageViewControllerTitlesForLongPressAction:(KZ_EnlargeImageViewController *)controller {
    return @[@"longpress1", @"longpress2", @"longpress3"];
}

- (NSString *)enlargeImageViewControllerTitleForLongPressCancelAction:(KZ_EnlargeImageViewController *)controller {
    return @"完成";
}

- (NSArray<NSString *> *)enlargeImageViewControllerTitlesFor3DTouchAction:(KZ_EnlargeImageViewController *)controller {
    return @[@"3dtouch1", @"3dtouch2", @"3dtouch3"];
}

- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didClick3DTouchActionWithEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage title:(NSString *)title index:(NSInteger)index {
    NSLog(@"%@", title);
}

- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didClickLongPressActionWithEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage title:(NSString *)title index:(NSInteger)index {
    NSLog(@"%@", title);
}

- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didClickCancelLongPressActionWithEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage {
    NSLog(@"cancel");
}

@end
