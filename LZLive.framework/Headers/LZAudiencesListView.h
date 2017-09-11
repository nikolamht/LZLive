//
//  PLUEntireTopView.h
//  LZLive
//
//  Created by 刘祖荣 on 17/5/4.
//  Copyright © 2017年 songnaiyin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LZEntireLiveRoomOnLineUserModel;
@protocol LZAudiencesListViewDelegate <NSObject>

@optional

/**
 点击在线用户的代理
 */
-(void)selectedUserWithModel:(LZEntireLiveRoomOnLineUserModel *)model withIndex:(NSUInteger)index;


@end

@interface LZAudiencesListView : UIView

@property (nonatomic, weak) id<LZAudiencesListViewDelegate> delegate;

/**
 在线用户的数据源
 */
@property (nonatomic, copy) NSArray<LZEntireLiveRoomOnLineUserModel *> *onLineDataSource;
@end
