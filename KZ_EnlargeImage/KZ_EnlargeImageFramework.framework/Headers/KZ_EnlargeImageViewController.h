//
//  KZ_EnlargeImageViewController.h
//  KZ_EnlargeImage
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KZ_EnlargeImageViewController;
@class KZ_EnlargeImageModel;
@class KZ_ReuseScrollView;

@protocol KZ_EnlargeImageViewControllerDelegate <NSObject>

@optional
- (void)enlargeImageViewControllerWillAppear:(KZ_EnlargeImageViewController *)controller;
- (void)enlargeImageViewControllerDidAppear:(KZ_EnlargeImageViewController *)controller;
- (void)enlargeImageViewControllerWillDisappear:(KZ_EnlargeImageViewController *)controller;
- (void)enlargeImageViewControllerDidDisappear:(KZ_EnlargeImageViewController *)controller;

- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didLongTapAtEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage;
- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didDoubleTapAtEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage;
- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didMoveToEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage index:(NSInteger)index;

- (NSArray <NSString *> *)enlargeImageViewControllerTitlesFor3DTouchAction:(KZ_EnlargeImageViewController *)controller;
- (NSArray <NSString *> *)enlargeImageViewControllerTitlesForLongPressAction:(KZ_EnlargeImageViewController *)controller;
- (NSString *)enlargeImageViewControllerTitleForLongPressCancelAction:(KZ_EnlargeImageViewController *)controller;

- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didClick3DTouchActionWithEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage title:(NSString *)title index:(NSInteger)index;
- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didClickLongPressActionWithEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage title:(NSString *)title index:(NSInteger)index;
- (void)enlargeImageViewController:(KZ_EnlargeImageViewController *)controller didClickCancelLongPressActionWithEnlargeImage:(KZ_EnlargeImageModel *)enlargeImage;

@end

@interface KZ_EnlargeImageViewController : UIViewController {
    UIView *backgroundView;
    UIImageView *enlargePlaceholderImageView;
    KZ_ReuseScrollView *enlargeImageScrollView;
    NSMutableArray *enlargeImagesArray;
    UIPageControl *enlargeImagePageControl;
}
@property (nonatomic, weak) id<KZ_EnlargeImageViewControllerDelegate> delegate;
@property (nonatomic, assign) int selectIndex;
@property (nonatomic, assign) BOOL supportAutorotate; //是否支持旋转
@property (nonatomic, assign) BOOL showPageControl; //是否显示PageControl
@property (nonatomic, assign) BOOL shouldMoveDisappear; //是否支持向下滑动消失
@property (nonatomic, assign) BOOL show3DTouch; //是否是3DTouch进入，只有当使用3DTouch进入时才可设置YES

- (id)initWithImages:(NSArray *)images selectIndex:(int)selectIndex;
- (void)presentEnlargeImageViewController;

/**
 params
 @images 需要封装成KZ_EnlargeImage对象
 @selectIndex 默认跳转到第几个
 @delegate 代理返回 如果不需要可传nil
 @autorotate 是否支持旋转 默认为YES 需要在项目中配置和旋转
 */
+ (KZ_EnlargeImageViewController *)showLargeImageWithImages:(NSArray *)images selectIndex:(int)selectIndex;
+ (KZ_EnlargeImageViewController *)showLargeImageWithImages:(NSArray *)images selectIndex:(int)selectIndex delegate:(id<KZ_EnlargeImageViewControllerDelegate>)delegate;
+ (KZ_EnlargeImageViewController *)showLargeImageWithImages:(NSArray *)images selectIndex:(int)selectIndex delegate:(id<KZ_EnlargeImageViewControllerDelegate>)delegate supportAutorotate:(BOOL)autorotate showPageControl:(BOOL)showPageControl shouldMoveDisappear:(BOOL)shouldMoveDisappear;

@end
