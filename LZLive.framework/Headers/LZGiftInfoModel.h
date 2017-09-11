//
//  LZGiftInfoModel.h
//  LZLive
//
//  Created by ziya on 2017/4/28.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLUEnmuDefine.h"

@interface PLUGiftOptionModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSNumber *num;
@property (nonatomic, copy) NSString *note;
@end


@interface PLUGiftPreActionParamsModel : NSObject

@property(nonatomic, strong) NSNumber* type;

@end


/**
 *  type = 0 点击策略  params下type = 0 则一次点击赠送一个
 */
@interface PLUGiftPreActionModel : NSObject
@property(nonatomic,strong)NSNumber* type;
@property(nonatomic,strong)PLUGiftPreActionParamsModel* params;
@end


@interface LZGiftInfoModel : NSObject

@property (nonatomic, copy) NSString *name; // 英文名称(小写字母或者数字组合) 用于发送道具和拼接图片使用
@property (nonatomic, copy) NSString *title; // 显示名称(中文)
@property (nonatomic, copy) NSString *startTime;
@property (nonatomic, copy) NSString *endTime;
@property (nonatomic, strong) NSNumber *maxLimit; // 赠送上限 用于前端展示赠送上限
@property (nonatomic, strong) NSNumber *moneyCost; // 元宝
@property (nonatomic, strong) NSNumber *onlineTimeCost; // 在线时长
@property (nonatomic, strong) NSNumber *beanCost; // 龙豆
@property (nonatomic, copy) NSArray<PLUGiftOptionModel*>* options; // 分档行为
//@property(nonatomic, copy) NSArray<PLUGiftPreActionModel *> *preActions; // 前置事件
@property(nonatomic, strong) NSNumber* clickMethod;//是否直接发送

@property (nonatomic, strong) NSNumber *costType;

@property (nonatomic, strong) NSNumber *costValue;

// 3.4.5新增
@property(nonatomic, strong) NSNumber *id; // 道具Id
@property(nonatomic, strong) NSNumber *type;	// 道具类型	0聊天室、1弹幕、2隐藏
@property(nonatomic, strong) NSNumber *category; // 道具类别 0未设置、1普通道具、2大额道具
@property(nonatomic, strong) NSNumber *kind;	// 道具类别(新) 0未设置、1普通道具、2大额道具 5红包道具
@property(nonatomic, copy) NSString *tag;	// 道具Tag图标	用于在道具栏图标右上角展示
@property(nonatomic, strong) NSNumber *experience; // 经验值 beanCost/100或moneyCost*100
@property(nonatomic, copy) NSString *nBannerIcon;
@property(nonatomic, copy) NSArray<PLUGiftPreActionModel *> *postActions; // 后置事件
@property(nonatomic, strong) NSNumber *comboInteval; // 连击时限(秒)

@property(nonatomic, copy) NSString *backgroundAppIcon2; //动画zip包校验码

@property(nonatomic, copy) NSString *backgroundAppIcon2Url;//动画zip包下载地址

@property(nonatomic, copy) NSString *consumeAppIconUrl; //url

@property(nonatomic, copy) NSString *consumeAppIcon; //crc校验码

@property (nonatomic, strong) NSNumber *contribution; // 贡献值

#pragma mark - 本地设置参数

@property (nonatomic, assign) giftType giftType;

@property (nonatomic, copy) NSString *giftIconUrl;

@property (nonatomic, assign) BOOL isFree;

@property (nonatomic, assign) NSInteger stock;//库存

@end
