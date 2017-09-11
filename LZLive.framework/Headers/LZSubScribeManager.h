//
//  LZSubScribeManager.h
//  TGA
//
//  Created by mafengxin on 16/10/26.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PLUFollowStatus) {
    PLUNotFollow,       //0-未关注
    PLUFollow,          //1-已关注
    PLUMutualFollow,    //2-互相关注
};

typedef void(^SubScribeCompleted)(BOOL success, NSString *tips, NSInteger subscribeCount, PLUFollowStatus status);

@interface LZSubScribeManager : NSObject

@property (nonatomic, assign) BOOL prepared;

+ (instancetype)manager;

- (void)clear;

- (void)refresh;

+ (BOOL)isSubScribed:(NSInteger) userId;

+ (void)subscribeUserId:(NSInteger)userId success:(SubScribeCompleted)success;

+ (void)unSubscribeUserId:(NSInteger)userId success:(SubScribeCompleted)success;

@end
