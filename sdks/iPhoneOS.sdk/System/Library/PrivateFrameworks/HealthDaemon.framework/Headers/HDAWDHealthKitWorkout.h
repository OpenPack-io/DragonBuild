//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDAWDHealthKitWorkout : PBCodable <NSCopying>
{
    long long _durationMs;
    long long _endDate;
    long long _startDate;
    NSUInteger _timestamp;
    long long _totalDistance;
    long long _totalEnergyBurned;
    long long _totalSteps;
    int _activityType;
    struct {
        unsigned int durationMs:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int totalDistance:1;
        unsigned int totalEnergyBurned:1;
        unsigned int totalSteps:1;
        unsigned int activityType:1;
    } _has;
}

@property(nonatomic) long long totalSteps; // @synthesize totalSteps=_totalSteps;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) long long totalEnergyBurned; // @synthesize totalEnergyBurned=_totalEnergyBurned;
@property(nonatomic) long long durationMs; // @synthesize durationMs=_durationMs;
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
@property(nonatomic) BOOL hasTotalSteps;
@property(nonatomic) BOOL hasEndDate;
@property(nonatomic) BOOL hasStartDate;
@property(nonatomic) BOOL hasTotalDistance;
@property(nonatomic) BOOL hasTotalEnergyBurned;
@property(nonatomic) BOOL hasDurationMs;
- (int)StringAsActivityType:(id)arg1;
- (id)activityTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasActivityType;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
@property(nonatomic) BOOL hasTimestamp;

@end

