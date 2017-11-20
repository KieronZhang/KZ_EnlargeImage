//
//  KZ_AFCacheRequestModel.h
//  KZ_AFCacheNetworking
//
//  Created by Kieron Zhang on 2016/12/25.
//  Copyright © 2016年 Kieron Zhang. All rights reserved.
//

#import <KZ_DatabaseModelFramework/KZ_DatabaseModel.h>
#import "KZ_AFCachePolicyStyle.h"

@interface KZ_AFCacheRequestModel : KZ_DatabaseModel

@property (nonatomic, strong) NSString *baseURL; //baseURL 可以通过[KZ_AFCacheNetworkingRequest updateBaseURL:]方式设置全局baseURL
@property (nonatomic, strong) NSString *URLString; //访问路径
@property (nonatomic, assign) KZ_RequestMethod method; //访问方法
@property (nonatomic, strong) id parameters; //参数，如有上传文件，只需要放到updateParameters里
@property (nonatomic, strong) NSArray<NSString *> *blackListParameters; //中不入库的参数
@property (nonatomic, assign) NSTimeInterval timeoutInterval; //访问过期时间
@property (nonatomic, assign) KZ_CachePolicyStyle cachePolicy; //访问缓存方式
@property (nonatomic, assign) NSTimeInterval policyTimeExpried; //访问缓存过期时间

@property (nonatomic, strong) NSDictionary *updateParameters; //上传参数，如果设置了上传参数，则缓存方式只能是KZ_CachePolicyStyle_DoNotReadFromCache
@property (nonatomic, strong) NSString *fileName; //上传文件名字，默认是随机获取32位字符串作为文件名
@property (nonatomic, strong) NSString *mimeType; //上传文件类型，默认@"application/octet-stream"

@property (nonatomic, strong) NSDictionary *HTTPHeaderField; //设置http头文件
@property (nonatomic, strong) NSArray <NSString *> *acceptableContentTypes; //要增加的acceptableContentTypes，如果方法是HTML，则自动添加text/html
@property (nonatomic, assign) BOOL logURL; //是否打印URL 默认在DEBUG模式打开

//以下的属性不需要设置
@property (nonatomic, strong, readonly) NSString *requestURL; //访问的完整URL
@property (nonatomic, strong, readonly) NSString *databaseURL; //访问存储数据库的URL
@property (nonatomic, strong, readonly) NSString *methodString; //访问方法的string
@property (nonatomic, strong) id content; //访问请求回来的内容
@property (nonatomic, assign) NSTimeInterval requestTime; //访问时间
@property (nonatomic, strong) NSURLSessionDataTask *dataTask; //访问的对象，如果读取缓存则为空

- (void)updateURLs;

@end
