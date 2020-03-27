//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_PARSearchResponse_QueryFeatures-Protocol.h>

@class NSData, NSString, _PARQueryFeatures_Stats;

__attribute__((visibility("hidden")))
@interface _PARSearchResponse_QueryFeatures : PBCodable <_PARSearchResponse_QueryFeatures, NSSecureCoding>
{
    BOOL _topDown;
    NSString *_prefix;
    NSString *_query;
    _PARQueryFeatures_Stats *_stats;
}

@property(nonatomic) BOOL topDown; // @synthesize topDown=_topDown;
@property(retain, nonatomic) _PARQueryFeatures_Stats *stats; // @synthesize stats=_stats;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

