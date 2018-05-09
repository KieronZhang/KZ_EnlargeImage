//
//  KZ_Button+KZ_WebCache.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import "KZ_WebCacheImageManager.h"

@interface KZ_Button (KZ_WebCache)

#if TARGET_OS_IPHONE
- (void)kz_setImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state;
- (void)kz_setImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder;
- (void)kz_setImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)kz_setImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)kz_setBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state;
- (void)kz_setBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder;
- (void)kz_setBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)kz_setBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)kz_cancelImageDownloadTaskForState:(UIControlState)state;
- (void)kz_cancelBackgroundImageDownloadTaskForState:(UIControlState)state;

#elif TARGET_OS_MAC
- (void)kz_setImageWithURL:(nullable NSURL *)URL;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)kz_setImageWithURL:(nullable NSURL *)URL success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)kz_setAlternateImageWithURL:(nullable NSURL *)URL;
- (void)kz_setAlternateImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder;
- (void)kz_setAlternateImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)kz_setAlternateImageWithURL:(nullable NSURL *)URL success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setAlternateImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setAlternateImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)kz_setAlternateImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable KZ_Image *)placeholder options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)kz_cancelCurrentImageLoad;
- (void)kz_cancelCurrentAlternateImageLoad;
#endif

@end
