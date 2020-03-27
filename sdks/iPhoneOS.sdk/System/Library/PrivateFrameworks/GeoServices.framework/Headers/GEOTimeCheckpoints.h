//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _distToNextCheckpoints;
    CDStruct_9f2792e4 _timeToNextCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_distToNextCheckpoints:1;
        unsigned int read_timeToNextCheckpoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_distToNextCheckpoints:1;
        unsigned int wrote_timeToNextCheckpoints:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (void)setTimeToNextCheckpoints:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)timeToNextCheckpointAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsTimeToNextCheckpoint:(unsigned int)arg1;
- (void)addTimeToNextCheckpoint:(unsigned int)arg1;
- (void)clearTimeToNextCheckpoints;
@property(readonly, nonatomic) unsigned int timeToNextCheckpoints;
@property(readonly, nonatomic) NSUInteger timeToNextCheckpointsCount;
- (void)_readTimeToNextCheckpoints;
- (void)setDistToNextCheckpoints:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)distToNextCheckpointAtIndex:(NSUInteger)arg1;
- (void)_addNoFlagsDistToNextCheckpoint:(unsigned int)arg1;
- (void)addDistToNextCheckpoint:(unsigned int)arg1;
- (void)clearDistToNextCheckpoints;
@property(readonly, nonatomic) unsigned int distToNextCheckpoints;
@property(readonly, nonatomic) NSUInteger distToNextCheckpointsCount;
- (void)_readDistToNextCheckpoints;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

