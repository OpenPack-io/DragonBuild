//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODrivingWalkingInstruction : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_continueCommands;
    GEOFormattedString *_distance;
    NSMutableArray *_mergeCommands;
    NSMutableArray *_normalCommands;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_continueCommands:1;
        unsigned int read_distance:1;
        unsigned int read_mergeCommands:1;
        unsigned int read_normalCommands:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_continueCommands:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_mergeCommands:1;
        unsigned int wrote_normalCommands:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)mergeCommandType;
+ (Class)continueCommandType;
+ (Class)normalCommandType;
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
- (id)mergeCommandAtIndex:(NSUInteger)arg1;
- (NSUInteger)mergeCommandsCount;
- (void)_addNoFlagsMergeCommand:(id)arg1;
- (void)addMergeCommand:(id)arg1;
- (void)clearMergeCommands;
@property(retain, nonatomic) NSMutableArray *mergeCommands;
- (void)_readMergeCommands;
- (id)continueCommandAtIndex:(NSUInteger)arg1;
- (NSUInteger)continueCommandsCount;
- (void)_addNoFlagsContinueCommand:(id)arg1;
- (void)addContinueCommand:(id)arg1;
- (void)clearContinueCommands;
@property(retain, nonatomic) NSMutableArray *continueCommands;
- (void)_readContinueCommands;
- (id)normalCommandAtIndex:(NSUInteger)arg1;
- (NSUInteger)normalCommandsCount;
- (void)_addNoFlagsNormalCommand:(id)arg1;
- (void)addNormalCommand:(id)arg1;
- (void)clearNormalCommands;
@property(retain, nonatomic) NSMutableArray *normalCommands;
- (void)_readNormalCommands;
@property(retain, nonatomic) GEOFormattedString *distance;
@property(readonly, nonatomic) BOOL hasDistance;
- (void)_readDistance;
- (id)initWithData:(id)arg1;
- (id)init;

@end

