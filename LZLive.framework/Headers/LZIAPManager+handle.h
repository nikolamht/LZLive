//
//  LZIAPManager+handle.h
//  Pods
//
//  Created by ziya on 2017/5/5.
//
//

#import "LZIAPManager.h"

typedef void(^LZTransactionCompleteHandle)(BOOL success, LZIAPModel *_Nonnull product, NSString * _Nonnull orderID, NSString *_Nullable receiptID, NSData *_Nullable receiptData);

typedef void(^LZProducts)(BOOL success, NSArray <LZIAPModel *> * _Nullable);

@interface LZIAPManager (handle)

+ (void)getLZProducts:(LZProducts _Nonnull )result;

+ (void)LZTradeWithID:(NSString *_Nonnull)orderID product:(LZIAPModel * _Nonnull)product complete:(LZTransactionCompleteHandle _Nonnull)complete;

@end


