//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class HKUnit;

@interface HKHistogramChartDataFormatter : HKInteractiveChartDataFormatter
{
    HKUnit *_unit;
}

@property(readonly, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
// - (void).cxx_destruct;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(BOOL)arg3;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)initWithUnit:(id)arg1;

@end

