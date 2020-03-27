//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKChartDataCacheController, HKDateCache, HKDisplayCategoryController, HKDisplayTypeController, HKHealthStore, HKSampleTypeDateRangeController, HKSampleTypeUpdateController, HKSelectedTimeScopeController, HKUnitPreferenceController;

@interface HKOverlayRoomApplicationItems : NSObject
{
    HKHealthStore *_healthStore;
    HKSelectedTimeScopeController *_timeScopeController;
    HKDateCache *_dateCache;
    HKUnitPreferenceController *_unitController;
    HKChartDataCacheController *_chartDataCacheController;
    HKSampleTypeUpdateController *_sampleTypeUpdateController;
    HKSampleTypeDateRangeController *_sampleDateRangeController;
    HKDisplayTypeController *_displayTypeController;
    HKDisplayCategoryController *_categoryController;
}

@property(retain, nonatomic) HKDisplayCategoryController *categoryController; // @synthesize categoryController=_categoryController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(retain, nonatomic) HKSampleTypeDateRangeController *sampleDateRangeController; // @synthesize sampleDateRangeController=_sampleDateRangeController;
@property(retain, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController; // @synthesize sampleTypeUpdateController=_sampleTypeUpdateController;
@property(retain, nonatomic) HKChartDataCacheController *chartDataCacheController; // @synthesize chartDataCacheController=_chartDataCacheController;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(retain, nonatomic) HKSelectedTimeScopeController *timeScopeController; // @synthesize timeScopeController=_timeScopeController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
// - (void).cxx_destruct;

@end

