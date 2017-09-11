//
//  LZDataReportManager.h
//  LZLive
//
//  Created by JiWuChao on 17/5/17.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PLUAnalytics/PLUAnalytics.h>

//typedef NS_ENUM(NSUInteger, eReportPolicy) {
//    REPORT_SEND_REALTIME = 1,       //实时（5s发送一次）     (只在“集成测试”设备的DEBUG模式下有效)
//    REPORT_SEND_LAUNCH = 2,         //启动发送
//    REPORT_SEND_INTERVAL = 3,       //最小间隔发送  ([90-86400]s, default 90s)
//};


@interface LZDataReportManager : NSObject

/**
 数据上报初始化配置

 @param policy 策略 默认为REPORT_SEND_INTERVAL
 @param appkey  appkey string（服务器分配，不能为空）
 @param appscret appSecret string(服务器分配，不能为空)
 @param routeName route string 路由名称（服务器分配，不能为空）
 */
+ (void)startWithReportPolicy:(eReportPolicy)policy
                             withAppKey:(NSString *)appkey
                           withAppscret:(NSString *)appscret
                          withRouteName:(NSString *)routeName;
/**
 事件统计.
 @param eventId ec
 @param action ea
 @param label el
 @param value ev
 @param screenName cd
 @param attributes cds
 */
+ (void)event:(NSString *)eventId
       action:(NSString *)action
        label:(NSDictionary *)label
        value:(NSString *)value
       screen:(NSString *)screenName
   attributes:(NSDictionary *)attributes;


/**
 页面统计.
 
 @param pageName cd
 */
+ (void)logPageView:(NSString *)pageName;


@end
