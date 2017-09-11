//
//  LZChatMsgModel.h
//  TGA
//
//  Created by PLU Engineer on 15/9/6.
//  Copyright (c) 2015年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LZChatMsgUserModel.h"
#import "LZChatMsgUserMedalModel.h"
#import "LZGiftInfoModel.h"
#import "PLUEnmuDefine.h"

@class LZMsgItemBoxModel;
@class PLUKickOutAndMuteOperatorModel;

@interface LZChatMsgModel : NSObject

@property (nonatomic, copy) NSString *msgType; // 消息类型
/** 内容 */
@property (nonatomic, copy) NSString *content;
/** 生成时间*/
@property (nonatomic, copy) NSString *time; // DateTime

//@property (nonatomic, strong) NSNumber *via;
/** 用户模型 */
@property (nonatomic, strong) LZChatMsgUserModel *user;
@property (nonatomic, assign) PLUUserType userType;

@property (nonatomic, strong) LZChatMsgUserModel *targetUser;
@property (nonatomic, assign) PLUUserType targetUserType;

@property(nonatomic,assign) int maxPresentCount;
#pragma mart - joinroom
/** 等级 */
@property (nonatomic, strong, readonly) NSNumber *grade;

@property (nonatomic, strong) NSNumber *userGrade;
/** 用户id */
@property (nonatomic, strong) NSNumber *uid;
/** 用户名 */
@property (nonatomic, copy) NSString *username;

@property (nonatomic, copy) NSString *avatar;

@property (nonatomic, strong) NSNumber *roomGrade;

#pragma mart - appendlivereason
//0:正常；101:举报关闭；102:直播网络质量差；999:其他
@property (nonatomic, assign) NSInteger code;

// 3.4.5 add
@property(nonatomic, strong)LZChatMsgUserMedalModel *medal; // 用户勋章

@property(nonatomic, copy)NSString *color; // 发送弹幕消息时出现 颜色

@property(nonatomic, strong)NSNumber *combo; // 连击次数

@property (nonatomic, strong) NSNumber *maxCombo;

@property(nonatomic, copy)NSString *title; // 标题

@property (nonatomic, assign) NSInteger liveStreamType;

@property(nonatomic, copy)NSString *html; // 播放结构

@property(nonatomic, copy)NSString *ppvip;

// 3.8 add
@property(nonatomic, copy)NSString *sportRoomId; // 阵营房间Id (当有阵营房间时出现)
// 3.9.7 add
//@property(nonatomic, copy) NSString *clubId;  // 俱乐部Id (当是新体育时出现)
// 3.9.7 add
@property (nonatomic, assign) PLUHrefType hrefType; // 当前房间类型

//礼物相关
@property(nonatomic,copy)NSString *itemType;

@property(nonatomic,strong)NSNumber* number;

@property (nonatomic, strong) LZGiftInfoModel *giftInfo;

/** playId **/
@property (nonatomic, copy) NSNumber *playId;

@property (nonatomic, assign) BOOL isFree;

// 3.8 add
@property (nonatomic, copy) NSNumber *point; // 对应阵营房间积分 (当有阵营时出现)

@property (nonatomic, assign) MsgType msgTypeInfo;

@property (nonatomic, assign) MsgSourceType msgSourceType;

@property (nonatomic, assign) NSInteger watchRoomId;//当前观看主播的roomId

@property (nonatomic, copy) NSString *roomName;

@property (nonatomic, strong) NSNumber *roomId;

#pragma mark - v3.8.3 踢人
/**
 踢人的uid
 */
@property (nonatomic, strong) NSNumber *operatorUid;
/**
 被踢的剩余时间
 */
@property (nonatomic, assign) NSTimeInterval expire;
/**
 踢人操作者的信息
 */
@property (nonatomic, strong) PLUKickOutAndMuteOperatorModel *operatorUser;
/**
 被禁言者的信息
 */
@property (nonatomic, strong) PLUKickOutAndMuteOperatorModel *touser;
/**
 禁言:true 解除禁言:false
 */
@property (nonatomic, assign) BOOL enable;

