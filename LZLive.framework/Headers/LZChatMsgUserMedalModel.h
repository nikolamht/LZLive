//
//  LZChatMsgUserMedalModel.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/3.
//  Copyright © 2017年 songnaiyin. All rights reserved.
//


#import <Foundation/Foundation.h>

/**
 用户勋章定义
 */
@interface LZChatMsgUserMedalModel : NSObject

/**
 房间id
 */
@property(nonatomic, strong) NSNumber *roomId;

/**
 房间域名
 */
@property(nonatomic, copy) NSString *domain;

/**
 粉丝值
 */
@property(nonatomic, strong) NSNumber *fan;

/**
 粉丝等级
 */
@property(nonatomic, strong) NSNumber *level;

/**
 勋章名称
 */
@property(nonatomic, copy) NSString *name;

@end
