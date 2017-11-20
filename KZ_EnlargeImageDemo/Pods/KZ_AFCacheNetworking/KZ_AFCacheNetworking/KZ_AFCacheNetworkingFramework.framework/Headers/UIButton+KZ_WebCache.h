//
//  UIButton+KZ_WebCache.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_WebCacheImageManager.h"

@interface UIButton (KZ_WebCache)

- (void)setCacheImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state;
- (void)setCacheImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder;
- (void)setCacheImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)setCacheImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)setCacheBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state;
- (void)setCacheBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder;
- (void)setCacheBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)setCacheBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheBackgroundImageWithURL:(nullable NSURL *)URL forState:(UIControlState)state placeholderImage:(nullable UIImage *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)cancelCacheImageDownloadTaskForState:(UIControlState)state;
- (void)cancelCacheBackgroundImageDownloadTaskForState:(UIControlState)state;

@end
