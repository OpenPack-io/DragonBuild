//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSBagConsumer_Project-Protocol.h>
#import <AppleMediaServices/AMSMediaTokenServiceProtocol-Protocol.h>

@class ACAccount, AMSMediaToken, AMSMediaTokenServiceStore, AMSMediaTokenServiceThrottler, AMSProcessInfo, AMSURLSession, NSString;
@protocol AMSBagProtocol, OS_dispatch_queue;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSMediaTokenServiceProtocol>
{
    BOOL _enabled;
    BOOL _URLKnownToBeTrusted;
    AMSURLSession *_session;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSString *_clientIdentifier;
    AMSProcessInfo *_clientInfo;
    NSString *_clientVersion;
    AMSMediaTokenServiceThrottler *_throttler;
    NSObject<OS_dispatch_queue> *_tokenFetchQueue;
    AMSMediaTokenServiceStore *_tokenStore;
    double _refreshPercentage;
    double _refreshTime;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@property(nonatomic) BOOL URLKnownToBeTrusted; // @synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted;
@property(nonatomic) double refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) double refreshPercentage; // @synthesize refreshPercentage=_refreshPercentage;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) AMSMediaTokenServiceStore *tokenStore; // @synthesize tokenStore=_tokenStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue; // @synthesize tokenFetchQueue=_tokenFetchQueue;
@property(readonly, nonatomic) AMSMediaTokenServiceThrottler *throttler; // @synthesize throttler=_throttler;
@property(readonly, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;
- (id)_tokenRequestWithError:(id )arg1;
- (BOOL)_shouldReturnMediaToken:(id)arg1;
- (BOOL)_shouldRefreshMediaToken:(id)arg1;
- (void)_refreshMediaTokenIfNeeded:(id)arg1;
- (id)_fetchToken;
- (id)_fetchBagProperties;
- (void)invalidateMediaToken;
- (id)fetchMediaToken;
@property(nonatomic) __weak AMSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *keychainAccessGroup;
@property(retain, nonatomic) AMSMediaToken *cachedMediaToken;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1 bag:(id)arg2;

@end

