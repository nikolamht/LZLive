//
//  LZRoomSegementView.h
//  LZLive
//
//  Created by songnaiyin on 2017/5/2.
//  Copyright © 2017年 songnaiyin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LZRoomSegementViewDelegate;

@interface LZRoomSegementView : UIView

@property (nonatomic, weak) id<LZRoomSegementViewDelegate> delegate;

@property (nonatomic, strong) UIColor *selectedColor;

@property (nonatomic, strong) UIColor *normalColor;

@property (nonatomic, assign, readonly) NSInteger currentIndex;

@property (nonatomic, assign) NSInteger showRedIndex;

- (instancetype)initWithTitleArr:(NSArray<NSString *> *)titleArr;

- (void)scrollViewDidScroll:(UIScrollView *)scrollView;

- (void)scrollViewDidEndDecelerating:(UIScrollView *)scrollView;

- (void)showRedDot:(bool)show showindex:(NSInteger)index;

- (void)showNewIcon:(BOOL)show withIndex:(NSInteger)index ;

@end


@protocol LZRoomSegementViewDelegate <NSObject>

@optional
- (void)lzRoomSegementView:(LZRoomSegementView *)view didSelectedAtIndex:(NSInteger)index;

@end
