//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

__attribute__((visibility("hidden")))
@interface BCSVisibility : PBCodable <NSCopying>
{
    double _ratio;
    NSString *_country;
    NSString *_language;
    struct {
        unsigned int ratio:1;
    } _has;
}

@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasRatio;
@property(readonly, nonatomic) BOOL hasCountry;
@property(readonly, nonatomic) BOOL hasLanguage;

@end

