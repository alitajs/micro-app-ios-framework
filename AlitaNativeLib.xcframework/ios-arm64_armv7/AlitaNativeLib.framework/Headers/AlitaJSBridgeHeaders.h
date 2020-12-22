//
//  AlitaJSBridgeHeaders.h
//  AlitaNativeLib
//
//  Created by ashoka on 2020/12/22.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#ifndef AlitaJSBridgeHeaders_h
#define AlitaJSBridgeHeaders_h

#define kOldProtocolScheme @"wvjbscheme"
#define kNewProtocolScheme @"https"
#define kQueueHasMessage   @"__wvjb_queue_message__"
#define kBridgeLoaded      @"__bridge_loaded__"

typedef void (^WVJBResponseCallback)(id responseData);
typedef void (^WVJBHandler)(id __nullable data, WVJBResponseCallback responseCallback);
typedef NSDictionary WVJBMessage;

@protocol AlitaJSBridgeBaseDelegate <NSObject>
- (NSString* __nullable) _evaluateJavascript:(NSString*)javascriptCommand;
@end

#endif /* AlitaJSBridgeHeaders_h */
