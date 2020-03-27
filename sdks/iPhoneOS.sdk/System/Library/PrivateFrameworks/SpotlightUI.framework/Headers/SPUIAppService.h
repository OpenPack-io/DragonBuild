//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPXPCConnection;
@protocol OS_dispatch_queue;

@interface SPUIAppService : NSObject
{
    int _awakeNotifyToken;
    NSObject<OS_dispatch_queue> *_appServiceQueue;
    SPXPCConnection *_backgroundConnection;
    SPXPCConnection *_appConnection;
    BOOL _activated;
}

+ (void)initialize;
// - (void).cxx_destruct;
- (void)deactivate;
- (void)activate;
- (id)init;
- (void)registerAwakeNotifyToken;
- (void)_cancelAwakeNotifyToken;

@end

