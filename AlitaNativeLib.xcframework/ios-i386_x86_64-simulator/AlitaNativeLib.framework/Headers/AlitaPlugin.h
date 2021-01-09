//
//  AlitaNativePlugin.h
//  MicroApp
//
//  Created by ashoka on 2020/10/7.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AlitaCommand.h"

NS_ASSUME_NONNULL_BEGIN

@interface AlitaPlugin : NSObject

/// 插件名，js里调用的名字
+ (NSString *)pluginName;
+ (NSArray *)methodsList;

@end

NS_ASSUME_NONNULL_END
