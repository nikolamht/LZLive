//
//  LZChatClient.h
//  LZLive
//
//  Created by ziya on 2017/4/27.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PLUEnmuDefine.h"

#import "LZChatMsgModel.h"

typedef NS_ENUM(NSUInteger, LZChatClientSendMsgCode) {
    LZChatClientSendMsgCode_success,
    LZChatClientSendMsgCode_failure,
    LZChatClientSendMsgCode_notLogin,
    LZChatClientSendMsgCode_emptyMsg,
    LZChatClientSendMsgCode_sendFast,
    LZChatClientSendMsgCode_block,
    LZChatClientSendMsgCode_bindPhone
};

@protocol LZChatClientProtocol;

typedef void(^SendMsgCallback)(LZChatClientSendMsgCode sendCode, LZChatMsgModel *response);

@interface LZChatClient : NSObject

@property (nonatomic, weak) id<LZChatClientProtocol> delegate;

@property (nonatomic, strong, readonly) NSString *roomId;

@property (nonatomic, assign, readonly) PLUHrefType roomType;

- (instancetype)initWithForceMBMsg:(BOOL)forceMBMsg;

- (void)sendMsg:(NSString *)msg
        vipInfo:(NSString *)info
      isForPPTV:(BOOL)isForPPTV
       callback:(SendMsgCallback)callback;

- (void)enterRoom:(NSString *)roomId roomType:(PLUHrefType)type;

- (void)leaveRoom;

@end
