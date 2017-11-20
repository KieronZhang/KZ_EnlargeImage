//
//  KZ_AFCacheNetworkingQueueRequest.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KZ_AFCacheHttpSessionManager.h"
#import "KZ_AFCacheRequestModel.h"

@interface KZ_AFCacheNetworkingQueueRequest : NSObject

+ (instancetype)sharedCacheNetworkingQueueRequest;

- (void)addHttpRequestWithRequestModel:(KZ_AFCacheRequestModel *)requestModel;
- (void)startLoadRequestsWithResult:(void (^)(NSArray *resultArray))result;

@end
