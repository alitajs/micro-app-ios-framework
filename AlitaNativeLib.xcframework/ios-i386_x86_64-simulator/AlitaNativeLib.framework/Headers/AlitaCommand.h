//
//  AlitaCommand.h
//  MicroApp
//
//  Created by ashoka on 2020/10/7.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlitaCommandResult.h"
#import "AlitaJSBridge.h"

NS_ASSUME_NONNULL_BEGIN

// result 要调用 [AlitaCommandResult resultWithStatus:(AlitaCommandStatus)status message:(NSString * __nullable)message responseData:(id __nullable)responseData] 方法生成
typedef void (^AlitaJBResponseCallback)(NSDictionary *result);

@interface AlitaCommand : NSObject

@property (nonatomic, weak) AlitaJSBridge *bridge;

/**
 js调原生的入参参数
 */
@property (nonatomic, strong, readonly) id params;
/**
 回调
 */
@property (nonatomic, copy, readonly) AlitaJBResponseCallback responseCallback;

- (instancetype)initWithParams:(id __nullable)params responseCallback:(AlitaJBResponseCallback)responseCallback;

@end

NS_ASSUME_NONNULL_END
