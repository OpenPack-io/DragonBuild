//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKInteractiveChartDisplayType.h>

@class NSArray;

@interface HKAnnotationDisplayType : HKInteractiveChartDisplayType
{
    NSArray *_trendChartPoints;
}

@property(readonly, nonatomic) NSArray *trendChartPoints; // @synthesize trendChartPoints=_trendChartPoints;
// - (void).cxx_destruct;
- (id)initWithDateInterval:(id)arg1 trendData:(id)arg2;

@end

