//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDActivityAWDActivitySharingSnapshotEvent : PBCodable <NSCopying>
{
    long long _count;
    NSUInteger _timestamp;
    int _kind;
    BOOL _success;
    struct {
        unsigned int count:1;
        unsigned int timestamp:1;
        unsigned int kind:1;
        unsigned int success:1;
    } _has;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsKind:(id)arg1;
- (id)kindAsString:(int)arg1;
@property(nonatomic) BOOL hasKind;
@property(nonatomic) int kind; // @synthesize kind=_kind;
@property(nonatomic) BOOL hasCount;
@property(nonatomic) BOOL hasSuccess;
@property(nonatomic) BOOL hasTimestamp;

@end

