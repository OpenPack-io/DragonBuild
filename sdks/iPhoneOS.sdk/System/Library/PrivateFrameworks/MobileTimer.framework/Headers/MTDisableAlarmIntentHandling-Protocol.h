//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTDisableAlarmIntent;

@protocol MTDisableAlarmIntentHandling <NSObject>
- (void)handleDisableAlarm:(MTDisableAlarmIntent *)arg1 completion:(void (^)(MTDisableAlarmIntentResponse *))arg2;

@optional
- (void)confirmDisableAlarm:(MTDisableAlarmIntent *)arg1 completion:(void (^)(MTDisableAlarmIntentResponse *))arg2;
@end

