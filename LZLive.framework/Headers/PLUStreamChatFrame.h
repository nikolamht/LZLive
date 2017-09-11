//
//  PLUStreamChatFrame.h
//  TGA
//
//  Created by mafengxin on 16/11/5.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLUChatContent.h"

@interface PLUStreamChatFrame : NSObject

@property (nonatomic, assign) CGRect backViewFrame;

@property (nonatomic, assign) CGRect chatLblFrame;

@property (nonatomic, assign) CGRect gifFrame;

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign, readonly) BOOL userInteractionEnabled; //cell是否可点击

@property (nonatomic, strong, readonly) UIImage *backViewBgImage;

@property (nonatomic, copy, readonly) NSAttributedString *content;

@property (nonatomic, copy, readonly) NSString *vipEmoji;

@property (nonatomic, assign, readonly) BOOL isSpecialUser;

@property (nonatomic, assign, readonly) BOOL isUnknowMsg;

@property (nonatomic, strong) PLUChatContent *chat;

@property (nonatomic, strong) YYTextLayout *layout;

+ (instancetype)streamchatFrameWithChat:(PLUChatContent *)chat;

- (instancetype)initWithChat:(PLUChatContent *)chat;

@end
