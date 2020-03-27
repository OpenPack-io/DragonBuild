//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/CRSAppHistoryServerToClientInterface-Protocol.h>

@class BSServiceConnection;
@protocol OS_dispatch_queue;

@interface CRSAppHistoryController : NSObject <CRSAppHistoryServerToClientInterface>
{
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
// - (void).cxx_destruct;
- (void)setSessionUIContexts:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchSessionEchoContextsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchSessionUIContextsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)fetchUIContextsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end

