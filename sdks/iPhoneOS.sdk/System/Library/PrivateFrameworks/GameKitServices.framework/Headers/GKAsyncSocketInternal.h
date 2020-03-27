//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameKitServices/GKAsyncSocket.h>

@class NSMutableData, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GKAsyncSocketInternal : GKAsyncSocket
{
    NSObject<OS_dispatch_source> *_receiveSource;
    NSObject<OS_dispatch_source> *_sendSource;
    BOOL _sendSourceSuspended;
    BOOL _invalidated;
    int _connectionSocket;
    NSMutableData *_dataToSend;
    id /* CDUnknownBlockType */ _receiveDataHandler;
    id /* CDUnknownBlockType */ _connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_socketName;
}

- (void)setSocketName:(id)arg1;
- (id)socketName;
- (void)setConnectedHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)connectedHandler;
- (void)setReceiveDataHandler:(id /* CDUnknownBlockType */)arg1;
- (id /* CDUnknownBlockType */)receiveDataHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (void)sendData;
- (void)receiveData;
- (void)closeConnectionNow;
- (void)sendData:(id)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)tcpConnectSockAddr:(const struct sockaddr )arg1 port:(unsigned short)arg2;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (BOOL)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(id /* CDUnknownBlockType */)arg2 sendEventHandler:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end

