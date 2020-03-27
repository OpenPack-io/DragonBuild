//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol HTSHTTPServerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HTSHTTPServer : NSObject
{
    int _listenSocket4;
    NSMutableArray *_activeConnections;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_listenSource4;
    NSString *_nodename;
    NSUInteger _bytesWritten;
    double _lastReplenishTime;
    NSMutableDictionary *_authTokens;
    BOOL _digestAuthenticationEnabled;
    BOOL _pipeliningEnabled;
    unsigned short _port;
    int _cacheMaxAge;
    id <HTSHTTPServerDelegate> _delegate;
    double _latency;
    double _latencyStddev;
    double _kbps;
    double _bandwidthStddev;
    NSUInteger _totalBytesWritten;
    struct __CFHTTPMessage _currentRequest;
    NSString *_documentRoot;
}

@property(nonatomic) BOOL pipeliningEnabled; // @synthesize pipeliningEnabled=_pipeliningEnabled;
@property(nonatomic) int cacheMaxAge; // @synthesize cacheMaxAge=_cacheMaxAge;
@property(copy, nonatomic) NSString *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(nonatomic) struct __CFHTTPMessage currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) NSUInteger totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(nonatomic) double bandwidthStddev; // @synthesize bandwidthStddev=_bandwidthStddev;
@property(nonatomic) double kbps; // @synthesize kbps=_kbps;
@property(nonatomic) double latencyStddev; // @synthesize latencyStddev=_latencyStddev;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(nonatomic) BOOL digestAuthenticationEnabled; // @synthesize digestAuthenticationEnabled=_digestAuthenticationEnabled;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(nonatomic) id <HTSHTTPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)consumedBandwidth:(NSUInteger)arg1;
- (NSUInteger)availableBandwidth;
- (double)_currentLatency;
- (void)resetNetworkSetup;
- (void)_handleGeneralRequest:(id)arg1 fromConnection:(id)arg2;
- (id)_authenticationResponseForRequest:(id)arg1;
- (void)_respondWithData:(id)arg1 mimeType:(id)arg2 toRequest:(id)arg3 connection:(id)arg4;
- (void)_connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)_returnResponse:(id)arg1 toConnection:(id)arg2 closeAfterSending:(BOOL)arg3;
- (id)_restrictedFilePathForRelativePath:(id)arg1;
- (void)_connection:(id)arg1 hadError:(id)arg2;
- (void)_connectionComplete:(id)arg1;
- (id)_mimeTypeForExtension:(id)arg1;
- (BOOL)_listenOnPort:(unsigned short)arg1;
- (void)_cleanupListenSocket;
@property(nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) NSString *urlString;
- (id)init;
- (id)initWithPort:(unsigned short)arg1 documentRoot:(id)arg2;
- (void)dealloc;

@end

