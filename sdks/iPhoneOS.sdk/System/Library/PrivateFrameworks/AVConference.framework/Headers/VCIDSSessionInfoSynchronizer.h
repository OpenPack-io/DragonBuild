//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, VCConnectionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCIDSSessionInfoSynchronizer : NSObject
{
    NSMutableArray *_peerSubscribedStreams;
    NSMutableDictionary *_peerPublishedStreams;
    NSMutableArray *_publishedStreams;
    NSMutableDictionary *_subscribedStreams;
    id /* CDUnknownBlockType */ _peerSubscribedStreamCallback;
    id /* CDUnknownBlockType */ _peerPublishedStreamCallback;
    id /* CDUnknownBlockType */ _errorReponseCallback;
    id _delegate;
    unsigned int _currentParticipantGenerationCounter;
    NSNumber *_primaryLinkID;
    NSNumber *_duplicationLinkID;
    VCConnectionManager *_connectionManager;
    id _reportingAgentWeak;
    BOOL _isSessionInfoErrorResponseReported;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _sessionInfoRequestBytesUsed;
    int _sessionInfoResponseBytesUsed;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ errorReponseCallback; // @synthesize errorReponseCallback=_errorReponseCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ peerPublishedStreamCallback; // @synthesize peerPublishedStreamCallback=_peerPublishedStreamCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ peerSubscribedStreamCallback; // @synthesize peerSubscribedStreamCallback=_peerSubscribedStreamCallback;
- (void)deregisterPeriodicTask;
- (void)setErrorResponseCallback:(id /* CDUnknownBlockType */)arg1;
- (id)sessionInfoSynchronizerDelegate;
@property(readonly) id reportingAgent;
- (void)setVCIDSSessionInfoPublishedStreamIDs:(id)arg1;
- (void)setVCIDSSessionInfoSubscribedStreamIDs:(id)arg1;
- (void)dealloc;
- (void)flushRealTimeReportingStats;
- (void)registerPeriodicTask;
- (void)periodicTask:(void )arg1;
- (void)optOutStreamIDsForNonPrimaryConnection:(id)arg1 sentOnConnection:(id)arg2;
- (void)optInStreamIDsForNewPrimaryConnection:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)optInStreamIDsForConnection:(id)arg1;
- (void)updateVCIDSSessionInfoResponse:(id)arg1;
- (void)checkVCIDSSessionInfoNeedUpdate:(unsigned char)arg1;
- (void)resetParticipantGenerationCounter;
@property(retain, nonatomic) NSNumber *duplicationLinkID;
@property(retain, nonatomic) NSNumber *primaryLinkID;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 reportingAgent:(id)arg3;

@end

