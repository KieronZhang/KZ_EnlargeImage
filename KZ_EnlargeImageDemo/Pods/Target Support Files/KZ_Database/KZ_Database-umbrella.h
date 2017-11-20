#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "KZ_Database.h"
#import "KZ_DatabaseHeader.h"
#import "KZ_DatabaseManager.h"
#import "KZ_DatabaseNode.h"

FOUNDATION_EXPORT double KZ_DatabaseVersionNumber;
FOUNDATION_EXPORT const unsigned char KZ_DatabaseVersionString[];
