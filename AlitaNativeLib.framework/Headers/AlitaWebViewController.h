//
//  AlitaWebViewController.h
//  MicroApp
//
//  Created by ashoka on 2020/10/12.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AlitaWebViewController : UIViewController

// 网页地址
@property (nonatomic, strong) NSURL *appUrl;
// 初始数据
@property (nonatomic, copy) NSDictionary *userData;
@property (nonatomic, strong, readonly) WKWebView *webView;

- (instancetype)initWithAppUrl:(NSURL *)appUrl userData:(NSDictionary *)userData;

- (void)setupNavBarWithBackgroundColor:(UIColor * __nullable)backgroundColor textColor:(UIColor * __nullable)textColor fontSize:(UIFont * __nullable)font;
- (void)showLaunchView:(BOOL)visible;

@end

NS_ASSUME_NONNULL_END
