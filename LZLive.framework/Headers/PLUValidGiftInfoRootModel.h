//
//  PLUValidGiftInfoRootModel.h
//  TGA
//
//  Created by mafengxin on 15/12/14.
//  Copyright © 2015年 developer. All rights reserved.
//

#import "LZGiftInfoModel.h"


@interface PLUValidGiftTabModel : NSObject

/**
 tab名称
 */
@property(nonatomic,copy)NSString* name;

/**
 tab活动道具名列表
 */
@property (nonatomic, copy) NSArray<NSString *> *items;


/**
 tab下道具model列表 此字段由VM解析后赋值过来 否则nil 接口不下发model详细信息
 */
@property (nonatomic, copy) NSArray<LZGiftInfoModel *> *itemModels;

@end




@interface PLUValidGiftInfoRootModel : NSObject

/**
 策略id
 */
@property (nonatomic, strong) NSNumber * ID;

/**
 策略名称
 */
@property (nonatomic, copy) NSString * name;

/**
 开始时间
 */
@property(nonatomic,copy)NSString* startTime;

/**
 结束时间
 */
@property(nonatomic,copy)NSString* endTime;

/**
 活动道具名列表
 */
@property (nonatomic, strong) NSArray<NSString *> *activityItems;

/**
 道具名Tab列表
 */
@property (nonatomic, copy) NSArray<PLUValidGiftTabModel *> * tabItems;

@end
