//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFNetAddress;

@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject
{
    HMFNetAddress *_addressStart;
    HMFNetAddress *_addressEnd;
}

@property(readonly, nonatomic) HMFNetAddress *addressEnd; // @synthesize addressEnd=_addressEnd;
@property(readonly, nonatomic) HMFNetAddress *addressStart; // @synthesize addressStart=_addressStart;
// - (void).cxx_destruct;
- (NSDictionary )prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAddressStart:(id)arg1 addressEnd:(id)arg2;

@end

