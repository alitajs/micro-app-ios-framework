//
//  AlitaNative.h
//  AlitaNativeLib
//
//  Created by ashoka on 2020/10/13.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AlitaMicroApp;

@interface AlitaNative : NSObject

/// 初始化主应用
/// @param appId 主应用id
+ (void)registerWithAppId:(NSString *)appId;

/// 主应用id
+ (NSString *)appId;

/// 是否打开打印
+ (BOOL)enableLogging;

/// 设置是否允许打印
/// @param enable 是否允许
+ (void)setEnableLogging:(BOOL)enable;

/// 打开一个微应用
/// @param url file:// 或 http(s):// 开头的链接
+ (UIViewController *)viewControllerWithURL:(NSURL *)url;

/// 创建一个微应用
/// @param url  file:// 或 http(s):// 开头的链接
/// @param userData 传给微应用的数据
+ (UIViewController *)viewControllerWithURL:(NSURL *)url userData:(NSDictionary * __nullable)userData;

/// 打开本地小程序压缩包
/// @param viewController 要打开小程序的控制器
/// @param url 本地压缩包文件地址
+ (void)viewController:(UIViewController *)viewController openWebWithZipURL:(NSURL *)url;

/// 打开远程小程序压缩包
/// @param viewController 要打开小程序的控制器
/// @param url 远程压缩包文件地址
+ (void)viewController:(UIViewController *)viewController openWebWithRemoteZipURL:(NSURL *)url;

/// 打开小程序对象
/// @param viewController 要打开小程序的控制器
/// @param microApp 小程序对象
+ (void)viewController:(UIViewController *)viewController openMicroApp:(AlitaMicroApp *)microApp;

/// 打开小程序
/// @param viewController 要打开小程序的控制器
/// @param microApp 小程序对象
/// @param userData 传给小程序的数据
+ (void)viewController:(UIViewController *)viewController openMicroApp:(AlitaMicroApp *)microApp withUserData:(NSDictionary * __nullable)userData;

/// 预下载列表里的微应用
/// @param microAppList 微应用列表
+ (void)downloadMicroAppList:(NSArray<AlitaMicroApp *> *)microAppList;

@end

NS_ASSUME_NONNULL_END