#pragma mark - 3.8.3 vip相关接口在这层还返回了"isValid"，"isBlock","removeBlock"，"block"等 暂没添加
/**
 vip等级 0为非vip
 */
@property (nonatomic, strong) NSNumber *vipType;

@property (nonatomic, strong) NSNumber *guardType;

@property (nonatomic, strong) NSNumber *isYearGuard;
//当前购买守护类型
@property (nonatomic, strong) NSNumber *currentBuyGuardType;
//当前购买守护时长
@property (nonatomic, strong) NSNumber *buyGuardOriginalDays;

//表示这消息是否是为开通守护下发的，仅当为 ture 的时候接口才会下发该字段
@property (nonatomic, assign) BOOL isBuyGuard;

//表示这消息是否是为开通年费守护下发的，仅当为 ture 的时候接口才会下发该字段
@property (nonatomic, assign) BOOL isBuyYearGuard;

// 主播名称(头条的用)
@property (nonatomic, copy) NSString *hostName;

/**
 发送的vip表情ID
 */
@property (nonatomic, strong) NSNumber *emojiId;

#pragma mark - 有人发红包消息
/**
 红包数量
 */
@property (nonatomic, strong) NSNumber *redBagNum;
/**
 红包过期时间戳
 */
@property (nonatomic, assign) long long redBagExpireTime;

/**
 红包ID
 */
@property (nonatomic, strong) NSNumber *redEnvelopeId;
/**
 红包消息时:红包类型 1送礼发红包、2自己发红包、3主播送红包、4官方发红包、5金色红包、6赠送龙币红包
 roomchangeStream时：Change 插入 Quite退出 TryAgain重试 Close关闭原始房间
 体育彩票时：0=竞猜，1=彩票
 */
@property (nonatomic, copy) NSString *type;
/**
 红包颜色类型 1红色、2金色
 */
@property (nonatomic, strong) NSNumber *level;
/**
 开放领取时间
 */
@property (nonatomic, copy) NSString *open;
/**
 红包状态 1可领取 2领取完毕
 */
@property (nonatomic, strong) NSNumber *status;
#pragma mark -  有人抢红包
//领取红包的用户的信息
@property (nonatomic, strong) LZChatMsgUserModel *myUser;
//领取红包的用户的勋章
@property (nonatomic, strong) LZChatMsgUserMedalModel *myMedal;
//领取红包的用户的类型
@property (nonatomic, assign) PLUUserType myUserType;

#pragma mark - 跳转到体育房间消息
// 体育PK房间 跳转
@property (nonatomic, strong) NSNumber *PrimaryRoomId;

// 体育房间更换阵营信息时做比较
@property (nonatomic, copy)   NSString *AgainstInfo;

// 体育房间更换阵营相关所有房间信息 "189314,1026981,1026860,1026861"
@property (nonatomic, copy)   NSString *AgainstRoomIds;

// 体育PK房间 加入房间
@property (nonatomic, strong) NSNumber *SwitchRoomId;

// 俱乐部 加入房间
@property (nonatomic, strong) NSNumber *SwitchTeamId;
;
// 体育PK房间 PK值
@property (nonatomic, copy)   NSArray<NSNumber *> *scores;

// 主播名称(从本房间的 roomStatus 中取)
@property (nonatomic, copy) NSString *anchorName;

//任务奖励
@property (nonatomic, copy)   NSArray<NSString *> *rewards;


//任务进度更新发出ws本房间通知
//任务名称
@property (nonatomic, copy) NSString *name;
//任务每天的key
@property (nonatomic, copy) NSString *day;
//即将完成的阶段（关卡）系数，3代表即将完成第3关
@property (nonatomic, strong) NSNumber *stage;
//进度值(0-100)，80代表进度达到80%
@property (nonatomic, strong) NSNumber *progress;

#pragma mark - 领取周星消息
@property (nonatomic, copy) NSString *position; //headline头条、rolling轮询
@property (nonatomic, strong) NSNumber *moneyCost; // 周星奖励金额

//周星礼物名称 非后端下发
@property (nonatomic, copy) NSString *weekStarGiftName;
//开出宝箱道具
@property (nonatomic, strong) NSArray<LZMsgItemBoxModel *> *itemBox;


@end
