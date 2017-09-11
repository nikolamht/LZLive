//
//  PLURoomAdmireClient.h
//  Push
//
//  Created by plu-dev on 16/3/15.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LZRoomAdmireClient;

@protocol LZRoomAdmireClientDelegate <NSObject>

@optional

/**
 只有增加赞数量才会返回

 @param roomAdmireClient <#roomAdmireClient description#>
 @param admireCount <#admireCount description#>
 */
- (void)roomAdmireClient: (LZRoomAdmireClient*)roomAdmireClient admireCount: (NSInteger)admireCount;

@end


@interface LZRoomAdmireClient : NSObject

@property (nonatomic, weak) id<LZRoomAdmireClientDelegate> delegate;

@property (nonatomic, assign, readonly) NSInteger roomId;


- (instancetype)initWithReportInterval: (NSTimeInterval)reportInterval;

- (void)enterRoom:(NSInteger)roomId;

- (void)leaveRoom;

/**
 *  增加赞数量
 *
 *  @param admireCount 增加数
 */
- (void)increaseAdmireCount: (NSInteger)admireCount;

@end
