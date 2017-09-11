//
//  UIViewController+handle.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/18.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (handle)

/**
 直播间点击分享按钮

 @param vc 直播间vc
 @param shareInfo 分享参数
 */
+ (void)lzViewController:(UIViewController *)vc  shareBtnClick:(NSDictionary *)shareInfo;


/**
 直播间礼物按钮点击事件 用于统计
 */
+ (void)lzGiftBtnClick;

@end
