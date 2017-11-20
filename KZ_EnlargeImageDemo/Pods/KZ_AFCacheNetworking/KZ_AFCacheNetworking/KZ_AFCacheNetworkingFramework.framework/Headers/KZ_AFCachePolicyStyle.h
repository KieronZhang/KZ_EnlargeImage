//
//  KZ_AFCachePolicyStyle.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

typedef NS_ENUM(NSInteger, KZ_CachePolicyStyle) {
    KZ_CachePolicyStyle_DoNotReadFromCache = 0, //不读缓存，也不会存库
    KZ_CachePolicyStyle_AlwaysReadFromCache, //总是读取缓存
    KZ_CachePolicyStyle_OnlyReadFromCacheWhenRequestFailed, //只有方式失败会读取缓存
    KZ_CachePolicyStyle_OnlyReadFromCacheWhenTimeExpired, //缓存过期之前获取缓存
    KZ_CachePolicyStyle_ReadFromCacheWhenTimeExpiredOrRequestFailed //缓存过期或者访问失败读取缓存
};

typedef NS_ENUM(NSInteger, KZ_RequestMethod) {
    KZ_RequestMethod_GET,
    KZ_RequestMethod_POST,
    KZ_RequestMethod_PUT,
    KZ_RequestMethod_PATCH,
    KZ_RequestMethod_DELETE,
    KZ_RequestMethod_HTML,
};
