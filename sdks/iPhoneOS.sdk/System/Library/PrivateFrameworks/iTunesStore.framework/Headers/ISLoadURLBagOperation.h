//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStore/ISStoreURLOperationDelegate-Protocol.h>

@class ISURLBag, NSNumber, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation <ISStoreURLOperationDelegate>
{
    SSURLBagContext *_context;
    ISURLBag *_outputBag;
    NSNumber *_accountDSID;
}

+ (id)_networkSynchronyQueue;
+ (id)_networkCounters;
+ (id)_executedNetworkRequests;
+ (void)_addStoreFrontHeaderSuffix:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)arg1;
+ (id)storeFrontHeaderSuffix;
+ (void)incrementNetworkCounterForBagContext:(id)arg1;
+ (void)decrementNetworkCounterForBagContext:(id)arg1;
@property(retain, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly) SSURLBagContext *context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (BOOL)_setURLBagWithDictionary:(id)arg1 response:(id)arg2 error:(id )arg3;
- (void)_setOutputURLBag:(id)arg1;
- (void)_sendPingsForURLBag:(id)arg1;
- (void)_postBagDidLoadNotificationWithURLBag:(id)arg1;
- (void)_analyzeBagForActiveSystemApps:(id)arg1;
- (void)_addHeadersToRequestProperties:(id)arg1;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (BOOL)operation:(id)arg1 shouldSetStoreFrontID:(id)arg2;
- (id)uniqueKey;
- (void)run;
@property(readonly) ISURLBag *URLBag;
- (id)initWithBagContext:(id)arg1;
- (id)init;

@end

