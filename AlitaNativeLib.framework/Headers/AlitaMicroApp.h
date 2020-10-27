//
//  AlitaMicroApp.h
//  AlitaNativeLib
//
//  Created by ashoka on 2020/10/19.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlitaPagination.h"

NS_ASSUME_NONNULL_BEGIN

@interface AlitaMicroApp : NSObject

@property (nonatomic, copy) NSNumber *_id;
@property (nonatomic, copy) NSString *appid;
@property (nonatomic, copy) NSString *appsecret;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appDesc;
@property (nonatomic, copy) NSString *appIconUrl;
@property (nonatomic, copy) NSNumber *versionId;

/// 获取微应用列表
/// @param callback 回调
+ (NSURLSessionDataTask *)microAppListWithCallback:(void (^)(NSArray<AlitaMicroApp *> * __nullable list, AlitaPagination * __nullable pagination, NSError * __nullable error))callback;

/// 微应用下载链接
- (NSURL *)downloadURL;

@end

NS_ASSUME_NONNULL_END
