//
//  KZ_WebCacheHeader.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2018/5/2.
//  Copyright © 2018年 Kieron Zhang. All rights reserved.
//

#ifndef KZ_WebCacheHeader_h
#define KZ_WebCacheHeader_h

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#define KZ_ImageView UIImageView
#define KZ_Image UIImage
#define KZ_Button UIButton
#elif TARGET_OS_MAC
#import <Cocoa/Cocoa.h>
#define KZ_ImageView NSImageView
#define KZ_Image NSImage
#define KZ_Button NSButton
#endif

#endif /* KZ_WebCacheHeader_h */
