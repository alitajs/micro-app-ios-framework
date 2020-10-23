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

+ (BOOL)enableLogging;
+ (void)setEnableLogging:(BOOL)enable;
+ (UIViewController *)viewControllerWithURL:(NSURL *)url;
+ (void)viewController:(UIViewController *)viewController openWebWithZipURL:(NSURL *)url;
+ (void)viewController:(UIViewController *)viewController openWebWithRemoteZipURL:(NSURL *)url;
+ (void)viewController:(UIViewController *)viewController openMicroApp:(AlitaMicroApp *)microApp;

@end

NS_ASSUME_NONNULL_END
