//
//  LZRoomBaseInfoModel.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/4.
//  Copyright © 2017年 songnaiyin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LZRoomBaseInfoModel : NSObject


/**
 房间名
 */
@property (nonatomic, copy) NSString *Name;

/**
 主播头像
 */
@property (nonatomic, copy) NSString *Avatar;

@property (nonatomic, copy) NSString *Domain;

/**
 游戏ID
 */
@property (nonatomic, strong) NSNumber *Game;

@property (nonatomic, copy) NSString *GameName;

/**
 主播Id
 */
@property (nonatomic, strong) NSNumber *UserId;

@property (nonatomic, copy) NSString *UserTitle;

/**
 房间描述
 */
@property (nonatomic, copy) NSString *Desc;

@property (nonatomic, strong) NSNumber *Type;

@property (nonatomic, copy) NSString *AnchorCertification;

@property (nonatomic, strong) NSNumber *AnchorCategory;

@property (nonatomic, copy) NSString *BoardCastTitle;

@property (nonatomic, copy) NSString *BoardCastAddress;

@property (nonatomic, copy) NSString *VerifiedInformation;

/**
 关注数
 */
@property (nonatomic, strong) NSNumber *SubscribeCount;

@property (nonatomic, copy) NSString *WriteTime;

@property (nonatomic, strong) NSNumber *VideoPermission;

@property (nonatomic, strong) NSNumber *LivePermission;

@property (nonatomic, strong) NSNumber *Status;

/**
 roomId
 */
@property (nonatomic, strong) NSNumber *Id;
@end
