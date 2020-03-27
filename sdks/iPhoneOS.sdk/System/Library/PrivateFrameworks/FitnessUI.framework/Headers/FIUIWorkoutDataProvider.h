//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, NSCalendar, NSDate, NSMutableArray, NSMutableDictionary, _HKAnchoredObjectQueryManager;

@interface FIUIWorkoutDataProvider : NSObject
{
    HKHealthStore *_healthStore;
    _HKAnchoredObjectQueryManager *_queryManager;
    NSMutableDictionary *_workoutsByDay;
    NSMutableArray *_updateHandlers;
    HKAnchoredObjectQuery *_currentWorkoutAnchoredObjectQuery;
    NSCalendar *_gregorianCalendar;
    NSCalendar *_currentCalendar;
    NSDate *_retryDate;
}

// - (void).cxx_destruct;
- (void)_retryQuery:(id)arg1;
- (void)_retryQueryOnDidBecomeActiveWithDate:(id)arg1;
- (void)_handleRemovedObjects:(id)arg1;
- (void)_handleAddedSamples:(id)arg1;
- (void)_runUpdateHandlers;
- (void)addUpdateHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_fetchAllWorkoutsFromDate:(id)arg1;
- (void)stopFetching;
- (void)startFetchingFromDate:(id)arg1;
- (id)allWorkouts;
- (id)workoutsForDay:(id)arg1;
- (BOOL)hasWorkouts;
- (void)dealloc;
- (void)_timeZoneDidChange:(id)arg1;
- (void)_commonInit;
- (id)init;
- (id)initWithHealthStore:(id)arg1;

@end

