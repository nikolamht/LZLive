//
//  LZRoomVM.h
//  LZLive
//
//  Created by ziya on 2017/5/3.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>


@class LZRoomInfoModel;

typedef void(^AudienceCallBack)(NSUInteger audienceCount);
typedef void(^RoomInfoCallBack)(LZRoomInfoModel *roomInfo);

@interface LZRoomVM : NSObject

/**
 观众人数
 */
@property (nonatomic, assign, readonly) NSInteger audienceCount;

/**
 房间信息
 */
@property (nonatomic, strong, readonly) LZRoomInfoModel *roomInfo;

/**
 房间信息
 */
@property (nonatomic, copy , readonly) NSArray *lastWeekStarList;


/**
 房间ID
 */
@property (nonatomic, strong, readonly) NSString *roomId;

/**
 观众人数变化回调
 */
@property (nonatomic, copy) AudienceCallBack audienceCallBack;

/**
 房间信息变化回调
 */
@property (nonatomic, copy) RoomInfoCallBack roomInfoCallBack;

#pragma mark - method
/**
 进入房间
 */
- (void)enterRoom:(NSString *)roomId audienceCount:(NSInteger)audienceCount;

/**
 离开房间
 */
- (void)leaveRoom;

/**
 手动刷新房间信息
 */
- (void)refreshRoomInfo;

/**
 手动刷新房间人数
 */
- (void)refreshAudienceCount;

- (void)getChatHotWord:(void (^)(NSArray<NSString *> *hotwords))completed;

/**
 获取上周周星数据
 */
- (void)requestLastWeekStar;

@end
