//
//  AlitaCommandResult.h
//  AlitaNativeLib
//
//  Created by ashoka on 2020/10/16.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AlitaCommandStatus) {
    AlitaCommandStatus_OK = 0,
    AlitaCommandStatus_CLASS_NOT_FOUND_EXCEPTION,
    AlitaCommandStatus_INVALID_ACTION,
    AlitaCommandStatus_ERROR,
};

@interface AlitaCommandResult : NSObject

+ (NSDictionary *)resultWithStatus:(AlitaCommandStatus)status message:(NSString * __nullable)message responseData:(id __nullable)responseData;

@end

NS_ASSUME_NONNULL_END
