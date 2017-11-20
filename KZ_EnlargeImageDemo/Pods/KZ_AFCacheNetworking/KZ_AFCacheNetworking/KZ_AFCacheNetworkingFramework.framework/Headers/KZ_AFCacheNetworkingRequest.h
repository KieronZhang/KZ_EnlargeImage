//
//  KZ_AFCacheNetworkingRequest.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZ_AFCacheHttpSessionManager.h"
#import "KZ_AFCacheNetworkingQueueRequest.h"

@interface KZ_AFCacheNetworkingRequest : NSObject

+ (void)updateBaseURL:(NSString *)baseURL;

+ (void)HTTPRequestWithRequestModel:(KZ_AFCacheRequestModel *)requestModel progress:(void (^)(NSProgress *progress))progress success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure;
+ (void)addHTTPRequestWithRequestModel:(KZ_AFCacheRequestModel *)requestModel;
+ (void)startLoadRequestsWithResult:(void (^)(NSArray *resultArray))result;

@end
