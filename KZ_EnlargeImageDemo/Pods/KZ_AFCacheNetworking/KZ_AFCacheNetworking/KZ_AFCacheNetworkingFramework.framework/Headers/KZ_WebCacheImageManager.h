//
//  KZ_WebCacheImageManager.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"

typedef NS_ENUM(NSInteger, KZ_ImageCacheType) {
    KZ_ImageCacheType_None,
    KZ_ImageCacheType_Disk,
    KZ_ImageCacheType_Memory
};

typedef NS_OPTIONS(NSUInteger, KZ_WebCacheImageOptions) {
    KZ_WebCacheImageOptions_RetryFailed = 1 << 0, //失败后重试
    KZ_WebCacheImageOptions_LowPriority = 1 << 1, //UI交互期间开始下载，导致延迟下载比如UIScrollView减速。
    KZ_WebCacheImageOptions_CacheMemoryOnly = 1 << 2, //只进行内存缓存
    KZ_WebCacheImageOptions_ProgressiveDownload = 1 << 3,  //这个标志可以渐进式下载,显示的图像是逐步在下载
    KZ_WebCacheImageOptions_RefreshCached = 1 << 4, //刷新缓存
    KZ_WebCacheImageOptions_ContinueInBackground = 1 << 5, //后台下载
    KZ_WebCacheImageOptions_HandleCookies = 1 << 6,  //NSMutableURLRequest.HTTPShouldHandleCookies = YES;
    KZ_WebCacheImageOptions_AllowInvalidSSLCertificates = 1 << 7, //允许使用无效的SSL证书
    KZ_WebCacheImageOptions_HighPriority = 1 << 8, //优先下载
    KZ_WebCacheImageOptions_DelayPlaceholder = 1 << 9,  //延迟占位符
    KZ_WebCacheImageOptions_TransformAnimatedImage = 1 << 10, //改变动画形象
    KZ_WebCacheImageOptions_AvoidAutoSetImage = 1 << 11,
    KZ_WebCacheImageOptions_NotShowGif = 1 << 12 //如果是gif图也不显示动态
};

typedef void(^KZ_WebCacheImageDownloaderProgressBlock)(NSInteger receivedSize, NSInteger expectedSize);
typedef void(^KZ_WebCacheImageDownloaderFinishedBlock)(UIImage * _Nullable image, KZ_ImageCacheType cacheType, NSURL * _Nullable imageURL);
typedef void(^KZ_WebCacheImageDownloaderFailedBlock)(NSError * _Nullable error, KZ_ImageCacheType cacheType, NSURL * _Nullable imageURL);

@interface KZ_WebCacheImageManager : NSObject

+ (nullable UIImage *)getCachedImageWithURLString:(nullable NSString *)URL;
+ (void)downloadImageWithURL:(nullable NSURL *)URL success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
+ (void)downloadImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
+ (void)downloadImageWithURL:(nullable NSURL *)URL progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
+ (void)downloadImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
+ (void)deleteCacheImage:(void (^ _Nullable)(void))success;
+ (NSUInteger)cacheImagesDataCount;

@end
