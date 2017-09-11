//
//  LZExpensiveGiftView.h
//  TGA
//
//  Created by mafengxin on 16/10/29.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LWFView.h"
#import "LZChatMsgModel.h"
#import "PLUGiftViewProtocol.h"

@protocol LZExpensiveGiftViewDelegate <NSObject>

- (void)lwfAnimationDidStop:(NSString *)animationName;

@end

@interface LZExpensiveGiftView : LWFView<PLUGiftViewProtocol>

@property (nonatomic, weak) id<LZExpensiveGiftViewDelegate> delegate;

- (void)attachView:(UIView *)view;

- (void)performAni:(LZChatMsgModel *)chat;

@end
