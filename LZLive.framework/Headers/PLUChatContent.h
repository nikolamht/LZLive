//
//  PLUChatContent.h
//  TGA
//
//  Created by mafengxin on 16/9/21.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LZChatMsgModel.h"

#define Color_DefaultMain [UIColor colorFromHexRGB:@"ff7e00"]
#define Color_DefaultUserName [UIColor colorFromHexRGB:@"2e3c4e" alpha:0.6]
#define Color_DefaultAction [UIColor colorFromHexRGB:@"2e3c4e" alpha:0.8]
#define Color_DefaultGoldGuardContent [UIColor colorFromHexRGB:@"b99662"]
#define Color_DefaultSliverGuardContent [UIColor colorFromHexRGB:@"8a9eaa"]
#define Color_DefaultStealthyUserName [UIColor colorFromHexRGB:@"D955FF"]
#define Color_DefaultGiftName [UIColor colorFromHexRGB:@"ff5267"]

@class YYTextLayout;

@interface PLUChatContent : NSObject

@property (nonatomic, strong, readonly) LZChatMsgModel * message;

@property (nonatomic, assign) CGFloat maxWidth;

@property (nonatomic, strong) UIFont *font;

@property (nonatomic, assign, readonly) CGFloat height;

@property (nonatomic, assign, readonly) CGFloat width;

@property (nonatomic, strong) NSMutableAttributedString *chatContent;

- (BOOL)handleMsg:(LZChatMsgModel *)message;

- (void)combineContent:(NSAttributedString *)string,...NS_REQUIRES_NIL_TERMINATION;

- (YYTextLayout *)calculateContentSize;

#pragma mark - base

- (NSAttributedString *)spaceAtt;

- (NSString *)originalGrade;

- (NSAttributedString *)grade;

- (NSAttributedString *)roomMangerIcon;

- (NSAttributedString *)funsIcon;

- (NSAttributedString *)sysIcon;

- (NSAttributedString *)vipIcon;

- (NSAttributedString *)roomNameAtt;

- (NSString *)vipEmoji;

- (NSAttributedString *)giftNameAndCount;

- (NSAttributedString *)guardIcon;

- (NSAttributedString *)buyGuardIcon;

- (NSMutableAttributedString *)buyGuardName;

- (NSAttributedString *)mhOpenboxContent;

- (NSAttributedString *)mhOpenboxFunsIcon;

#pragma mark - 神秘人

- (NSAttributedString *)stealthyIcon;

- (NSAttributedString *)stealthyNickname;

- (NSAttributedString *)stealthyNicknameForMyUser;

/**
 用户昵称 (真实昵称 or 神秘人(**))
 */
- (NSAttributedString *)stealthyNicknameAutoReal;

/**
 用户真实昵称
 */
- (NSMutableAttributedString *)userNameAttReal;

/**
 送给 主播
 */
- (NSAttributedString *)sendToHost;

/**
 送给 收礼人
 */
- (NSAttributedString *)sendToTarget;

/**
 送给 **自动选择
 */
- (NSAttributedString *)sendtoAuto;

/**
 target真实用户名
 */
- (NSMutableAttributedString *)targetUserNameReal;

/**
 开出 萌x1 ...
 */
- (NSMutableAttributedString *)openBoxItemAtt;

@end
