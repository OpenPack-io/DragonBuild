//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class CKDPRecord;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveResponse : PBCodable <NSCopying>
{
    CKDPRecord *_record;
    BOOL _clientVersionETagMatch;
    struct {
        unsigned int clientVersionETagMatch:1;
    } _has;
}

@property(nonatomic) BOOL clientVersionETagMatch; // @synthesize clientVersionETagMatch=_clientVersionETagMatch;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
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
@property(nonatomic) BOOL hasClientVersionETagMatch;
@property(readonly, nonatomic) BOOL hasRecord;

@end

