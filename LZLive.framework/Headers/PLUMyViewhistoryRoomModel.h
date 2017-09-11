//
//  PLUMyViewhistoryRoomModel.h
//  TGA
//
//  Created by plu on 16/8/24.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PLUMyViewhistoryRoomModel : NSObject

@property (copy, nonatomic)   NSString *desc;
@property (copy, nonatomic)   NSString *domain;
@property (copy, nonatomic)   NSString *logo;
@property (copy, nonatomic)   NSString *name;
@property (copy, nonatomic)   NSString *roomId;
@property (strong, nonatomic) NSNumber *type;
@property (copy, nonatomic)   NSString *boardCast_Title;  // 标题

@end
 
