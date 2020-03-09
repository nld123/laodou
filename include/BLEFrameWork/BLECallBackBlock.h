//
//  BLECallBackBlock.h
//  BLEFrameWork
//
//  Created by 窦川江 on 2018/8/29.
//  Copyright © 2018年 窦川江. All rights reserved.
//

#ifndef BLECallBackBlock_h
#define BLECallBackBlock_h

typedef void(^BLEStatusBlock)(NSInteger status);
typedef void(^RequestBlock)(NSInteger status);
typedef void(^KeyListBlock)(NSInteger status, NSMutableArray *keyList);

#endif /* BLECallBackBlock_h */
