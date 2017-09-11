//
//  LZLiveCenter+CommonData.h
//  LZLive
//
//  Created by songnaiyin on 2017/6/27.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import "LZLiveCenter.h"

#import <LZLive/PLUMyViewhistoryModel.h>

@interface LZLiveCenter (CommonData)

/**
 刷新用户金币 触发 PLUUserInfoUpdateNotification 通知
 */
+ (void)refreshCoin;

/**
 获取用户金币 
 */
+ (NSInteger)getCoin;


/**
 获取轮播图数据
 */
+ (void)getBannerDataSuccess:(void (^)(id responseObject))success
                     failure:(void (^)(NSError *error))failure;

/**
 获取通栏数据
 @param type 1 belle 美女随拍 2 game 游戏直播
 @param success 成功
 @param failure 失败
 */
+ (void)getColumnsDataWithType:(NSString *)type
                       success:(void (^)(id responseObject))success
                       failure:(void (^)(NSError *error))failure;


/**
 获取订阅列表
 @param idx 初始索引未知
 @param count 每页个数
 @param complete 回调
 */
+ (void)getFollowListWithStartIdx:(NSUInteger)idx
                        pageCount:(NSUInteger)count
                   completeHandle:(void (^)(NSDictionary *))complete;

/**
 获取观看记录
 */
+ (void)getHistory:(void (^)(BOOL success, NSArray<PLUMyViewhistoryModel *> *historyArray))complete;

/**
 删除指定的观看记录
 
 array 要删除的数据模型
 */
+ (void)deleteHistory:(NSArray<PLUMyViewhistoryModel *> *)array result:(void(^)(BOOL success))result;

/**
 删除全部观看记录
 */
+ (void)deleteAllHistoryResult:(void(^)(BOOL success))result;

/**
 根据roomid获取单房间信息
 */
+ (void)getRoomInfoRoomId:(NSString *)roomId
                  success:(void (^)(id responseObject))success
                  failure:(void (^)(NSError *error))failure;

@end
