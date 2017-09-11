//
//  LZUserFollowInfoView.h
//  Pods
//
//  Created by songnaiyin on 2017/5/9.
//
//

#import <UIKit/UIKit.h>

@protocol LZUserFollowInfoViewDelegate;

@interface LZUserFollowInfoView : UIView

@property (nonatomic, weak) id<LZUserFollowInfoViewDelegate> delegate;

@property (nonatomic, assign, readonly) BOOL isFollow;

- (void)updateHeaderImg:(NSString *)url;

- (void)updateFollowCount:(NSInteger)count;

- (void)updateFollowStatus:(BOOL)isFollow;

@end


@protocol LZUserFollowInfoViewDelegate <NSObject>
@optional
- (void)userFollowInfoViewFollowBtnClick:(LZUserFollowInfoView *)view;

@end
