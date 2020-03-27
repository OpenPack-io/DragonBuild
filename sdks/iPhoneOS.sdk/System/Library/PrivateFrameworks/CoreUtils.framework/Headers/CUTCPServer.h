//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUBonjourAdvertiser, CUNetLinkManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTCPServer : NSObject
{
    NSMutableSet _connections;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_listenerSourceV4;
    NSObject<OS_dispatch_source> *_listenerSourceV6;
    struct LogCategory _ucat;
    unsigned int _flags;
    unsigned int _maxConnectionCount;
    int _tcpListenPort;
    int _tcpListeningPort;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    id /* CDUnknownBlockType */ _connectionAcceptHandler;
    id /* CDUnknownBlockType */ _connectionStartedHandler;
    id /* CDUnknownBlockType */ _connectionEndedHandler;
    id /* CDUnknownBlockType */ _connectionPrepareHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* CDUnknownBlockType */ _invalidationHandler;
    NSString *_label;
    CUNetLinkManager *_netLinkManager;
    CDUnion_fab80606 _interfaceAddress;
}

@property(nonatomic) int tcpListeningPort; // @synthesize tcpListeningPort=_tcpListeningPort;
@property(nonatomic) int tcpListenPort; // @synthesize tcpListenPort=_tcpListenPort;
@property(retain, nonatomic) CUNetLinkManager *netLinkManager; // @synthesize netLinkManager=_netLinkManager;
@property(nonatomic) unsigned int maxConnectionCount; // @synthesize maxConnectionCount=_maxConnectionCount;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) id /* CDUnknownBlockType */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) CDUnion_fab80606 interfaceAddress; // @synthesize interfaceAddress=_interfaceAddress;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ connectionPrepareHandler; // @synthesize connectionPrepareHandler=_connectionPrepareHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ connectionEndedHandler; // @synthesize connectionEndedHandler=_connectionEndedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ connectionStartedHandler; // @synthesize connectionStartedHandler=_connectionStartedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ connectionAcceptHandler; // @synthesize connectionAcceptHandler=_connectionAcceptHandler;
@property(retain, nonatomic) CUBonjourAdvertiser *bonjourAdvertiser; // @synthesize bonjourAdvertiser=_bonjourAdvertiser;
// - (void).cxx_destruct;
- (void)_handleConnectionInvalidated:(id)arg1 addr:(const CDUnion_fab80606 )arg2;
- (void)_handleConnectionAccept:(int)arg1;
- (void)_invalidated;
- (void)invalidate;
- (BOOL)activateDirectAndReturnError:(id )arg1;
- (void)activateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)detailedDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end

