//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitNamedItem-Protocol.h>

@class GEOLatLng, GEOStyleAttributes, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    NSUInteger _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    NSString *_timezone;
    NSMutableArray *_zoomNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _hallIndex;
    unsigned int _stopIndex;
    struct {
        unsigned int has_muid:1;
        unsigned int has_hallIndex:1;
        unsigned int has_stopIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_latLng:1;
        unsigned int read_nameDisplayString:1;
        unsigned int read_styleAttributes:1;
        unsigned int read_timezone:1;
        unsigned int read_zoomNames:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_nameDisplayString:1;
        unsigned int wrote_styleAttributes:1;
        unsigned int wrote_timezone:1;
        unsigned int wrote_zoomNames:1;
        unsigned int wrote_hallIndex:1;
        unsigned int wrote_stopIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)zoomNameType;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *nameDisplayString;
@property(readonly, nonatomic) BOOL hasNameDisplayString;
- (void)_readNameDisplayString;
- (id)zoomNameAtIndex:(NSUInteger)arg1;
- (NSUInteger)zoomNamesCount;
- (void)_addNoFlagsZoomName:(id)arg1;
- (void)addZoomName:(id)arg1;
- (void)clearZoomNames;
@property(retain, nonatomic) NSMutableArray *zoomNames;
- (void)_readZoomNames;
@property(nonatomic) BOOL hasHallIndex;
@property(nonatomic) unsigned int hallIndex;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
- (void)_readStyleAttributes;
@property(retain, nonatomic) NSString *timezone;
@property(readonly, nonatomic) BOOL hasTimezone;
- (void)_readTimezone;
@property(retain, nonatomic) GEOLatLng *latLng;
@property(readonly, nonatomic) BOOL hasLatLng;
- (void)_readLatLng;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) NSUInteger muid;
@property(nonatomic) BOOL hasStopIndex;
@property(nonatomic) unsigned int stopIndex;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)identifier;
- (id)bestNameWithLocale:(out id )arg1;
- (id)bestName;

@end

