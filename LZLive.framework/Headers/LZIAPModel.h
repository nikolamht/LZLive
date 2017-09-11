//
//  LZIAPModel.h
//  Pods
//
//  Created by ziya on 2017/5/5.
//
//

#import <Foundation/Foundation.h>

@interface LZIAPModel : NSObject

/**
 产品ID
 */
@property (nonatomic, copy) NSString *productID;

/**
 消费金额
 */
@property (nonatomic, strong) NSNumber *cost;

/**
 实际获得金额
 */
@property (nonatomic, strong) NSNumber *goods;

/**
 应pp体育要求加该字段 完全控制价格信息label
 */
@property (nonatomic, copy) NSString *costInfo;

/**
 应pp体育要求加该字段 pp体育支付成功给该字段赋值  方便后台筛选
 */
@property (nonatomic, strong) NSString *transactionId;

@end
