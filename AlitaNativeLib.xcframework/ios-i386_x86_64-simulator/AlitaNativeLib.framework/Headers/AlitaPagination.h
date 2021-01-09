//
//  AlitaPagination.h
//  AlitaNativeLib
//
//  Created by ashoka on 2020/10/19.
//  Copyright © 2020 iWhaleCloud. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AlitaPagination : NSObject

// 总记录数
@property (nonatomic, assign) NSUInteger total;
// 每页数量
@property (nonatomic, assign) int size;
// 当前页
@property (nonatomic, assign) NSUInteger current;
// 总页数
@property (nonatomic, assign) NSUInteger pages;

@end

NS_ASSUME_NONNULL_END
