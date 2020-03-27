//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerChineseCalendar : NSCalendar
{
    NSCalendar *realCalendar;
}

+ (id)cyclicalFromRelated:(id)arg1;
+ (id)relatedFromCyclical:(id)arg1;
@property NSCalendar *realCalendar; // @synthesize realCalendar;
- (_NSRange)rangeOfUnit:(NSUInteger)arg1 inUnit:(NSUInteger)arg2 forDate:(id)arg3;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(NSUInteger)arg3;
- (id)calendarIdentifier;
- (_NSRange)maximumRangeOfUnit:(NSUInteger)arg1;
- (void)setTimeZone:(id)arg1;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2;
- (id)components:(NSUInteger)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(NSUInteger)arg4;
- (id)dateFromComponents:(id)arg1;
- (id)initWithCalendar:(id)arg1;

@end

