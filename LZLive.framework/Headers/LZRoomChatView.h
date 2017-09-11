//
//  LZRoomChatView.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/2.
//  Copyright © 2017年 songnaiyin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PLUStreamChatFrame.h"

#import "LZGiftListView.h"

@class PLUVipJoin;
@class PLUHeadLine;
@class PLUEntireSerialView;
@class PLULiveRoomAdsView;
@class LZActivityWebView;

@protocol LZRoomChatViewDelegate;

@protocol PLUClickUserProtocol;

@interface LZRoomChatView : UIView

@property (nonatomic, weak) id<LZRoomChatViewDelegate,PLUClickUserProtocol> delegate;

/**
 头条
 */
@property (nonatomic, readonly) PLUHeadLine *headLine;

/**
 vip入场通知
 */
@property (nonatomic, readonly) PLUVipJoin *vipJoin;

/**
 礼物栏
 */
@property (nonatomic, readonly) LZGiftListView *giftListView;

/**
 贴片广告
 */
@property (nonatomic, readonly) PLULiveRoomAdsView *adsView;

/**
 通用活动入口
 */
@property (nonatomic, readonly) LZActivityWebView *activityWebView;

/**
 设置礼物展示view
 */
- (void)setSerialView:(PLUEntireSerialView *)serialView;

/**
 更新聊天消息
 */
- (void)updateChatView:(NSArray <PLUStreamChatFrame *> *)chatItems;

- (void)updatePersonalIconBtn;

@property (nonatomic, readonly) UIButton *giftBtn;

@end

@protocol LZRoomChatViewDelegate <NSObject>

@optional

- (void)roomChatView:(LZRoomChatView *)view sendMessage:(NSString *)message;

- (void)roomChatViewGiftBtnClicked:(LZRoomChatView *)view;

- (void)roomChatViewEmojiClicked:(LZRoomChatView *)view;

- (void)roomChatViewPersonalBtnClicked:(LZRoomChatView *)view;

@end
