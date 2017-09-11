//
//  LZLiveCenter.h
//  LZLive
//
//  Created by ziya on 2017/5/3.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LZLiveCenterConfig.h"

@interface LZLiveCenter : NSObject

+ (void)startWithConfig:(LZLiveCenterConfig *)config;

+ (void)userDidLogin:(NSString *)username token:(NSString *)token ppuid:(NSString *)uid;

+ (void)userDidLogout;

+ (void)nickNameDidUpdate:(NSString *)nickName;

+ (void)phoneNumberDidUpdate:(NSString *)phoneNumber;

+ (void)vipInfoDidUpdate:(BOOL)isVip;

/**
 根据gameId生成对应直播间的viewController
 */
+ (UIViewController *)createLiveViewControllerWithGameId:(NSString *)gameId roomId:(NSString *)roomId;

@end
