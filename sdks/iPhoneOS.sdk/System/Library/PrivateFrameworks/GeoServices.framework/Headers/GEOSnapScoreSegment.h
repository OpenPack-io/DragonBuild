//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOSnapScoreSegment : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributes;
    NSMutableArray *_categoryScores;
    NSUInteger _geoId;
    GEOLatLng *_pointOnLine;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    float _overallScore;
    struct {
        unsigned int has_geoId:1;
        unsigned int has_overallScore:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributes:1;
        unsigned int read_categoryScores:1;
        unsigned int read_pointOnLine:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributes:1;
        unsigned int wrote_categoryScores:1;
        unsigned int wrote_geoId:1;
        unsigned int wrote_pointOnLine:1;
        unsigned int wrote_overallScore:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)attributeType;
+ (Class)categoryScoreType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)attributeAtIndex:(NSUInteger)arg1;
- (NSUInteger)attributesCount;
- (void)_addNoFlagsAttribute:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)clearAttributes;
@property(retain, nonatomic) NSMutableArray *attributes;
- (void)_readAttributes;
- (id)categoryScoreAtIndex:(NSUInteger)arg1;
- (NSUInteger)categoryScoresCount;
- (void)_addNoFlagsCategoryScore:(id)arg1;
- (void)addCategoryScore:(id)arg1;
- (void)clearCategoryScores;
@property(retain, nonatomic) NSMutableArray *categoryScores;
- (void)_readCategoryScores;
@property(nonatomic) BOOL hasOverallScore;
@property(nonatomic) float overallScore;
@property(retain, nonatomic) GEOLatLng *pointOnLine;
@property(readonly, nonatomic) BOOL hasPointOnLine;
- (void)_readPointOnLine;
@property(nonatomic) BOOL hasGeoId;
@property(nonatomic) NSUInteger geoId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

