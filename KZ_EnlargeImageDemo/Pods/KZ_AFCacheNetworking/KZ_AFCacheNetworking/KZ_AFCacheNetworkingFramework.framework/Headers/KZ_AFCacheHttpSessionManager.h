//
//  KZ_AFCacheHttpSessionManager.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

//#import "AFHTTPSessionManager.h"
#import <AFNetworking/AFHTTPSessionManager.h>
#import "KZ_AFCachePolicyStyle.h"
#import "KZ_AFCacheRequestModel.h"

@interface KZ_AFCacheHttpSessionManager : AFHTTPSessionManager

+ (void)getContentWithURL:(NSString *)URLString method:(KZ_RequestMethod)method contentBlock:(void (^)(KZ_AFCacheRequestModel *requestModel))contentBlock;

+ (void)HTTPRequestWithRequestModel:(KZ_AFCacheRequestModel *)requestModel progress:(void (^)(NSProgress *downloadProgress))downloadProgress success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;

+ (void)deleteDatabase:(void (^)(BOOL finished))success;

@end
