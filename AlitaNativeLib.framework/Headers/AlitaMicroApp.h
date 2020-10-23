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

+ (NSURLSessionDataTask *)microAppListWithMainAppid:(NSString *)mainAppId callback:(void (^)(NSArray<AlitaMicroApp *> * __nullable list, AlitaPagination * __nullable pagination, NSError * __nullable error))callback;

- (NSURL *)downloadURL;

@end

NS_ASSUME_NONNULL_END
