//
//  AlitaMicroAppConfig.h
//  AlitaNativeLib
//
//  Created by ashoka on 2020/11/27.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AlitaMicroAppConfig : NSObject

/// 通过解压包路径初始化
/// @param path 解压包路径
- (instancetype)initWithPkgPath:(NSString *)path;

/** manifest json - begin */
@property (nonatomic, copy) NSString *name; // 微应用名称
@property (nonatomic, copy) NSString *version; // 微应用版本
@property (nonatomic, copy) NSString *appId;  // 微应用 appId
@property (nonatomic, copy) NSString *alitaVersion; // 依赖的 alita 版本号
@property (nonatomic, copy) NSDictionary *navBar; // 导航栏配置
@property (nonatomic, strong) UIColor *backgroundColor; // 页面背景色
@property (nonatomic, copy) NSDictionary *statuBar; // 状态栏背景色
/** manifest json - end */

@property (nonatomic, strong) NSString *iconPath;

@end

NS_ASSUME_NONNULL_END
