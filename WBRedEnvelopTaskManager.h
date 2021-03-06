//
//  WBRedEnvelopTaskManager.h
//  WeChatRedEnvelop
//
//  Created by wordbeyondyoung on 17/2/22.
//  Copyright © 2017年 swiftyper. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WBReceiveRedEnvelopOperation;
@interface WBRedEnvelopTaskManager : NSObject

+ (instancetype)sharedManager;

- (void)addTask:(WBReceiveRedEnvelopOperation *)task;

@end
