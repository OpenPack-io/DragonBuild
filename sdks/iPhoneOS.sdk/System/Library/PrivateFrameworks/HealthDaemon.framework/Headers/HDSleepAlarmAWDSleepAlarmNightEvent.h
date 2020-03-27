//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface HDSleepAlarmAWDSleepAlarmNightEvent : PBCodable <NSCopying>
{
    long long _bedtimeHour;
    long long _bedtimeMinute;
    long long _bedtimeToCorrectedBedtimeMinutes;
    long long _bedtimeToFirstSleepInterruptionMinutes;
    long long _bedtimeToStartOfLongestSleepIntervalMinutes;
    long long _correctedBedtimeToThirdPartySleepOnsetMinutes;
    long long _percentOfDesiredSleep;
    NSUInteger _timestamp;
    long long _wakeupTimeToThirdPartyWakeupTimeMinutes;
    NSString *_thirdPartyBundleIdentifier;
    NSString *_thirdPartyDeviceManufacturer;
    NSString *_thirdPartyDeviceModel;
    BOOL _wakeupIsOnWeekday;
    struct {
        unsigned int bedtimeHour:1;
        unsigned int bedtimeMinute:1;
        unsigned int bedtimeToCorrectedBedtimeMinutes:1;
        unsigned int bedtimeToFirstSleepInterruptionMinutes:1;
        unsigned int bedtimeToStartOfLongestSleepIntervalMinutes:1;
        unsigned int correctedBedtimeToThirdPartySleepOnsetMinutes:1;
        unsigned int percentOfDesiredSleep:1;
        unsigned int timestamp:1;
        unsigned int wakeupTimeToThirdPartyWakeupTimeMinutes:1;
        unsigned int wakeupIsOnWeekday:1;
    } _has;
}

@property(retain, nonatomic) NSString *thirdPartyDeviceManufacturer; // @synthesize thirdPartyDeviceManufacturer=_thirdPartyDeviceManufacturer;
@property(retain, nonatomic) NSString *thirdPartyDeviceModel; // @synthesize thirdPartyDeviceModel=_thirdPartyDeviceModel;
@property(nonatomic) BOOL wakeupIsOnWeekday; // @synthesize wakeupIsOnWeekday=_wakeupIsOnWeekday;
@property(nonatomic) long long bedtimeMinute; // @synthesize bedtimeMinute=_bedtimeMinute;
@property(nonatomic) long long bedtimeHour; // @synthesize bedtimeHour=_bedtimeHour;
@property(nonatomic) long long percentOfDesiredSleep; // @synthesize percentOfDesiredSleep=_percentOfDesiredSleep;
@property(retain, nonatomic) NSString *thirdPartyBundleIdentifier; // @synthesize thirdPartyBundleIdentifier=_thirdPartyBundleIdentifier;
@property(nonatomic) long long wakeupTimeToThirdPartyWakeupTimeMinutes; // @synthesize wakeupTimeToThirdPartyWakeupTimeMinutes=_wakeupTimeToThirdPartyWakeupTimeMinutes;
@property(nonatomic) long long correctedBedtimeToThirdPartySleepOnsetMinutes; // @synthesize correctedBedtimeToThirdPartySleepOnsetMinutes=_correctedBedtimeToThirdPartySleepOnsetMinutes;
@property(nonatomic) long long bedtimeToStartOfLongestSleepIntervalMinutes; // @synthesize bedtimeToStartOfLongestSleepIntervalMinutes=_bedtimeToStartOfLongestSleepIntervalMinutes;
@property(nonatomic) long long bedtimeToFirstSleepInterruptionMinutes; // @synthesize bedtimeToFirstSleepInterruptionMinutes=_bedtimeToFirstSleepInterruptionMinutes;
@property(nonatomic) long long bedtimeToCorrectedBedtimeMinutes; // @synthesize bedtimeToCorrectedBedtimeMinutes=_bedtimeToCorrectedBedtimeMinutes;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(readonly, nonatomic) BOOL hasThirdPartyDeviceManufacturer;
@property(readonly, nonatomic) BOOL hasThirdPartyDeviceModel;
@property(nonatomic) BOOL hasWakeupIsOnWeekday;
@property(nonatomic) BOOL hasBedtimeMinute;
@property(nonatomic) BOOL hasBedtimeHour;
@property(nonatomic) BOOL hasPercentOfDesiredSleep;
@property(readonly, nonatomic) BOOL hasThirdPartyBundleIdentifier;
@property(nonatomic) BOOL hasWakeupTimeToThirdPartyWakeupTimeMinutes;
@property(nonatomic) BOOL hasCorrectedBedtimeToThirdPartySleepOnsetMinutes;
@property(nonatomic) BOOL hasBedtimeToStartOfLongestSleepIntervalMinutes;
@property(nonatomic) BOOL hasBedtimeToFirstSleepInterruptionMinutes;
@property(nonatomic) BOOL hasBedtimeToCorrectedBedtimeMinutes;
@property(nonatomic) BOOL hasTimestamp;

@end

