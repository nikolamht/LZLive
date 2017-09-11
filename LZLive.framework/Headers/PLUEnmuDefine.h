//
//  PLUEnmuDefine.h
//  TGA
//
//  Created by plu on 16/2/1.
//  Copyright © 2016年 developer. All rights reserved.
//

#ifndef PLUEnmuDefine
#define PLUEnmuDefine

typedef NS_ENUM (NSInteger, PLUDeviceType){
    PLUDeviceTypePC         = 0,
    PLUDeviceTypeIOS        = 2,
    PLUDeviceTypeAndroid    = 4,
    PLUDeviceTypeCurrent   = 6,
};

//  PLUHrefType 添加新值时 - 必须 - 在 PLUHrefTypeManager 的 currentVersionHaveHerfType 方法里同时添加
typedef NS_ENUM (NSInteger, PLUHrefType){
    PLUHrefTypeUnkown = -1,
    PLUHrefTypeGame = 0,        // 游戏列表页(游戏分类id） 此通栏跳转动作为进入对应游戏分类的列表页
    PLUHrefTypeMatch = 1,       //赛事详情
    PLUHrefTypeStream = 2,      //游戏直播
    PLUHrefTypeVideo = 3,       //游戏回放
    PLUHrefTypeWeb = 4,         //web页面
    PLUHrefTypeHandGame = 5,    //手游
    PLUHrefTypeEntireLive = 6,      //随拍房间
    PLUHrefTypeTagStreamList = 7,   //"房间分类标签"的列表页数据 // 根据标签 (不是gameID)跳到直播里表页
    PLUHrefTypeEntireReplay = 8,    //随拍回放
    PLUHrefTypeEntireList = 10,     //随拍列表
    PLUHrefTypeAppStore = 11,
    PLUHrefTypeWebAD = 12,          //广告 h5页面
    PLUHrefTypeU9Game = 16,
    PLUHrefTypeAllMatch = 20,       //全部赛事
    
    PLUHrefTypeOlyeShowNoJump = 66, //只展示不跳转
    PLUHrefTypeH5Recharge = 67,     //H5跳充值
    PLUHrefTypeEntireHost = 9999  // 本地自定义 区分主播端和观看端
};
//  PLUHrefType 添加新值时 - 必须 - 在 PLUHrefTypeManager 的 currentVersionHaveHerfType 方法里同时添加
typedef enum : NSUInteger {
    //来源
    PLUChatTypeStream,
    PLUChatTypeEntireLive,
    PLUChatTypeSport,
    //类型
    PLUChatTypeHeadLine,
    PLUChatTypeVipJoin
} PLUChatType;

typedef NS_ENUM (NSInteger, PLULiveSourceType){
    PLULiveSourceTypeHDBroadcast    = 1, // 高清直播工具App
    PLULiveSourceTypeSnapshotApp    = 2, // 龙珠直播App随拍模块
    PLULiveSourceTypeOBS            = 4, // OBS推随拍
    PLULiveSourceTypePLUApp         = 8  // PLU桌面客户端PLUApp
};


typedef NS_ENUM(NSUInteger, PageType) {
    ePageHome,
    ePageEntertainment,
};

typedef NS_ENUM(NSInteger, PLUAdEventType) {
    ePLUAdClickDowload = 0, // 点击同时下载
    ePLUAdClick = 1, // 点击
    ePLUAdDowload = 2, // 下载
};

//礼物类型
typedef enum{
    kGiftTypeNormal = 1,
    kGiftTypeSerial,            //连击道具
    kGiftTypeSpecialChat,       //付费弹幕
    kGiftTypeLwfGift,           //
    kGiftTypeCryout,            //一战成名 呐喊道具
    kGiftTypeRedEnvelope    //红包道具
}giftType;



typedef enum {

    kRoomClose,                 //关闭房间
    kRoomUnknow,                //房间信息未知
    kRoomLive,                  //正常观看直播
    kRoomWaite,                 //主播不在直播,用户在房间等待

}roomStatus;

typedef NS_ENUM(NSInteger, PLUNetworkStatus) {
    PLUNetworkStatusUnknown           = -1,
    PLUNetworkStatusNotReachable      = 0,
    PLUNetworkStatusReachableViaWWAN  = 1,
    PLUNetworkStatusReachableViaWiFi  = 2,
};



typedef NS_ENUM(NSUInteger, PLUPersonalHomePageMoreButtonGoalType) {
    PLUPersonalHomePageMoreButtonTypeUnknow,
    PLUPersonalHomePageMoreButtonTypeDefault,
    PLUPersonalHomePageMoreButtonTypeValueSuipai,
    PLUPersonalHomePageMoreButtonTypeTemplate1,
};


