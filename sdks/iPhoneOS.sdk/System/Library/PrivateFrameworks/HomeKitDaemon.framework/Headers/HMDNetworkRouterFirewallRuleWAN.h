//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRule.h>

@class HMDNetworkRouterFirewallRuleWANSubject, NSArray;

@interface HMDNetworkRouterFirewallRuleWAN : HMDNetworkRouterFirewallRule
{
    unsigned char _transportProtocol;
    unsigned short _portStart;
    unsigned short _portEnd;
    NSUInteger _purpose;
    HMDNetworkRouterFirewallRuleWANSubject *_subject;
    NSArray *_icmpTypes;
}

+ (id)createWithJSONDictionary:(NSDictionary )arg1 error:(id )arg2;
+ (BOOL)__decodePorts:(NSDictionary )arg1 portStart:(unsigned short )arg2 portEnd:(unsigned short )arg3;
+ (BOOL)__decodeSubject:(NSDictionary )arg1 subject:(id )arg2;
+ (BOOL)__decodeAddressRange:(id)arg1 endValue:(id)arg2 subject:(id )arg3;
+ (id)__nonWildcardAddressFrom:(id)arg1 key:(id)arg2;
+ (BOOL)__decodeAddresses:(id)arg1 subject:(id )arg2;
+ (BOOL)__decodeAddress:(id)arg1 subject:(id )arg2;
+ (BOOL)__decodeHostnames:(id)arg1 subject:(id )arg2;
+ (BOOL)__decodeType:(NSDictionary )arg1 transportProtocol:(unsigned char )arg2 error:(id )arg3;
+ (BOOL)__decodeFlags:(NSDictionary )arg1 critical:(BOOL )arg2;
+ (BOOL)__decodePurpose:(NSDictionary )arg1 purpose:(NSUInteger )arg2;
+ (id)ipAddressAny;
+ (id)ipAddressAnyIPv6;
+ (id)ipAddressAnyIPv4;
@property(readonly, nonatomic) NSArray *icmpTypes; // @synthesize icmpTypes=_icmpTypes;
@property(readonly, nonatomic) unsigned short portEnd; // @synthesize portEnd=_portEnd;
@property(readonly, nonatomic) unsigned short portStart; // @synthesize portStart=_portStart;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWANSubject *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) unsigned char transportProtocol; // @synthesize transportProtocol=_transportProtocol;
@property(readonly, nonatomic) NSUInteger purpose; // @synthesize purpose=_purpose;
// - (void).cxx_destruct;
- (NSDictionary )prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(NSDictionary )arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(NSUInteger)arg4 transportProtocol:(unsigned char)arg5 subject:(id)arg6 portStart:(unsigned short)arg7 portEnd:(unsigned short)arg8 icmpTypes:(id)arg9;

@end

