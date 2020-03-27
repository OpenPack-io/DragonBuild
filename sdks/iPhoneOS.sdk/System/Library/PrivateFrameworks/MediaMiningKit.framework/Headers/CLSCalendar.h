//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSCalendar : NSObject
{
}

+ (id)localStartSeasonDateForLocalDate:(id)arg1;
+ (BOOL)supportsSeasonsWithLocale:(id)arg1;
+ (BOOL)currentLocaleSupportsSeasons;
+ (BOOL)isLastMonthOfSeasonForLocalDate:(id)arg1;
+ (BOOL)isMiddleMonthOfSeasonForLocalDate:(id)arg1;
+ (BOOL)isFirstTenDaysOfSeasonForLocalDate:(id)arg1;
+ (BOOL)isFirstMonthOfSeasonForLocalDate:(id)arg1;
+ (BOOL)isSecondHalfOfSeasonForLocalDate:(id)arg1;
+ (id)seasonNameForLocalDate:(id)arg1 locale:(id)arg2;
+ (id)seasonNameForDateComponents:(id)arg1 locale:(id)arg2;
+ (BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg1;
+ (BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg1;
+ (id)s_seasonCountryCodesDictionary;
+ (id)southernMeteorologicalSeasonNameForDateComponents:(id)arg1;
+ (id)northernMeteorologicalSeasonNameForDateComponents:(id)arg1;
+ (id)components:(NSUInteger)arg1 fromDateComponents:(id)arg2 toDateComponents:(id)arg3 options:(NSUInteger)arg4;
+ (BOOL)isFirstTwoWeeksOfMonthForLocalDate:(id)arg1;
+ (BOOL)isLastTwoWeeksOfMonthForLocalDate:(id)arg1;
+ (BOOL)isLastWeekOfMonthForLocalDate:(id)arg1;
+ (_NSRange)rangeOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
+ (long long)compareDate:(id)arg1 toDate:(id)arg2 toUnitGranularity:(NSUInteger)arg3;
+ (id)dateFromComponents:(NSUInteger)arg1 ofDate:(id)arg2;
+ (id)dateByAddingWeeksOfYear:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingYears:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingDays:(long long)arg1 toDate:(id)arg2;
+ (id)dateByAddingHours:(long long)arg1 toDate:(id)arg2;
+ (long long)hourFromDate:(id)arg1;
+ (long long)dayOfWeekFromDate:(id)arg1;
+ (long long)dayFromDate:(id)arg1;
+ (long long)weekOfMonthFromDate:(id)arg1;
+ (long long)weekOfYearFromDate:(id)arg1;
+ (long long)monthFromDate:(id)arg1;
+ (long long)yearForWeekOfYearFromDate:(id)arg1;
+ (long long)yearFromDate:(id)arg1;
+ (id)components:(NSUInteger)arg1 fromDate:(id)arg2;
+ (id)endOfWeekForDate:(id)arg1;
+ (id)startOfWeekForDate:(id)arg1;
+ (id)endOfDayForDate:(id)arg1;
+ (id)startOfDayForDate:(id)arg1;
+ (id)dateBySettingYear:(long long)arg1 ofDate:(id)arg2;
+ (id)localDateFromUniversalDate:(id)arg1 atLocation:(id)arg2;
+ (id)universalDateFromLocalDate:(id)arg1 atLocation:(id)arg2;
+ (id)localDateFromUniversalDate:(id)arg1;
+ (id)localDateFromUniversalDate:(id)arg1 inTimeZone:(id)arg2;
+ (id)universalDateFromLocalDate:(id)arg1;
+ (id)universalDateFromLocalDate:(id)arg1 inTimeZone:(id)arg2;
+ (id)componentsFromDate:(id)arg1 inTimeZone:(id)arg2;
+ (id)dateFromComponents:(id)arg1 inTimeZone:(id)arg2;
+ (id)dateComponentsWithLocalDate:(id)arg1;
+ (id)dateComponentsWithUTCDate:(id)arg1 localDate:(id)arg2;
+ (id)currentLocalDate;
+ (void)initialize;

@end

