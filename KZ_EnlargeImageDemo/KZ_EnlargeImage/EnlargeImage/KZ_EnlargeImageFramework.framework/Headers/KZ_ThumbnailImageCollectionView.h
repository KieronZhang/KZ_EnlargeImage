//
//  KZ_ThumbnailImageCollectionView.h
//  KZ_EnlargeImage
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_EnlargeImageViewController.h"

@class KZ_ThumbnailImageCollectionView;

static NSString *KZ_ThumbnailImageKey = @"ThumbnailImageKey";
static NSString *KZ_EnlargeImageKey = @"EnlargeImageKey";
static NSString *KZ_PlaceholderImageKey = @"PlaceholderImageKey";

@interface KZ_ThumbnailImageCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerPreviewingDelegate> {
    NSMutableArray *imagesArray;
}
@property (nonatomic, weak) id<KZ_EnlargeImageViewControllerDelegate> enlargeImageViewDelegate;
@property (nonatomic, assign) CGSize itemSize; //如果不设置，则按照宽度和最大个数来计算出一个正方形的size
@property (nonatomic, assign) int maxColumn; // Default to 3
@property (nonatomic, assign) int maxRow; // Default to 3
@property (nonatomic, assign) int columnSpacing; // Default to 10
@property (nonatomic, assign) int rowSpacing; // Default to 10
@property (nonatomic, assign) BOOL autoChangeFrame; // Default to yes

@property (nonatomic, assign) BOOL enlargeSupport3DTouch;
@property (nonatomic, assign) BOOL enlargeSupportAutorotate;
@property (nonatomic, assign) BOOL enlargeShowPageControl;
@property (nonatomic, assign) BOOL enlargeShouldMoveDisappear;

- (instancetype)initWithFrame:(CGRect)frame scrollDirection:(UICollectionViewScrollDirection)direction;
- (void)resetImagesArray:(NSArray *)array;
- (CGFloat)heightForImageURLs:(NSArray *)urls;

@end
