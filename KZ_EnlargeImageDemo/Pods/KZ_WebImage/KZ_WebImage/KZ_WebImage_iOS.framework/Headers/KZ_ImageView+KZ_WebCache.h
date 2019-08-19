//
//  KZ_ImageView+KZ_WebCache.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import "KZ_WebCacheImageManager.h"

@interface KZ_ImageView (KZ_WebCache)

- (void)kz_setImageWithURL:(nullable NSURL *)URL;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)kz_setImageWithURL:(nullable NSURL *)URL success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

#if TARGET_OS_IOS
- (void)kz_setHighlightedImageWithURL:(nullable NSURL *)URL;
- (void)kz_setHighlightedImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options;
- (void)kz_setHighlightedImageWithURL:(nullable NSURL *)URL success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setHighlightedImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setHighlightedImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)kz_setAnimationImagesWithURLs:(nonnull NSArray<NSURL *> *)arrayOfURLs;
- (void)kz_cancelCurrentAnimationImagesLoad;
#endif

@end
