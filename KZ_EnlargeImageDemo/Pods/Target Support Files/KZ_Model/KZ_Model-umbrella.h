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

#import "KZ_Model.h"
#import "KZ_ModelMapped.h"
#import "KZ_ModelProperty.h"

FOUNDATION_EXPORT double KZ_ModelVersionNumber;
FOUNDATION_EXPORT const unsigned char KZ_ModelVersionString[];