typedef NS_ENUM (NSUInteger, RequestGiftsStatus){
    kRequestGiftsFailure,
    kRequestGiftsSuccess,
    kRequestGiftsLoading,
};

typedef enum : NSUInteger {
    kHot,
    kNewest,
    kViews
} PLUSPLiveType;

typedef enum : NSUInteger {
    kDaily = 4,
    kWeakly = 1
} PLUDateType;

typedef enum : NSUInteger {
    kChartsTypeTotal,           //人气总榜
    kChartsTypeCollege,         //校园榜
    kChartsTypeCollegeDetail,   //校园主播榜
    kChartsTypeShare,           //分享榜
    kChartsTotalContribution,    //贡献总榜
    kChartsUserContribution,     //粉丝榜
    kChartsRoomWeek,     //房间周星榜
} ChartsType;


typedef void(^Completed)(BOOL success, id result);

typedef void(^CompletedHandle)();

typedef enum : NSUInteger {
    PLUSchoolName = 0,//校园列表
    PLUCityName,//城市列表
} TableViewType ;

typedef enum : NSUInteger {
    kRankView,       // 主播榜单头部
    kStarsView       // 星秀榜单头部
} RankHeaerViewType;

typedef enum : NSUInteger {
    kPushSubscriber = 0,     // 关注房间
    kPushUnsubscriber,       // 取消关注
    kPushLogin,              // 登录
    kPushLogout,             // 退出
    kPushEnableall,          // 开启推送
    kPushDisableall,         // 关闭推送
    kPushSetignore,          // 屏蔽主播
    kPushUnsetignore         // 取消屏蔽主播
} PushEvent;

typedef enum : NSUInteger {
    TapRefreshViewStateLoading = 0,
    TapRefreshViewStateNoData,
    TapRefreshViewStateSuccess,
    TapRefreshViewStateFailure
} TapRefreshViewState;

/**
 首页Type分类
 */
typedef NS_ENUM(NSUInteger, PLUHomeViewType) {
    PLUHomeEntertainment = 0,   // 娱乐模块
    PLUHomeMobilegames          // 手游模块
};

/**
 请求HUD状态
 */
typedef enum : NSUInteger {
    HUDStateLoading = 0,
    HUDStateEnd,
} RequestHUDState;

/**
 开播提醒
 */
typedef enum : NSUInteger {
    BeginRemindStateSuccess = 0,          // 关注数据
    BeginRemindStateEnableallSuccess,     // 总打开
    BeginRemindStateDisableallSuccess,    // 总关闭
    BeginRemindStateSetignoreSuccess,     // 屏蔽主播
    BeginRemindStateUnsetignoreSuccess,   // 取消屏蔽主播
} BeginRemindState;

/**
  贡献榜cell样式
  */

typedef enum : NSUInteger {
    PLUSPRankListType,
    PLUDefaultRankListType,
    PLUGameRankListType,
    PLUSprotsGrooupType,                //阵营榜
    PLUSprotsWeekype,                   //周榜
    PLUSportsFullScreenGrooupType,      //体育全屏阵营榜
    PLUSportsFullScreenWeekType,        //体育全屏周榜
} PLURankingListCellType;

typedef enum : NSInteger {
    kMsgTypeUnknow = -1,
    kMsgTypeGift = 1,
    kMsgTypeUserGift,//相互送礼
    kMsgTypeChat,
    kMsgTypeJoinRoom,
    kMsgTypeLeaveRoom,
    kMsgTypeBeSubScribed,
    kMsgTypeLiveEnd,
    kMsgTypeLiveStart,
    kMsgTypeRoomClose,
    kMsgTypeKickOut,//被踢出房间
    kMsgTypeHeadLine,
    kMsgTypeRollweekstar,
    kMsgTypeRollingUserGift,
    kMsgTypeWeekstar,
    kMsgTypeRolling,
    kMsgTypeVipJoin,
    kMsgTypeVipEmoji,
    kMsgTypeRedEnvelope,
    kMsgTypeDrawRedEnvelope,
    kMsgTypeGuardJoin,
    kMsgTypeChangeSportsPK,
    kMsgTypeChangeFeeswitch,
    kMsgTypeChangeSportv2feeswitch,
    kMsgTypeChangeScore,
    kMsgTypeMHAlmost,
    kMsgTypeMHAchieved,
    kMsgTypeMHStep,
    kMsgTypeMHOpenbox,
    kMsgTypeRoomChangeStream,
    kMsgTypeSportLottery,
    kMsgTypeReplayforbidden,
    
    //本地类型
    kMsgTypeSubScribe,
    kMsgTypeSystem,
    kMsgTypeBenChangBangFirst,
    kMsgTypeOpenedGuard
} MsgType;

