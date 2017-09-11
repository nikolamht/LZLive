//
//  LZRoomManager.h
//  LZLive
//
//  Created by ziya on 2017/4/27.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PLUEnmuDefine.h"

#import "LZRoomInfoModel.h"

#import "LZChatClient.h"

#import "LZRoomVM.h"

#import "LZNormalGiftView.h"

#import "LZExpensiveGiftView.h"

#import "LZRoomAdmireClient.h"

#import "LZFlyAdmireView.h"

#import "LZRoomBottomView.h"

#import "LZRoomAdmireClient.h"

#import "LZAudiencesListView.h"

#import "LZBarrageManager.h"

#import "PLUGiftContainerView.h"

typedef NS_ENUM(NSUInteger, LZRoomType) {
    LZRoomTypeList,
    LZRoomTypeNormal
};

typedef NS_ENUM(NSUInteger, LZRoomManagerMsgType) {
    LZRoomManagerMsgType_roomClose, //房间封停
    LZRoomManagerMsgType_liveEnd, //直播结束
    LZRoomManagerMsgType_liveStart, //直播开始
    LZRoomManagerMsgType_kickOutRoom, //踢出房间
    LZRoomManagerMsgType_notNetwork //无网络
};

@protocol LZRoomManagerDelegate;

@interface LZRoomManager : NSObject

/**
 代理
 */
@property (nonatomic, weak) id<LZRoomManagerDelegate> delegate;

/**
 房间信息(进入房间会调用一个接口获取roominfo, 所以开始时时nil, 如果要确保获取roominfo, 从代理中获取)
 */
@property (nonatomic, strong, readonly) LZRoomInfoModel *roomInfo;

/**
 点赞相关
 */
@property (nonatomic, strong, readonly) LZRoomAdmireClient *admireClient;

/**
 点赞的View
 */
@property (nonatomic, strong, readonly) LZFlyAdmireView *admireView;

/**
 普通礼物动画View
 */
@property (nonatomic, strong, readonly) LZNormalGiftView *normalGiftView;

/**
 高级礼物动画View
 */
@property (nonatomic, strong, readonly) LZExpensiveGiftView *expensiveGiftView;

/**
 观众列表View
 */
@property (nonatomic, strong, readonly) LZAudiencesListView *audiencesListView;

/**
 底部view
 */
@property (nonatomic, strong, readonly) LZRoomBottomView *roomBottomView;

/**
 礼物栏
 */
@property (nonatomic, strong, readonly) PLUGiftContainerView *giftContainerView;

/**
 弹幕
 */
@property (nonatomic, strong, readonly) LZBarrageManager *barrageMngr;

/**
 分享URL
 */
@property (nonatomic, copy, readonly) NSString *shareUrl;

@property (nonatomic, copy, readonly) NSString *roomId;

- (instancetype)initWithType:(LZRoomType)type;

/**
 进入/切换房间
 */
- (void)enterRoom:(NSString *)roomId;

/**
 离开房间
 */
- (void)leaveRoom;

/**
 发送消息
 */
- (void)sendMsg:(NSString *)msg;

/**
 获取聊天热词
 */
- (void)getChatHotWord:(void (^)(NSArray<NSString *> *hotwords))completed;

/**
 获取播放地址
 */
- (void)getPlayUrlCompleted:(void(^)(NSDictionary *dict))completed;

@end



@protocol LZRoomManagerDelegate <NSObject>

@optional
/**
 房间人数变化
 */
- (void)roomManager:(LZRoomManager *)roomManager audienceCountDidChange:(NSInteger)audienceCount;

/**
 房间状态信息发生变化
 */
- (void)roomManager:(LZRoomManager *)roomManager roomStatusChange:(LZRoomInfoModel*)roomInfoModel;

/**
 收到特殊消息
 */
- (void)roomManager:(LZRoomManager *)roomManager didReceiveMsgType:(LZRoomManagerMsgType)msgType;

@end
