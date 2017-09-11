//
//  LZChatMsgUserModel.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/3.
//  Copyright © 2017年 songnaiyin. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PLUPersonalStealthlyModel;
@class LZChatMsgUserMedalModel;

@interface LZChatMsgUserModel : NSObject

@property (nonatomic, copy)     NSString *avatar;
@property (nonatomic, strong)   NSNumber *uid;
@property (nonatomic, copy)     NSString *username;
@property (nonatomic, strong)   NSNumber *userGrade;
@property (nonatomic, copy)     NSString *reuseId;
@property (nonatomic, strong)   NSNumber * geocode;        // 区位置ID
@property (nonatomic, strong)   NSNumber * sex;            // 性别 0未选 1女 2男

@property (nonatomic, strong)   LZChatMsgUserMedalModel *medal; // 用户勋章
@property (nonatomic, strong)   PLUPersonalStealthlyModel *stealthy; //隐身信息
@property (nonatomic, strong)   NSNumber *vipType;
@property (nonatomic, strong)   NSNumber *guardType;
@property (nonatomic, strong)   NSNumber *isYearGuard;

@end
