//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTAlarm, NSArray;

@protocol MTAlarmClient <NSObject>
- (void)nextAlarmChanged:(MTAlarm *)arg1;
- (void)alarmFired:(MTAlarm *)arg1;
- (void)alarmDismissed:(MTAlarm *)arg1;
- (void)alarmSnoozed:(MTAlarm *)arg1;
- (void)alarmsRemoved:(NSArray *)arg1;
- (void)alarmsUpdated:(NSArray *)arg1;
- (void)alarmsAdded:(NSArray *)arg1;
@end

