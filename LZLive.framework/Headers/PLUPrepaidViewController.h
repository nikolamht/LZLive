//
//  PLUPrepaidViewController.h
//  TGA
//
//  Created by plu on 15/12/1.
//  Copyright © 2015年 developer. All rights reserved.
//
#import <UIKit/UIKit.h>

#define kPopwindow @"popwindow"// 余额不足跳转
///
#define kTopup     @"topup" // 点击充值跳转

@interface PLUPrepaidViewController : UIViewController

@property (nonatomic, assign) double currbalanceCount; // 当前元宝数量
@property (nonatomic) BOOL isPresent;

#pragma mark - 用于友盟埋点
@property (nonatomic, strong) NSString *roomType;
@property (nonatomic, strong) NSString *payType;

@end
