//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class CHDAxis, CHDChart, CHDChartType, CHDSeries, CMState, EDResources;

__attribute__((visibility("hidden")))
@interface EMChartMapper : CMMapper
{
    CHDChart *mChart;
    CMState *mState;
    EDResources *mResources;
    CHDChartType *mMainType;
    CHDSeries *mMainSeries;
    CHDAxis *mBaseAxis;
    CHDAxis *mPrimaryAxis;
    CHDAxis *mSecondaryAxis;
    BOOL mIsHorizontal;
    BOOL mIsStacked;
    BOOL mIsPercentStacked;
    NSUInteger mPieIndex;
    struct {
        BOOL primaryCategoryHasDates;
        BOOL secondaryCategoryHasDates;
        BOOL primaryAxisHasDates;
        BOOL secondaryAxisHasDates;
    } mPlotInfos;
    BOOL mHasDateCategory;
    BOOL mHasPrimaryDateAxis;
    BOOL mHasSecondaryDateAxis;
}

+ (CGColor )newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
// - (void).cxx_destruct;
- (void)addSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addStandardSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addGraphicProperties:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addUnitAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)_addCategoryAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)addLegendToDescription:(id)arg1 chartSize:(CGSize)arg2 withState:(id)arg3;
- (void)addBackgroundToDescription:(id)arg1 withState:(id)arg2;
- (void)addTitleToDescription:(id)arg1 withState:(id)arg2;
- (id)copyPdfWithState:(id)arg1 withSize:(CGSize)arg2;
- (id)initWithChart:(id)arg1 parent:(id)arg2;
- (id)dateFromXlDateTimeNumber:(double)arg1;

@end

