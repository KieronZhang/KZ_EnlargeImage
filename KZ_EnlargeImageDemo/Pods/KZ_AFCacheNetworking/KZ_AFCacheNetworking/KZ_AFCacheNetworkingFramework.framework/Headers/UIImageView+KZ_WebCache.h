//
//  UIImageView+KZ_WebCache.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KZ_WebCacheImageManager.h"

@interface UIImageView (KZ_WebCache)

- (void)setCacheImageWithURL:(nullable NSURL *)URL;
- (void)setCacheImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable UIImage *)placeholder;
- (void)setCacheImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable UIImage *)placeholder options:(KZ_WebCacheImageOptions)options;
- (void)setCacheImageWithURL:(nullable NSURL *)URL success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable UIImage *)placeholder success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable UIImage *)placeholder options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable UIImage *)placeholder options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)setCacheHighlightedImageWithURL:(nullable NSURL *)URL;
- (void)setCacheHighlightedImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options;
- (void)setCacheHighlightedImageWithURL:(nullable NSURL *)URL success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheHighlightedImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;
- (void)setCacheHighlightedImageWithURL:(nullable NSURL *)URL options:(KZ_WebCacheImageOptions)options progress:(nullable KZ_WebCacheImageDownloaderProgressBlock)progress success:(nullable KZ_WebCacheImageDownloaderFinishedBlock)success failure:(nullable KZ_WebCacheImageDownloaderFailedBlock)failure;

- (void)setAnimationImagesWithURLs:(nonnull NSArray<NSURL *> *)arrayOfURLs;
- (void)cancelCurrentAnimationImagesLoad;

@end
