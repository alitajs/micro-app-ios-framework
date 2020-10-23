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

@property (nonatomic, strong) NSURL *appUrl;
@property (nonatomic, strong, readonly) WKWebView *webView;

- (void)setupNavBarWithBackgroundColor:(UIColor * __nullable)backgroundColor textColor:(UIColor * __nullable)textColor fontSize:(UIFont * __nullable)font;

@end

NS_ASSUME_NONNULL_END
