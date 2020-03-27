//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface DESPFLNoisable : PBCodable <NSCopying>
{
    struct {
        float list;
        NSUInteger count;
        NSUInteger size;
    } _data32s;
    struct {
        double list;
        NSUInteger count;
        NSUInteger size;
    } _datas;
    double _weight;
    unsigned int _iteration;
    NSString *_recipeId;
    NSString *_uuid;
    int _version;
    struct {
        unsigned int weight:1;
        unsigned int iteration:1;
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) unsigned int iteration; // @synthesize iteration=_iteration;
@property(retain, nonatomic) NSString *recipeId; // @synthesize recipeId=_recipeId;
@property(nonatomic) int version; // @synthesize version=_version;
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
@property(readonly, nonatomic) BOOL hasUuid;
- (void)setData32s:(float )arg1 count:(NSUInteger)arg2;
- (float)data32AtIndex:(NSUInteger)arg1;
- (void)addData32:(float)arg1;
- (void)clearData32s;
@property(readonly, nonatomic) float data32s;
@property(readonly, nonatomic) NSUInteger data32sCount;
- (void)setDatas:(double )arg1 count:(NSUInteger)arg2;
- (double)dataAtIndex:(NSUInteger)arg1;
- (void)addData:(double)arg1;
- (void)clearDatas;
@property(readonly, nonatomic) double datas;
@property(readonly, nonatomic) NSUInteger datasCount;
@property(nonatomic) BOOL hasWeight;
@property(nonatomic) BOOL hasIteration;
@property(readonly, nonatomic) BOOL hasRecipeId;
@property(nonatomic) BOOL hasVersion;
- (void)dealloc;

@end

