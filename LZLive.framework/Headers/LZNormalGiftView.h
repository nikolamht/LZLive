//
//  LZNormalGiftView.h
//  TGA
//
//  Created by mafengxin on 16/3/31.
//  Copyright © 2016年 developer. All rights reserved.
//
#import <UIKit/UIKit.h>

#import "LZChatMsgModel.h"

@interface LZNormalGiftView : UIView

@property (nonatomic, assign) NSUInteger concurrentCount;

@property (nonatomic, assign) BOOL horizantol;

+ (instancetype)giftViewWithconCurrentCount:(NSUInteger)count frame:(CGRect) frame;

- (void)addAnimationInfo:(LZChatMsgModel *)msg;

- (void)stopAllAnimation;

@end
