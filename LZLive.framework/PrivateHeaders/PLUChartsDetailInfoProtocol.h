//
//  PLUChartsDetailInfoProtocol.h
//  TGA
//
//  Created by mafengxin on 16/9/6.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PLUChartsDetailInfoProtocol <NSObject>
//图片
@property(nonatomic, copy) NSString *avatar;
//名称
@property(nonatomic, copy) NSString *nickname;
//主播等级
@property(nonatomic, strong) NSNumber *roomGrade;
//用户等级
@property(nonatomic, strong) NSNumber *userGrade;
//贡献值,粉丝值等
@property(nonatomic, strong) NSNumber *score;
//排名
@property(nonatomic, strong) NSNumber *rank;
//是否在直播
@property(nonatomic, assign) BOOL isLive;
//房间号
@property(nonatomic, strong) NSNumber *roomId;

@property(nonatomic, strong) NSNumber *uid;

@property (nonatomic, strong)  NSNumber *topCount;

@property (nonatomic, strong)  NSNumber *count;

@optional

@property (nonatomic, assign)  BOOL isHide;

@property (nonatomic, copy)  NSString *secretPersonNickname;

@property (nonatomic, copy)  NSString *secretPersonAvatar;
@property(nonatomic, copy) NSString *domain;

@property (nonatomic, copy) NSString *logo;             // 阵营 logo

@end
