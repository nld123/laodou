//
//  BLEFrameWork.h
//  BLEFrameWork
//
//  Created by 窦川江 on 2018/8/27.
//  Copyright © 2018年 窦川江. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QMRZBlueModel.h"
#import "BLECallBackBlock.h"

typedef enum : NSUInteger {
    RequestSuccess = 0,
    RequestFail,
} RequestStatus;


@interface BLEFrameWork : NSObject

+ (BLEFrameWork *)sharedBLEFrameWork;

//搜索
- (void)scanBlue:(NSString *)lockid;


//短信登录
- (void)loginWithCode:(NSString *)phone code:(NSString *)code callbackRequest:(KeyListBlock)keyListBlock;

/**
 登录

 @param username 用户名
 @param password 密码
 @param keyListBlock 接口结果
 */
- (void)userLogin:(NSString *)username password:(NSString *)password callbackRequest:(KeyListBlock)keyListBlock;

/**
 请求短信验证码接口

 @param mobilenumber 用户手机号
 @param requestBlock 接口结果
 */
- (void)requestSmsCode:(NSString *)mobilenumber callbackRequest:(RequestBlock)requestBlock;

/**
 同步钥匙数据

 @param username 用户名
 @param smscode 短信验证码
 @param keyListBlock 接口结果
 */
- (void)downloadKeyData:(NSString *)username smscode:(NSString *)smscode callbackRequest:(KeyListBlock)keyListBlock;

/**
 获取钥匙列表

 @param username 用户名
 @param requestBlock 接口结果
 */
- (void)getKeyList:(NSString *)username callbackRequest:(RequestBlock)requestBlock;

/**
 发放临时钥匙

 @param lockid 锁ID
 @param useraccount 临时用户账号
 @param stime 临时钥匙生效时间
 @param etime 临时钥匙过期时间
 @param requestBlock 接口结果
 */
- (void)grantTempKey:(NSString *)lockid useraccount:(NSString *)useraccount stime:(NSString *)stime etime:(NSString *)etime callbackRequest:(RequestBlock)requestBlock;

/**
 开门指令

 @param blueModel 插入实体
 @param statusBlock 接口结果
 */
- (void)openDoor:(QMRZBlueModel *)blueModel callbackStatus:(BLEStatusBlock)statusBlock;


//断开蓝牙
- (void)disconnectBluetooth;


@end
