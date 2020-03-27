//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying>
{
    double _date;
    long long _index;
    NRPBDeviceCollectionDiff *_diff;
    struct {
        unsigned int date:1;
        unsigned int index:1;
    } _has;
}

@property(retain, nonatomic) NRPBDeviceCollectionDiff *diff; // @synthesize diff=_diff;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long index; // @synthesize index=_index;
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
@property(readonly, nonatomic) BOOL hasDiff;
@property(nonatomic) BOOL hasDate;
@property(nonatomic) BOOL hasIndex;

@end