typedef enum : NSUInteger {
    kMsgSourceTypeWebSocket = 1,
    kMsgSourceTypeMB,
    kMsgSourceTypeLocal,
    kMsgSourceTypeBroadCast,
    kMsgSourceTypeSpecialBroadCast

} MsgSourceType;

typedef enum : NSUInteger {
    kPLUUserTypeNormal = 0,
    kPLUUserTypeSpecial = 1 << 0,
    kPLUUserTypeHost = 1 << 1,
    kPLUUserTypeRoomManager = 1 << 2,
    kPLUUserTypeSuperManager = 1 << 3,
    kPLUUserTypeMedal = 1 << 4,
    kPLUUserTypeSelf = 1 << 5,
    kPLUUserTypeVip = 1 << 6,
    kPLUUserTypeVip2 = 1 << 7,
    kPLUUserTypeSliverGuard = 1 << 8,
    kPLUUserTypeSliverGuardYear = 1 << 9,
    kPLUUserTypeGoldGuard = 1 << 10,
    kPLUUserTypeGoldGuardYear = 1 << 11,
    KPLUUserTypeForeFront = 1 << 12,
    kPLUUserTypeWeekBangFirst = 1 << 13,       //七日榜第一名
    kPLUUserTypeStealthy = 1 << 14,
} PLUUserType;

typedef enum : NSUInteger {
    PLUVerifyCodeTypeVoice,
    PLUVerifyCodeTypeRegister,
    PLUVerifyCodeTypeForget
} PLUVerifyCodeType;




/**
 聊天室底部样式 体育 , 普通游戏直播

 - SportType: 体育
 - GameType:  游戏直播
 */
typedef NS_ENUM(NSUInteger, StreamDetailBottomViewType) {
    SportType = 0,
    GameType,
};

// 上传封面
typedef enum : NSUInteger {
    CoverViewStateNormal,
    CoverViewStateUploadLocked,
    CoverViewStateUpload
} CoverViewState;

typedef NS_ENUM(NSInteger, PhotoType){
    PhotoTypePC,
    PhotoTypePhone
};

// socket 连接状态
typedef enum : NSUInteger {
    SocketStateNotConnected = 1,  // 未连接
    SocketStateAlreadyConnected,  // 已连接
    SocketStateInConnection,      // 连接中
    SocketStateError              // 出错
} SocketState;

// socket 错误原因
typedef enum : NSUInteger {
    SocketErrorProtoId = 1,       // ProtoId 不是 私信1025、心跳返回包2049
    SocketErrorMaxFrameSize,      // 超过二级包最大字节数
    SocketErrorServerFail         // 服务器断开连接
} SocketErrorState;

typedef enum : NSUInteger {
    IMMsgStateSuccess,
    IMMsgStateLoading,
    IMMsgStateFailure
} IMMsgState;

typedef enum : NSUInteger {
    IMMsgTypeUnknow,
    IMMsgTypeText
} IMMsgType;

typedef enum : NSUInteger {
    IMCellTypeCurrent,           // 对方
    IMMsgTypeMine                // 自己
} IMCellType;

typedef NS_ENUM(NSUInteger, PLUPersonalCenterClickType) {
    CilckFansCountBtnType,
    CilckFollowCountBtnType,
    CilckCheckinBtnType,
    ClickLivingBarType,
    ClickFollowBtnType,
    ClickChatBtnType,
};

typedef NS_ENUM (NSInteger, PLUGiftListStyle){
    PLUSuiPaiGiftListStyle = 0,
    PLUGameGiftListStyle = 1,
};

typedef NS_ENUM(NSInteger, PLUUserVerifyInfoStatus){
    PLUUserNotLogined             = -1,   ///< 用户未登录
    PLUUserNotBindTheMobile       = -2,   ///< 用户未绑定手机
    PLUUserHasBeenGloableGagged   = -12,  ///< 用户已被全平台禁言
    PLUUserHasBeenBanned          = -20,  ///< 用户房间已被封停
    PLUNoVerifyAuthAndNoOrderCode = 9001, ///< 用户未审核，并且用户之前没有获取审核流水单号
    PLUNoVerifyAuthButHasOderCode = 9002, ///< 用户未审核，但是用户之前已获取审核流水单号
    PLUVerifingAuth               = 9003, ///< 用户审核中
    PLUVerifySuccessed            = 9004, ///< 用户审核成功
    PLUVerifyReject               = 9005  ///< 用户审核失败(被拒绝)
};

#endif
