//
//  TestCell.m
//  KZ_EnlargeImage_iOS
//
//  Created by Kieron Zhang on 2018/5/9.
//  Copyright © 2018年 Kieron Zhang. All rights reserved.
//

#import "TestCell.h"
#import <KZ_EnlargeImage_iOS/KZ_EnlargeImage.h>

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
        KZ_EnlargeImageModel *enlargeImage = [[KZ_EnlargeImageModel alloc] init];
        enlargeImage.thumbnailURL = [[self class] arrayWithSmallImage][i];
        enlargeImage.enlargeURL = [[self class] arrayWithLargeImage][i];
        [imagesArray addObject:enlargeImage];
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

+ (NSArray *)arrayWithSmallImage {
    return @[@"http://ornj4ojo0.bkt.clouddn.com/2887000493b04c002c94.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/26f30000b07157c53a66.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/2887000493d1800a03af.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/2887000493d32cc2e87d.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/2887000493f4f0d093c8.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/28880003ba667dd76504.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/28880003ba6e54ca5b16.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/28890004478d1cf58e3c.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/2889000447a16e613fef.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/288a0000af3c4f74a806.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/288a0000af6313a3853c.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014ab4e6462893.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014ac391c18a9e.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014af2ac12b16a.png?imageView2/2/w/200",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014af659b300b2.png?imageView2/2/w/200"];
}

+ (NSArray *)arrayWithLargeImage {
    return @[@"http://ornj4ojo0.bkt.clouddn.com/2887000493b04c002c94.png",
             @"http://ornj4ojo0.bkt.clouddn.com/26f30000b07157c53a66.png",
             @"http://ornj4ojo0.bkt.clouddn.com/2887000493d1800a03af.png",
             @"http://ornj4ojo0.bkt.clouddn.com/2887000493d32cc2e87d.png",
             @"http://ornj4ojo0.bkt.clouddn.com/2887000493f4f0d093c8.png",
             @"http://ornj4ojo0.bkt.clouddn.com/28880003ba667dd76504.png",
             @"http://ornj4ojo0.bkt.clouddn.com/28880003ba6e54ca5b16.png",
             @"http://ornj4ojo0.bkt.clouddn.com/28890004478d1cf58e3c.png",
             @"http://ornj4ojo0.bkt.clouddn.com/2889000447a16e613fef.png",
             @"http://ornj4ojo0.bkt.clouddn.com/288a0000af3c4f74a806.png",
             @"http://ornj4ojo0.bkt.clouddn.com/288a0000af6313a3853c.png",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014ab4e6462893.png",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014ac391c18a9e.png",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014af2ac12b16a.png",
             @"http://ornj4ojo0.bkt.clouddn.com/288b00014af659b300b2.png"];
}

@end
