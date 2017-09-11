//
//  LZLiveCenterConfig.h
//  Pods
//
//  Created by ziya on 2017/5/8.
//
//

#import <Foundation/Foundation.h>


@interface LZLiveCenterConfig : NSObject

@property (nonatomic, copy) NSString *username;

@property (nonatomic, copy) NSString *token;

@property (nonatomic, copy) NSString *ppuid;

@property (nonatomic, copy) NSString *nickName;

@property (nonatomic, assign, getter = isVip) BOOL vip;

@property (nonatomic, copy) NSString *phoneNumber;

@property (nonatomic, assign) BOOL isCanSendHotWord;

@property (nonatomic, assign) BOOL isCanAttention;

@property (nonatomic, copy) NSString *moneyName;

@property (nonatomic, copy) NSString *entireLiveWarming;

@property (nonatomic, assign) BOOL showDetailed; // 充值页面是否显示消费明细

@property (nonatomic, assign) BOOL showGlftDownloadDebugView; //是否显示礼物下载测试view


@end
