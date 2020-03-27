//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying>
{
    NSString *_analyticsBaseUrl;
    NSString *_analyticsId;
    NSString *_eventQueryParameterName;
    NSMutableArray *_proxyHostNames;
    NSMutableArray *_queryParameterConfigs;
    BOOL _usesProxyProfile;
    struct {
        unsigned int usesProxyProfile:1;
    } _has;
}

+ (Class)proxyHostNamesType;
+ (Class)queryParameterConfigType;
@property(retain, nonatomic) NSMutableArray *proxyHostNames; // @synthesize proxyHostNames=_proxyHostNames;
@property(nonatomic) BOOL usesProxyProfile; // @synthesize usesProxyProfile=_usesProxyProfile;
@property(retain, nonatomic) NSMutableArray *queryParameterConfigs; // @synthesize queryParameterConfigs=_queryParameterConfigs;
@property(retain, nonatomic) NSString *eventQueryParameterName; // @synthesize eventQueryParameterName=_eventQueryParameterName;
@property(retain, nonatomic) NSString *analyticsId; // @synthesize analyticsId=_analyticsId;
@property(retain, nonatomic) NSString *analyticsBaseUrl; // @synthesize analyticsBaseUrl=_analyticsBaseUrl;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)proxyHostNamesAtIndex:(NSUInteger)arg1;
- (NSUInteger)proxyHostNamesCount;
- (void)addProxyHostNames:(id)arg1;
- (void)clearProxyHostNames;
@property(nonatomic) BOOL hasUsesProxyProfile;
- (id)queryParameterConfigAtIndex:(NSUInteger)arg1;
- (NSUInteger)queryParameterConfigsCount;
- (void)addQueryParameterConfig:(id)arg1;
- (void)clearQueryParameterConfigs;
@property(readonly, nonatomic) BOOL hasEventQueryParameterName;
@property(readonly, nonatomic) BOOL hasAnalyticsId;
@property(readonly, nonatomic) BOOL hasAnalyticsBaseUrl;

@end

