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
/// 当微应用为主应用时，可使用下面属性隐藏导航栏
@property (nonatomic, assign) BOOL hideNavBar;

- (instancetype)initWithAppUrl:(NSURL *)appUrl userData:(NSDictionary * __nullable)userData;

- (void)setupNavBarWithBackgroundColor:(UIColor * __nullable)backgroundColor textColor:(UIColor * __nullable)textColor fontSize:(UIFont * __nullable)font;
- (void)showLaunchView:(BOOL)visible;
- (void)callHandler:(NSString*)handlerName data:(id __nullable)data responseCallback:(void (^ __nullable)(id responseData))responseCallback;

@end

NS_ASSUME_NONNULL_END
