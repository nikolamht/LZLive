//
//  LZDefine.h
//  LZDeposit
//
//  Created by ziya on 2017/5/4.
//  Copyright © 2017年 longzhu. All rights reserved.
//

#ifndef LZDefine_h
#define LZDefine_h

typedef enum : NSUInteger {
    PLULoginTypePhone,
    PLULoginTypeQQ,
    PLULoginTypeWeChat,
    PLULoginTypeWeiBo,
    PLULoginTypeUnknow
} PLULoginType;

typedef enum : NSUInteger {
    PLULogoutTypeByUser,
    PLULogoutTypeDuplite = 1,
    PLULogoutTypeByServer,
    PLULogoutTypeUserInvalid
} PLULogoutType;

//typedef NS_ENUM(NSUInteger, PLUStreamRoomType) {
//    PLUStreamRoomTypeNormal = 0,
//    PLUStreamRoomTypeEntertainSport,
//    PLUStreamRoomTypeSportProfessionalSport,
//    PLUStreamRoomTypePKSport,
//    PLUStreamRoomTypeVideo
//};


#define BalanceToCoins(balance) ((NSInteger)round(balance * 100))

#define RETRY_RECEIPTDATAS_KEY  @"com.longzhu.tga.receiptdatas"

#define SCREEN_WIDTH                    [[UIScreen mainScreen] bounds].size.width

#define SCREEN_HEIGHT                   [[UIScreen mainScreen] bounds].size.height

#define SCREEN_WIDTH_SMALL              MIN(SCREEN_WIDTH, SCREEN_HEIGHT)

#define SCREEN_WIDTH_LARGE              MAX(SCREEN_WIDTH, SCREEN_HEIGHT)

#define selectWeekStart @"selectWeekStart"
#endif /* LZDefine_h */
