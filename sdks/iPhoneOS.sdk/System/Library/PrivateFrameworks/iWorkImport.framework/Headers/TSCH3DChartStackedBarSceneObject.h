//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartStackedColumnSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
{
}

+ (id)partWithEnumerator:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
+ (BOOL)isHorizontalChart;
+ (BOOL)isStacked;
+ (id)chartSeriesType;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;
- (tvec2_84d5962d)labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;

@end

