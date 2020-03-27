//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOTransitRouteDisplayStrings, GEOTransitRouteIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alerts;
    GEOTransitRouteDisplayStrings *_displayStrings;
    GEOTransitRouteIdentifier *_routeIdentifier;
    NSMutableArray *_stepUpdates;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_status:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alerts:1;
        unsigned int read_displayStrings:1;
        unsigned int read_routeIdentifier:1;
        unsigned int read_stepUpdates:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_alerts:1;
        unsigned int wrote_displayStrings:1;
        unsigned int wrote_routeIdentifier:1;
        unsigned int wrote_stepUpdates:1;
        unsigned int wrote_status:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)alertType;
+ (Class)stepUpdateType;
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
- (id)alertAtIndex:(NSUInteger)arg1;
- (NSUInteger)alertsCount;
- (void)_addNoFlagsAlert:(id)arg1;
- (void)addAlert:(id)arg1;
- (void)clearAlerts;
@property(retain, nonatomic) NSMutableArray *alerts;
- (void)_readAlerts;
- (id)stepUpdateAtIndex:(NSUInteger)arg1;
- (NSUInteger)stepUpdatesCount;
- (void)_addNoFlagsStepUpdate:(id)arg1;
- (void)addStepUpdate:(id)arg1;
- (void)clearStepUpdates;
@property(retain, nonatomic) NSMutableArray *stepUpdates;
- (void)_readStepUpdates;
@property(retain, nonatomic) GEOTransitRouteDisplayStrings *displayStrings;
@property(readonly, nonatomic) BOOL hasDisplayStrings;
- (void)_readDisplayStrings;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
@property(retain, nonatomic) GEOTransitRouteIdentifier *routeIdentifier;
@property(readonly, nonatomic) BOOL hasRouteIdentifier;
- (void)_readRouteIdentifier;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)_logDescription;

@end

