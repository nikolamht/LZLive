//
//  PLUFlyAdmireView.h
//  TGA
//
//  Created by plu on 16/3/30.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol PLUFlyAdmireViewDelegate <NSObject>
@optional

- (void)addAdminreNumber:(NSInteger)addNum;

@end

@interface LZFlyAdmireView : UIView
@property (nonatomic, weak) UIImageView *image;

@property (nonatomic, weak) id<PLUFlyAdmireViewDelegate> delegate;

- (void)updateAdmireCount:(NSNumber *) count;

@end
