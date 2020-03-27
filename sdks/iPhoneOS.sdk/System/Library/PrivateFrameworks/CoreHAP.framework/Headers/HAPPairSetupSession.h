//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSData, NSMutableData, NSObject, NSString;
@protocol HAPPairSetupSessionDelegate, OS_dispatch_queue;

@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate>
{
    id <HAPPairSetupSessionDelegate> _delegate;
    long long _role;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSUInteger _state;
    struct PairingSessionPrivate _pairingSession;
    HMFTimer *_backoffTimer;
    NSUInteger _pairSetupType;
    NSData *_sessionReadKey;
    NSData *_sessionWriteKey;
    NSMutableData *_sessionReadNonce;
    NSMutableData *_sessionWriteNonce;
    NSData *_certificate;
}

+ (BOOL)isValidSetupCode:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(retain, nonatomic) NSMutableData *sessionWriteNonce; // @synthesize sessionWriteNonce=_sessionWriteNonce;
@property(retain, nonatomic) NSMutableData *sessionReadNonce; // @synthesize sessionReadNonce=_sessionReadNonce;
@property(retain, nonatomic) NSData *sessionWriteKey; // @synthesize sessionWriteKey=_sessionWriteKey;
@property(retain, nonatomic) NSData *sessionReadKey; // @synthesize sessionReadKey=_sessionReadKey;
@property(nonatomic) NSUInteger pairSetupType; // @synthesize pairSetupType=_pairSetupType;
@property(retain, nonatomic) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(readonly, nonatomic) struct PairingSessionPrivate pairingSession; // @synthesize pairingSession=_pairingSession;
@property(nonatomic) NSUInteger state; // @synthesize state=_state;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(readonly) __weak id <HAPPairSetupSessionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id )arg3;
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id )arg3;
- (BOOL)isSecureSession;
- (id)getCertificate;
- (void)generateSessionKeys;
- (void)_stopWithError:(id)arg1;
- (void)stopWithError:(id)arg1;
- (void)stop;
- (void)start;
- (BOOL)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id )arg2;
- (void)_handleBackoffExpiration;
- (void)handleBackoffRequestWithTimeout:(double)arg1;
- (void)handleInvalidSetupCode;
- (void)_processSetupCode:(id)arg1 error:(id)arg2;
- (void)handleSetupCodeRequest;
- (void)_handlePairSetupExchangeComplete;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)_initiateClientPairSetupExchange;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int )arg1;
- (BOOL)_initializeSession;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithRole:(long long)arg1 pairSetupType:(NSUInteger)arg2 delegate:(id)arg3;
- (id)init;

@end

