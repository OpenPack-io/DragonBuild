//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOPDTransportHint, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDTransportHint *_searchTransportHint;
    int _searchLocationParametersType;
    struct {
        unsigned int has_searchLocationParametersType:1;
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
@property(retain, nonatomic) GEOPDTransportHint *searchTransportHint;
@property(readonly, nonatomic) BOOL hasSearchTransportHint;
- (int)StringAsSearchLocationParametersType:(id)arg1;
- (id)searchLocationParametersTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchLocationParametersType;
@property(nonatomic) int searchLocationParametersType;

@end

