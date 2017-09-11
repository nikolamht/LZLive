//
//  LZRoomInfoModel.h
//  LZLive
//
//  Created by ziya on 2017/4/27.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LZRoomBaseInfoModel.h"

#import "LZRoomBroadcastModel.h"

@interface LZRoomInfoModel : NSObject

@property (nonatomic, strong) NSNumber *CityId;// 用于显示方言

@property (nonatomic, strong) NSNumber *FlowerCount;

@property (nonatomic, strong) NSNumber *OnlineCount;

@property (nonatomic, assign) BOOL IsBroadcasting;// 是否正在直播

@property (nonatomic, copy) NSString *Vid;// 腾讯直播vid

@property (nonatomic, strong) NSNumber *CollegeId;

@property (nonatomic, strong) NSNumber *Contribution;

@property (nonatomic, strong) NSNumber *AppChatStatus;

@property (nonatomic, strong) NSNumber *RoomGrade;

@property (nonatomic, copy) NSString *RoomScreenshot;// 房间封面图

@property (nonatomic, strong) LZRoomBaseInfoModel *BaseRoomInfo;

@property (nonatomic, strong) LZRoomBroadcastModel *Broadcast;


@property (copy, nonatomic, readonly) NSString *gameId;
@property (copy, nonatomic, readonly) NSString *roomId;
@property (copy, nonatomic, readonly) NSString *userId;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *avatar;
@property (copy, nonatomic, readonly) NSString *userName;
@property (copy, nonatomic, readonly) NSString *desc;
@property (assign, nonatomic) NSInteger subscribeCount;
@property (copy, nonatomic, readonly) NSString *mediaId;
@property (copy, nonatomic, readonly) NSString *boardCastAddress;//直播地址来源
@property (copy, nonatomic, readonly) NSString *gameName;
@property (copy, nonatomic, readonly) NSString *verifiedInformation;

@end
