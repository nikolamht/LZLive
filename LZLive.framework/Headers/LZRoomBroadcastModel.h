//
//  LZRoomBroadcastModel.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/4.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LZRoomBroadcastModel : NSObject

@property (nonatomic, copy) NSString *Address;

@property (nonatomic, copy) NSString *BeginTime;

@property (nonatomic, copy) NSString *Cover;

@property (nonatomic, strong) NSNumber *GameId;

@property (nonatomic, copy) NSString *GameName;

@property (nonatomic, copy) NSString *Html;

@property (nonatomic, strong) NSNumber *Latitude;

@property (nonatomic, strong) NSNumber *Longitude;

@property (nonatomic, strong) NSNumber *LiveSource;

@property (nonatomic, strong) NSNumber *LiveSourceType;

@property (nonatomic, strong) NSNumber *LiveType;

@property (nonatomic, strong) NSNumber *OS;

@property (nonatomic, strong) NSNumber *ParentGameId;

@property (nonatomic, copy) NSString *ParentGameName;

@property (nonatomic, strong) NSNumber *PlayId;

@property (nonatomic, strong) NSNumber *RoomId;

@property (nonatomic, copy) NSString *Title;

@property (nonatomic, copy) NSString *UpStreamUrl;

@property (nonatomic, strong) NSNumber *UserId;

@end
