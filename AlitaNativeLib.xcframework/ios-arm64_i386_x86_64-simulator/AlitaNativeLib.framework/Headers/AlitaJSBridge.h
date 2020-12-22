//
//  AlitaJSBridge.h
//  AlitaNativeLib
//
//  Created by ashoka on 2020/10/17.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "AlitaWebViewController.h"
#import "AlitaJSBridgeHeaders.h"

NS_ASSUME_NONNULL_BEGIN

@interface AlitaJSBridge : NSObject<WKNavigationDelegate, AlitaJSBridgeBaseDelegate>

@property (nonatomic, weak) AlitaWebViewController *viewController;

+ (instancetype)bridgeForWebView:(WKWebView*)webView;
//+ (void)enableLogging;

- (void)registerHandler:(NSString*)handlerName handler:(WVJBHandler)handler;
- (void)removeHandler:(NSString*)handlerName;
- (void)callHandler:(NSString*)handlerName;
- (void)callHandler:(NSString*)handlerName data:(id)data;
- (void)callHandler:(NSString*)handlerName data:(id __nullable)data responseCallback:(WVJBResponseCallback __nullable)responseCallback;
- (void)reset;
- (void)setWebViewDelegate:(id)webViewDelegate;
- (void)disableJavscriptAlertBoxSafetyTimeout;

@end

NS_ASSUME_NONNULL_END
