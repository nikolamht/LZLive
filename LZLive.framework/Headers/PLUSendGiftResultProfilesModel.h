//
//  PLUSendGiftResultProfilesModel.h
//  TGA
//
//  Created by mafengxin on 15/12/28.
//  Copyright © 2015年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LZChatMsgUserModel.h"

@class LZMsgItemBoxModel;

@interface PLUSendGiftResultProfilesModel : NSObject

@property(nonatomic,copy)NSString *removeBlock; // 解禁时间, 当用户禁言时出现 DateTime
@property(nonatomic,strong)NSNumber* block; // 禁言房间Id 0全房间, 当用户禁言时出现
@property(nonatomic,copy)NSArray* userexp; // 用户经验值
@property(nonatomic,copy)NSString* content; // 服务器处理过的弹幕内容, 当发送弹幕道具时出现
@property (nonatomic, strong) NSNumber *combo;
@property(nonatomic,copy) NSString *sportRoomId; // 阵营房间Id  当有阵营时出现
@property (nonatomic, strong) NSNumber *point;   // 对应阵营房间积分 当有阵营时出现
@property (nonatomic, strong) NSNumber *userGrade;

@property (nonatomic, strong) NSNumber *comboId;
@property(nonatomic,copy) NSString *itemName;
/**
 红包颜色类型 1红色、2金色
 */
@property (nonatomic, strong) NSNumber *level;
@property (nonatomic, strong) NSNumber *vipType;
@property (nonatomic, strong) NSNumber *guardType;
@property (nonatomic, strong) NSNumber *isYearGuard;
/**
 红包类型 1送礼发红包、2自己发红包、3主播送红包、4官方发红包、5金色红包、6赠送龙币红包
 */
@property (nonatomic, strong) NSNumber *type;
@property(nonatomic,copy) NSString *sendTime;
@property(nonatomic,copy) NSString *openTime;
@property (nonatomic, strong) NSNumber *redEnvelopeId;
@property (nonatomic, strong) NSNumber *number;


//----下面的参数暂时没有使用 值为空 -2016-05-17 14:30:08 -----
//@property(nonatomic,strong)NSNumber* usergrade; // 用户等级
//@property(nonatomic,strong)NSNumber* haschangegrade; // 用户是否升级了，1升级、0未升级
//@property(nonatomic,strong)NSNumber* hasMedal; // 用户粉丝等级是否升级，1升级、0未升级
//@property(nonatomic,strong)NSNumber* redEnvelopeId; // 红包id, 当红包出现时出现
@property(nonatomic,strong)NSNumber* uid; // 用户id, 当红包出现时出现，当发送沙发道具时出现
@property(nonatomic,copy)NSString* username; // 用户名, 当红包出现时出现，当发送沙发道具时出现
@property(nonatomic,strong)NSNumber* grade; // 用户等级, 当红包出现时出现，当发送沙发道具时出现
//@property(nonatomic,copy)NSString* avatar; // 用户头像, 当发送沙发道具时出现
//@property(nonatomic,strong)NSNumber* indexing; // 沙发位置, 当发送沙发道具时出现
//@property(nonatomic,strong)NSNumber* money; // 沙发消费元宝, 当发送沙发道具时出现
//@property(nonatomic,strong)NSNumber* combo;	// 道具连击次数	int	当道具连击时出现
@property (nonatomic, strong) PLUPersonalStealthlyModel *stealthy; //隐身信息

@property (nonatomic, strong) LZChatMsgUserModel *targetUser;

@property (nonatomic, strong) NSArray<LZMsgItemBoxModel *> *itemBox;
@end
