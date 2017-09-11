//
//  PLUMyViewhistoryModel.h
//  TGA
//
//  Created by plu on 16/8/24.
//  Copyright © 2016年 developer. All rights reserved.
//

#import "PLUMyViewhistoryRoomModel.h"

@interface PLUFeedModel : NSObject
@property (nonatomic, strong) NSNumber *gameId;
@property (nonatomic, copy)   NSString *gameName;
@property (nonatomic, copy)   NSString *time;
@property (nonatomic, strong) NSNumber *id;
@property (nonatomic, copy)   NSString *title;
@property (nonatomic, copy)   NSString *cover;
@property (nonatomic, strong) NSNumber *timespan;
@property (nonatomic, copy)   NSString *url;

@end

@interface PLUMyViewhistoryModel : NSObject

@property (nonatomic, strong) PLUFeedModel *feed;// 
@property (strong, nonatomic) NSNumber *subscribeCount;
@property (strong, nonatomic) NSNumber *time;
@property (assign, nonatomic) NSInteger type;
@property (nonatomic, copy)   NSString *liveScreenPic;   // 观看记录封面显示截屏
@property (strong, nonatomic) PLUMyViewhistoryRoomModel *room;

@property (strong, nonatomic) NSNumber *roomId;

@property (assign, nonatomic) BOOL isSelected; //是否选中
@property (nonatomic, assign) BOOL isCompile; // 是否处在编辑状态

@end
