//
//  PLUSendGiftResultModel.h
//  TGA
//
//  Created by mafengxin on 15/12/28.
//  Copyright © 2015年 developer. All rights reserved.
//

#import <PLUFoundation/PLUFoundation.h>
#import "PLUSendGiftResultProfilesModel.h"
#import "LZChatMsgUserMedalModel.h"

@interface PLUSendGiftResultModel : NSObject

/**
 结果 1 成功  －1 未登录  －403 黑名单 －401 输入内容被系统和谐  －10 余额不足  －11 库存不足  －12 参数错误
 */
@property(nonatomic,strong)NSNumber* result;
/**
 道具库存
 */
@property(nonatomic,strong)NSNumber* inventory;
/**
 用户余额
 */
@property(nonatomic,strong)NSNumber* balance;
/**
 用户勋章
 */
@property(nonatomic,strong)LZChatMsgUserMedalModel* medal;
/**
 附加字段
 */
@property(nonatomic,strong)PLUSendGiftResultProfilesModel* profiles;
@end
