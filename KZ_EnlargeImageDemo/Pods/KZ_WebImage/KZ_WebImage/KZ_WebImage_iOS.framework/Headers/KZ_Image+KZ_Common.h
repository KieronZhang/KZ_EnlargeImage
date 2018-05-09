//
//  KZ_Image+KZ_Common.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import "KZ_WebCacheHeader.h"

@interface KZ_Image (KZ_Common)

@property (nonatomic, assign, readonly) BOOL isGif;

+ (KZ_Image *)kz_imageNamed:(NSString *)name;
+ (KZ_Image *)kz_imageWithData:(NSData *)data;

@end
