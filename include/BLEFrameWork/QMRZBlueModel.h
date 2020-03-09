//
//  BlueModel.h
//  Intelligent_Lock
//
//  Created by 窦川江 on 2018/3/1.
//  Copyright © 2018年 窦川江. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QMRZBlueModel : NSObject

@property (nonatomic, strong) NSString *LockID;
@property (nonatomic, strong) NSString *authUserID;
@property (nonatomic, strong) NSString *keyID;
@property (nonatomic, strong) NSString *UserID;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *DelUserID;
@property (nonatomic, assign) NSInteger Role;
@property (nonatomic, assign) NSInteger openCount;
@property (nonatomic, strong) NSString *endTime;
@property (nonatomic, strong) NSString *keyType;
@property (nonatomic, assign) NSInteger queryCont;//授权给房客 查询3条用
@property (nonatomic, strong) NSString *startTime;//开始时间
@property (nonatomic, strong) NSString *blueKeyID;
@property (nonatomic, assign) NSInteger PwdNo;
@property (nonatomic, strong) NSString *Pwd;
@property (nonatomic, assign) NSInteger UseCountLimit;
@property (nonatomic, strong) NSString *keysign;
@property (nonatomic, strong) NSString *lkid;
@property (nonatomic, assign) BOOL islankou;
@property (nonatomic, strong) NSString *openDoorType;
@property (nonatomic, strong) NSString *headClickType;
@property (nonatomic, assign) BOOL isaddBlack;
@property (nonatomic, assign) NSInteger AlarmFinger;
@property (nonatomic, assign) NSInteger FingerprintNo1;
@property (nonatomic, assign) NSInteger FingerprintNo2;
@property (nonatomic, assign) BOOL isMuteFlag;

@property (nonatomic, strong) NSData *authCode;
@property (nonatomic, strong) NSData *Commkey;
@property (nonatomic, strong) NSData *SignKey;

@property (nonatomic, assign) BOOL isNBset;//是否是设置NB模式
@property (nonatomic, assign) NSInteger SwitchFlag;//1：自动落锁开关，2：静音开关，3：NB实时模式开关


@end
