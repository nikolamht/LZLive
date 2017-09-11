//
//  LZBarrageManager.h
//  PPTVDM
//
//  Created by JiWuChao on 17/5/4.
//  Copyright © 2017年 JiWuChao. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

#import "LZChatMsgModel.h"

#import <PLUFoundation/PLUFoundation.h>

#import <PLUUIComponents/PLUUIComponents.h>

typedef enum : NSUInteger {
    BarragePositionTypeUpHalf,
    BarragePositionTypeAll,
    BarragePositionTypeDownHalf,
} BarragePositionType;


typedef enum : NSUInteger {
    BarrageFontTypeLittle = 0,
    BarrageFontTypeNormal,
    BarrageFontTypeBig,
} BarrageFontType;


@interface LZBarrageManager : NSObject

/** 弹幕 view */
@property (nonatomic, strong,readonly) PLUBarrageView *barragesShowView;

@property (nonatomic, assign) CGFloat barrageAlpha;
@property (nonatomic, readonly) BOOL barrageStarted;
@property (nonatomic, assign) BarrageFontType  barrageFontType;

@property (nonatomic, assign) BarragePositionType barragePositionType;

- (void)start;
- (void)stop;


//收到的消息展示（可能会根据系统资源占用情况显示或不显示）
- (void)showMsgs:(NSArray<LZChatMsgModel*> *)messages inDuration:(NSTimeInterval)duration;

//需要立即显示的调用此方法（如自己发送的消息）（必然会显示）
- (void)showMsg:(LZChatMsgModel *)message;

- (void)showInView: (UIView *)containerView
               top: (CGFloat)top
              left: (CGFloat)left
            bottom: (CGFloat)bottom
             right: (CGFloat)right;


@end
