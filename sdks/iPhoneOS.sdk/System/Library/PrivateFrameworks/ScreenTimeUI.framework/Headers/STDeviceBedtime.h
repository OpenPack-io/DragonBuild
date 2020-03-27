//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, STBlueprintScheduleSimpleItem;

@interface STDeviceBedtime : NSObject <NSCopying>
{
    BOOL _deviceBedtimeEnabled;
    BOOL _askForMoreTime;
    BOOL _shouldAllowEditing;
    STBlueprintScheduleSimpleItem *_simpleSchedule;
    NSDictionary *_scheduleByWeekdayIndex;
}

+ (id)defaultBedtimeSchedule;
@property(copy) NSDictionary *scheduleByWeekdayIndex; // @synthesize scheduleByWeekdayIndex=_scheduleByWeekdayIndex;
@property(copy) STBlueprintScheduleSimpleItem *simpleSchedule; // @synthesize simpleSchedule=_simpleSchedule;
@property(nonatomic) BOOL shouldAllowEditing; // @synthesize shouldAllowEditing=_shouldAllowEditing;
@property(nonatomic) BOOL askForMoreTime; // @synthesize askForMoreTime=_askForMoreTime;
@property(nonatomic) BOOL deviceBedtimeEnabled; // @synthesize deviceBedtimeEnabled=_deviceBedtimeEnabled;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *scheduleText;
- (id)initWithBlueprint:(id)arg1;
- (id)init;

@end

