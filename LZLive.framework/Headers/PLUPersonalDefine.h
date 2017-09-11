//
//  PLUPersonalDefine.h
//  longzhu
//
//  Created by mafengxin on 2017/3/8.
//  Copyright © 2017年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^UserOperationResult)(BOOL success, NSString *tips);

typedef enum : NSInteger {
    PLUUserInfoTypeNotSet = 0,
    PLUUserInfoTypeSubscripted = 1 << 0,
    PLUUserInfoTypeBalance = 1 << 1,
    PLUUserInfoTypeDomain = 1 << 2,
    PLUUserInfoTypeGrade = 1 << 3,
    PLUUserInfoTypeSubscripCount = 1 << 4,
    PLUUserInfoTypeLiveRoomCount = 1 << 5,
    PLUUserInfoTypeIsValid = 1 << 6,
    PLUUserInfoTypeBean = 1 << 7,
    PLUUserInfoTypeBindingPhone = 1 << 8,
    PLUUserInfoTypeIsPhoneAccount = 1 << 9,
    PLUUserInfoTypeRoomGrade = 1 << 10,
    PLUUserInfoTypeXCoin = 1 << 11,
    PLUUserInfoTypeCertification = 1 << 12,
    PLUUserInfoTypeVipInfo = 1 << 13,
    PLUUserInfoTypeIsTXpcmgr = 1 << 14
} PLUUserInfoType;


FOUNDATION_EXTERN NSString * const PLUUserWillLogoutNotification;
FOUNDATION_EXTERN NSString * const PLUUserDidLogoutNotification;
FOUNDATION_EXTERN NSString * const PLUUserLogoutNotificationKey;

FOUNDATION_EXTERN NSString * const PLUUserDidLoginNotification;

FOUNDATION_EXTERN NSString * const PLUUserLoginFailureNotification;
FOUNDATION_EXTERN NSString * const PLUUserLoginFailureTipsNotificationKey;
FOUNDATION_EXTERN NSString * const PLUUserLoginFailureTypeNotificationKey;

FOUNDATION_EXTERN NSString * const PLUUserInfoUpdateNotification;
FOUNDATION_EXTERN NSString * const PLUUserInfoNotificationKey;
FOUNDATION_EXTERN NSString * const PLUUserInfoUpdateTypeKey;
