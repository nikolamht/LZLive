//
//  PLUGiftView.h
//  TGA
//
//  Created by mafengxin on 16/3/23.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PLURoomGiftVM.h"
#import "PLUGiftListView.h"

typedef void(^HideAnimationCompletion)();
@protocol PLUGiftViewDelegate <NSObject>
@optional
/**
 *  送礼
 *
 *  @param giftInfo 礼物信息
 *  @param count    赠送数量
 *  @param sendAll  一次送完
 *  @param success  回调
 */
- (void)sendGift:(LZGiftInfoModel *) giftInfo count:(NSString *)count sendAll:(NSString *) sendAll selectIndex:(NSInteger)selectedIndex complete:(GiftSuccess) success;

/**
 *  送礼
 *
 *  @param giftInfo 礼物信息
 *  @param count    赠送数量
 *  @param sendAll  一次送完
 *  @param targetUserId   用户 id
 *  @param targetUserName 用户名
 *  @param success  回调
 */
- (void)sendGift:(LZGiftInfoModel *) giftInfo count:(NSString *)count sendAll:(NSString *) sendAll targetUserId:(NSNumber *)targetUserId targetUserName:(NSString *)targetUserName selectIndex:(NSInteger)selectedIndex complete:(GiftSuccess) success;

- (void)recharge;

@end

@interface PLUGiftView : UIView

@property (nonatomic, strong) PLURoomGiftVM *giftVM;

@property (nonatomic, weak) id<PLUGiftViewDelegate> delegate;

@property (nonatomic, weak) PLUGiftListView *giftLististView;

@property (nonatomic, assign) BOOL horizontalMode;

@property (nonatomic, assign) PLUGiftListStyle giftListStyle;

@property (nonatomic, strong) NSNumber *userId;

@property (nonatomic, copy) NSString *userName;

@property (nonatomic, strong) NSNumber* balance; // 元宝

+ (instancetype) giftViewWithMode:(BOOL) horizontalMode;

/**
 *  显示礼物列表
 */
- (void)giftListViewShow;
/**
 *  隐藏礼物列表
 *  @param hideAnimationCompletion  隐藏动画执行完的回调
 */
- (void)giftListViewHiden:(HideAnimationCompletion)hideAnimationCompletion;

- (void)cryoutStock;

@end


#pragma mark - bottomView

@protocol PLUGiftBottomViewDelegate <NSObject>

- (void)recharge;

@end

@interface PLUGiftBottomView : UIView

@property (nonatomic, weak) id<PLUGiftBottomViewDelegate> delegate;

@property (nonatomic, assign) PLUGiftListStyle giftListStyle;

@property (nonatomic, strong) NSNumber* balance; // 元宝

@property (nonatomic, assign) BOOL horizontalMode;

@end

