//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXSubscriptionStatusProviding-Protocol.h>

@interface SXSubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding>
{
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
}

@property(readonly, nonatomic) long long channelSubscriptionStatus; // @synthesize channelSubscriptionStatus=_channelSubscriptionStatus;
@property(readonly, nonatomic) long long bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithBundleSubscriptionStatus:(long long)arg1 channelSubscriptionStatus:(long long)arg2;
- (id)init;

@end

