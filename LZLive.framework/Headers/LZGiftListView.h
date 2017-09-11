//
//  LZGiftListView.h
//  longzhu
//
//  Created by songnaiyin on 2017/2/17.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PLUGiftView.h"
#import "PLURoomGiftVM.h"

@interface LZGiftListView : UIView

@property (nonatomic, assign) PLUGiftListStyle giftListStyle;

@property (nonatomic, strong) NSNumber *balance; // 元宝

@property (nonatomic, weak)id<PLUGiftViewDelegate> delegate;

@property (nonatomic, strong) PLURoomGiftVM *giftVM;

- (void)showAtView:(UIView *)view;

- (instancetype)initWithFrame:(CGRect)frame horizontal:(BOOL)horizontal;

@end
