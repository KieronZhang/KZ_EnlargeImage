//
//  KZ_EnlargeImageUtils.h
//  KZ_EnlargeImage
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KZ_EnlargeImageUtils : NSObject

+ (CGSize)transImageSizeWithImageSize:(CGSize)size maxWidth:(float)width;
+ (CGSize)transImageSizeWithImageSize:(CGSize)size maxHeight:(float)height;
+ (CGSize)transImageSizeWithImageSize:(CGSize)size maxSize:(CGSize)maxSize minSize:(CGSize)minSize;

+ (CGSize)sizeForImagesURLCount:(int)count totalWidth:(float)totalWidth maxColumn:(int)maxColumn maxRow:(int)maxRow columnSpacing:(int)columnSpacing rowSpacing:(int)rowSpacing scrollDirection:(UICollectionViewScrollDirection)direction;
+ (CGSize)sizeForImagesURLCount:(int)count itemSize:(CGSize)itemSize maxColumn:(int)maxColumn maxRow:(int)maxRow columnSpacing:(int)columnSpacing rowSpacing:(int)rowSpacing scrollDirection:(UICollectionViewScrollDirection)direction;

+ (UIViewController *)findViewControllerWithView:(UIView *)view;
+ (UIViewController *)findActivityViewController;

+ (NSArray *)arrayWithSmallImage;
+ (NSArray *)arrayWithLargeImage;

@end
