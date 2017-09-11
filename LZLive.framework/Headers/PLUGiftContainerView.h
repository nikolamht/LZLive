//
//  PLUGiftContainerView.h
//  longzhu
//
//  Created by songnaiyin on 2017/2/17.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PLUGiftView.h"
#import "PLURoomGiftVM.h"

@interface PLUGiftContainerView : UIView

@property (nonatomic, assign) PLUGiftListStyle giftListStyle;

@property (nonatomic, strong) NSNumber *balance; // 元宝

@property (nonatomic, weak)id<PLUGiftViewDelegate> delegate;

@property (nonatomic, strong) PLURoomGiftVM *giftVM;

/*
 显示
 */
- (void)showAtView:(UIView *)view;

/*
 给用户送礼
 */
- (void)showAtView:(UIView *)view withUserId:(NSNumber *)userId wihtUserName:(NSString *)userName;

/*
 隐藏
 */
- (void)dismiss;


@end
