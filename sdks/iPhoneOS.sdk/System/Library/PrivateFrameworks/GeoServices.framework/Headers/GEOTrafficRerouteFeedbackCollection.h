//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSData *_directionResponseID;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    NSData *_reroutedRouteID;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _oldRouteHistoricTravelTime;
    unsigned int _oldRouteTravelTime;
    unsigned int _reroutedRouteHistoricTravelTime;
    unsigned int _reroutedRouteTravelTime;
    BOOL _oldRouteBlocked;
    struct {
        unsigned int has_oldRouteHistoricTravelTime:1;
        unsigned int has_oldRouteTravelTime:1;
        unsigned int has_reroutedRouteHistoricTravelTime:1;
        unsigned int has_reroutedRouteTravelTime:1;
        unsigned int has_oldRouteBlocked:1;
        unsigned int read_directionResponseID:1;
        unsigned int read_oldRouteID:1;
        unsigned int read_oldRouteIncidents:1;
        unsigned int read_reroutedRouteID:1;
        unsigned int wrote_directionResponseID:1;
        unsigned int wrote_oldRouteID:1;
        unsigned int wrote_oldRouteIncidents:1;
        unsigned int wrote_reroutedRouteID:1;
        unsigned int wrote_oldRouteHistoricTravelTime:1;
        unsigned int wrote_oldRouteTravelTime:1;
        unsigned int wrote_reroutedRouteHistoricTravelTime:1;
        unsigned int wrote_reroutedRouteTravelTime:1;
        unsigned int wrote_oldRouteBlocked:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)oldRouteIncidentsType;
// - (void).cxx_destruct;
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
@property(retain, nonatomic) NSData *reroutedRouteID;
@property(readonly, nonatomic) BOOL hasReroutedRouteID;
- (void)_readReroutedRouteID;
@property(retain, nonatomic) NSData *oldRouteID;
@property(readonly, nonatomic) BOOL hasOldRouteID;
- (void)_readOldRouteID;
@property(retain, nonatomic) NSData *directionResponseID;
@property(readonly, nonatomic) BOOL hasDirectionResponseID;
- (void)_readDirectionResponseID;
- (id)oldRouteIncidentsAtIndex:(NSUInteger)arg1;
- (NSUInteger)oldRouteIncidentsCount;
- (void)_addNoFlagsOldRouteIncidents:(id)arg1;
- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
@property(retain, nonatomic) NSMutableArray *oldRouteIncidents;
- (void)_readOldRouteIncidents;
@property(nonatomic) BOOL hasOldRouteBlocked;
@property(nonatomic) BOOL oldRouteBlocked;
@property(nonatomic) BOOL hasReroutedRouteHistoricTravelTime;
@property(nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property(nonatomic) BOOL hasOldRouteHistoricTravelTime;
@property(nonatomic) unsigned int oldRouteHistoricTravelTime;
@property(nonatomic) BOOL hasReroutedRouteTravelTime;
@property(nonatomic) unsigned int reroutedRouteTravelTime;
@property(nonatomic) BOOL hasOldRouteTravelTime;
@property(nonatomic) unsigned int oldRouteTravelTime;
- (id)initWithData:(id)arg1;
- (id)init;

@end

