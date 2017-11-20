//
//  UIImage+KZ_Common.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (KZ_Common)

+ (UIImage *)kz_imageNamed:(NSString *)name;
+ (UIImage *)kz_imageWithData:(NSData *)data;

@end
