//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPhoto : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_photoInfos;
    NSString *_uid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _photoType;
    struct {
        unsigned int has_photoType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_photoInfos:1;
        unsigned int read_uid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_photoInfos:1;
        unsigned int wrote_uid:1;
        unsigned int wrote_photoType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)photoInfoType;
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
@property(retain, nonatomic) NSString *uid;
@property(readonly, nonatomic) BOOL hasUid;
- (void)_readUid;
- (id)photoInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)photoInfosCount;
- (void)_addNoFlagsPhotoInfo:(id)arg1;
- (void)addPhotoInfo:(id)arg1;
- (void)clearPhotoInfos;
@property(retain, nonatomic) NSMutableArray *photoInfos;
- (void)_readPhotoInfos;
- (int)StringAsPhotoType:(id)arg1;
- (id)photoTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPhotoType;
@property(nonatomic) int photoType;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithPlaceDataPhoto:(id)arg1;

@end

