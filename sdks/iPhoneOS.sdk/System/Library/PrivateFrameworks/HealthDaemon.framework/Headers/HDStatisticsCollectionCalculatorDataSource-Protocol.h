//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDStatisticsCollectionCalculator, NSDateInterval;

@protocol HDStatisticsCollectionCalculatorDataSource <NSObject>
- (BOOL)collectionCalculator:(HDStatisticsCollectionCalculator *)arg1 queryForInterval:(NSDateInterval *)arg2 error:(id )arg3 sampleHandler:(BOOL (^)(double, double, double, long long, BOOL, id ))arg4;
@end

