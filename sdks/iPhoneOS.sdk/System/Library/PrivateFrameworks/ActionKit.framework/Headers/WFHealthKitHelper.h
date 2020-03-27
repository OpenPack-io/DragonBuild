//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFHealthKitHelper : NSObject
{
}

+ (long long)enumFromReadableVO2MaxTestType:(id)arg1;
+ (long long)enumFromReadableBloodGlucoseMealTime:(id)arg1;
+ (long long)enumFromReadableInsulinDeliveryReason:(id)arg1;
+ (id)readableVO2MaxTestTypeFromEnum:(long long)arg1;
+ (id)readableBloodGlucoseMealTimeFromEnum:(long long)arg1;
+ (id)readableInsulinDeliveryReasonFromEnum:(long long)arg1;
+ (id)readableVO2MaxTestTypeValues;
+ (id)readableBloodGlucoseMealTimeValues;
+ (id)readableInsulinDeliveryReasonValues;
+ (id)boolFromReadableSexualActivity:(id)arg1;
+ (long long)enumFromReadableSleepAnalysis:(id)arg1;
+ (long long)enumFromReadableOvulationTestResult:(id)arg1;
+ (id)boolFromReadableMenstrualFlowIsStartOfCycle:(id)arg1;
+ (long long)enumFromReadableMenstrualFlow:(id)arg1;
+ (long long)enumFromReadableCervicalMucusQuality:(id)arg1;
+ (long long)enumFromReadableAppleStandingHour:(id)arg1;
+ (id)readableSexualActivityFromBool:(BOOL)arg1;
+ (id)readableSleepAnalysisFromEnum:(long long)arg1;
+ (id)readableOvulationTestResultFromEnum:(long long)arg1;
+ (id)readableMenstrualFlowIsStartOfCycleFromBool:(BOOL)arg1;
+ (id)readableMenstrualFlowFromEnum:(long long)arg1;
+ (id)readableCervicalMucusQualityFromEnum:(long long)arg1;
+ (id)readableAppleStandingHourFromEnum:(long long)arg1;
+ (id)readableSexualActivityValues;
+ (id)readableSleepAnalysisValues;
+ (id)readableOvulationTestResultValues;
+ (id)readableMenstrualFlowIsStartOfCycleValues;
+ (id)readableMenstrualFlowValues;
+ (id)readableCervicalMucusQualityValues;
+ (id)readableAppleStandingHourValues;
+ (id)readableWorkoutActivityTypeFromWorkoutActivityType:(NSUInteger)arg1;
+ (NSUInteger)workoutActivityTypeFromReadableWorkoutActivityType:(id)arg1;
+ (BOOL)readableWorkoutActivityTypeIsValid:(id)arg1;
+ (id)readableWorkoutActivityTypes;
+ (id)readableTypeIdentifierFromCharacteristicTypeIdentifier:(id)arg1;
+ (id)characteristicTypeIdentifierFromReadableTypeIdentifier:(id)arg1;
+ (id)readableBloodTypeFromEnum:(long long)arg1;
+ (id)readableBiologicalSexFromEnum:(long long)arg1;
+ (id)readableCharacteristicTypes;
+ (id)readableSampleTypeIdentifierFromSampleTypeIdentifier:(id)arg1;
+ (id)sampleTypeIdentifierFromReadableTypeIdentifier:(id)arg1;
+ (id)localizedDisplayNameForUnit:(id)arg1 quantityTypeIdentifier:(id)arg2;
+ (void)validUnitsForQuantityType:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (id)localizedSampleTypes;
+ (id)readableSampleTypes;
+ (void)setupHealthKitAccessResourcesInAction:(id)arg1;
+ (id)extractHKDataFromContentQuery:(id)arg1;
+ (void)sourceWithName:(id)arg1 ofSampleType:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (void)sourcesForSampleType:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end

