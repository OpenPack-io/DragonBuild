//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface AWDCallHistoryErrorReport : PBCodable <NSCopying>
{
    NSUInteger _timestamp;
    unsigned int _domain;
    unsigned int _error;
    CDStruct_6e486683 _has;
}

@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
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
@property(nonatomic) BOOL hasError;
@property(nonatomic) BOOL hasDomain;
@property(nonatomic) BOOL hasTimestamp;

@end

