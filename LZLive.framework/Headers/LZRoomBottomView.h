//
//  LZRoomBottomView.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/2.
//  Copyright © 2017年 songnaiyin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LZRoomSegementView.h"

#import "LZRoomChatView.h"

#import "LZUserFollowInfoView.h"

#import "PLUStreamChatFrame.h"

@class LZAnchorInfoView;
@class LZStreamRankView;
@class LZRoomBottomView;
@class PLUAnchorProtectView;

@protocol PLUClickUserProtocol;
@protocol PLUAnchorProtectViewDelegate;


@protocol LZRoomBottomViewDelegate <LZRoomChatViewDelegate, PLUClickUserProtocol, LZUserFollowInfoViewDelegate, PLUGiftViewDelegate,PLUAnchorProtectViewDelegate>
@optional
- (void)roomBottomView:(LZRoomBottomView *)view didScrollToIndex:(NSInteger)index ;

@end

@interface LZRoomBottomView : UIView

@property (nonatomic, weak) id<LZRoomBottomViewDelegate> delegate;

/**
 当前滚动的index
 */
@property (nonatomic, assign, readonly) NSInteger currentIndex;

/**
 滚动视图
 */
@property (nonatomic, strong, readonly) UIScrollView *scrollView;

/**
 segmentView
 */
@property (nonatomic, strong, readonly) LZRoomSegementView *segmentView;

/**
 聊天View
 */
@property (nonatomic, strong, readonly) LZRoomChatView *chatView;

/**
 主播View
 */
@property (nonatomic, strong, readonly) LZAnchorInfoView *anchorInfoView;

/**
 排行榜view
 */
@property (nonatomic, strong, readonly) LZStreamRankView *rankView;

/**
 关注数view
 */
@property (nonatomic, strong, readonly) LZUserFollowInfoView *followInfoView;

/**
 守护列表
 */
@property (nonatomic, strong, readonly) PLUAnchorProtectView *guardView;


- (void)scrollToIndex:(NSInteger)index animated:(BOOL)animated;

@end
