//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSTimeZone;

@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_timeRanges;
    NSTimeZone *_localTimeZone;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSTimeZone *localTimeZone; // @synthesize localTimeZone=_localTimeZone;
@property(readonly, nonatomic) NSDictionary *timeRanges; // @synthesize timeRanges=_timeRanges;
// - (void).cxx_destruct;
- (void)_printOpenHoursForTheWeek;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1 timeZone:(id)arg2;
- (id)_convertDateToLocalTimeZoneWithDate:(id)arg1;
- (id)_weekdayStringFromWeekdayIndex:(int)arg1;
- (long long)_weekdayIndexFromWeekdayString:(id)arg1;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1 timeZone:(id)arg2;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1;
- (long long)_weekdayOrdinalFromDate:(id)arg1 timeZone:(id)arg2;
- (long long)_weekdayOrdinalFromDate:(id)arg1;
- (BOOL)_validTimeRange:(id)arg1;
- (id)_dateWhenOpenNextAfterDate:(id)arg1 timeZone:(id)arg2;
- (id)dateWhenOpenNextAfterDate:(id)arg1;
- (BOOL)isOpenAtDate:(id)arg1 timeZone:(id)arg2;
- (BOOL)isOpenAtDate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTimeRanges:(id)arg1 timeZone:(id)arg2;
- (id)initWithHoursMessages:(id)arg1 timeZone:(id)arg2;
- (id)initWithHoursPeriodMessage:(id)arg1 timeZone:(id)arg2;
- (id)initWithOpenHours:(id)arg1 timeZone:(id)arg2;
- (id)initWithJSONObj:(id)arg1 timeZone:(id)arg2;

@end

