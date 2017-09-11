//
//  PLURoomGiftVM.h
//  TGA
//
//  Created by mafengxin on 16/11/17.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LZGiftInfoModel.h"

#import "PLUValidGiftInfoRootModel.h"

typedef void(^refreshStock)(BOOL success);


@interface PLURoomGiftVM : NSObject

/**
 该房间有效tab  tab下有道具列表
 */
@property (nonatomic, strong) PLUValidGiftInfoRootModel * validGiftRootModel;

@property (nonatomic, strong) LZGiftInfoModel *activeGift;

@property (nonatomic, assign) RequestGiftsStatus giftsStatus;

@property (nonatomic, copy, readonly) NSString * roomId;

- (void)enterNewRoom:(NSString *) roomId;

- (void)refresh;

- (void)leaveRoom;

- (void)refreshItemStock:(NSArray<NSString *> *)items result:(refreshStock) success;

- (void)insertGifts:(NSArray<NSString *> *)giftNames;

#pragma mark - 数据上报
@property (nonatomic, assign) PLUHrefType roomType;

- (void)clickItem:(NSNumber *)itemId;

- (void)sendItem:(NSNumber *)itemId count:(NSNumber *)count;

- (void)clickItem:(NSNumber *)itemId idx:(NSNumber *)idx;

- (void)sendItem:(NSNumber *)itemId count:(NSNumber *)count idx:(NSNumber *)idx;

- (void)clickGiftIcon;

@end
