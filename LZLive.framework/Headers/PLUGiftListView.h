//
//  PLUGiftListView.h
//  TGA
//
//  Created by mafengxin on 16/3/30.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LZGiftInfoModel.h"
#import "PLUSendGiftResultModel.h"
#import "PLURoomGiftVM.h"

typedef void(^GiftSuccess)(LZGiftInfoModel *giftInfo,BOOL success, PLUSendGiftResultModel *result,NSError *error);

@protocol PLUGiftListViewDelegate <NSObject>

- (void)sendGift:(LZGiftInfoModel *) giftInfo count:(NSString *)count sendAll:(NSString *) sendAll selectIndex:(NSInteger )selectedIndex complete:(GiftSuccess) success ;

- (void)selectedItem:(BOOL) selected;
//拖拽礼物列表时改变pageControl的页码
- (void)changePageControlCurrentPag:(NSInteger )page;

@end

@interface PLUGiftListView : UICollectionView

@property (nonatomic, assign) NSInteger selectedIdx;

@property (nonatomic, assign) NSInteger lastSelectedIdx;

@property (nonatomic, copy) NSArray *items;

@property (nonatomic, weak) id<PLUGiftListViewDelegate> delegateSendGift;

@property (nonatomic, strong) LZGiftInfoModel *selectedGiftInfo;

@property (nonatomic, assign) BOOL horizontalMode;

@property (nonatomic, assign) PLUGiftListStyle giftListStyle;

@property (nonatomic, strong) PLURoomGiftVM *giftVM;

+(instancetype)giftListViewWithMode:(BOOL)horizontalMode;

+(instancetype)giftiPadListViewWithisFullScreen:(BOOL)isFull;


@end


