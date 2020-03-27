//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWMDataFormatter-Protocol.h>

@class NSLocale, NSMeasurement, NSMeasurementFormatter, NSNumberFormatter, NSString;
@protocol OS_dispatch_queue;

@interface NWMTemperatureFormatter : NSObject <NWMDataFormatter>
{
    BOOL _isCelsiusPreferred;
    BOOL _shouldAvoidDegreeSymbolOnly;
    NSLocale *_referenceLocale;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumberFormatter *_noUnitFormatter;
    NSMeasurementFormatter *_degreeSymbolOnlyFormatter;
    NSMeasurementFormatter *_unitFormatter;
    NSMeasurement *_noMeasurement;
    NSString *_formattedStaleTemperatureWithDegreeSymbol;
    NSString *_formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
    NSString *_formattedStaleTemperatureWithUnit;
    NSString *_formattedStaleTemperatureWithUnitRoundedVariant;
    NSString *_formattedStaleTemperatureWithoutUnit;
    NSString *_formattedStaleTemperatureWithoutUnitRoundedVariant;
}

+ (id)sharedFormatter;
@property(retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnitRoundedVariant; // @synthesize formattedStaleTemperatureWithoutUnitRoundedVariant=_formattedStaleTemperatureWithoutUnitRoundedVariant;
@property(retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnit; // @synthesize formattedStaleTemperatureWithoutUnit=_formattedStaleTemperatureWithoutUnit;
@property(retain, nonatomic) NSString *formattedStaleTemperatureWithUnitRoundedVariant; // @synthesize formattedStaleTemperatureWithUnitRoundedVariant=_formattedStaleTemperatureWithUnitRoundedVariant;
@property(retain, nonatomic) NSString *formattedStaleTemperatureWithUnit; // @synthesize formattedStaleTemperatureWithUnit=_formattedStaleTemperatureWithUnit;
@property(retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbolRoundedVariant; // @synthesize formattedStaleTemperatureWithDegreeSymbolRoundedVariant=_formattedStaleTemperatureWithDegreeSymbolRoundedVariant;
@property(retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbol; // @synthesize formattedStaleTemperatureWithDegreeSymbol=_formattedStaleTemperatureWithDegreeSymbol;
@property(retain, nonatomic) NSMeasurement *noMeasurement; // @synthesize noMeasurement=_noMeasurement;
@property(retain, nonatomic) NSMeasurementFormatter *unitFormatter; // @synthesize unitFormatter=_unitFormatter;
@property(retain, nonatomic) NSMeasurementFormatter *degreeSymbolOnlyFormatter; // @synthesize degreeSymbolOnlyFormatter=_degreeSymbolOnlyFormatter;
@property(retain, nonatomic) NSNumberFormatter *noUnitFormatter; // @synthesize noUnitFormatter=_noUnitFormatter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSLocale *referenceLocale; // @synthesize referenceLocale=_referenceLocale;
// - (void).cxx_destruct;
- (id)_locked_unitFormatter;
- (id)_locked_degreeSymbolOnlyFormatter;
- (id)_locked_noUnitFormatter;
@property(readonly) BOOL shouldAvoidDegreeSymbolOnly; // @synthesize shouldAvoidDegreeSymbolOnly=_shouldAvoidDegreeSymbolOnly;
@property(readonly) BOOL isCelsiusPreferred; // @synthesize isCelsiusPreferred=_isCelsiusPreferred;
- (void)_locked_updateStaleTemperatureWithUnit;
- (id)_localizedMeasurementForTemperature:(id)arg1;
- (id)_formattedStaleTemperatureWithoutUnit:(NSUInteger)arg1;
- (id)_formattedStaleTemperatureWithUnit:(NSUInteger)arg1;
- (id)_formattedStaleTemperatureWithDegreeSymbol:(NSUInteger)arg1;
- (double)value:(id)arg1;
- (id)formattedWithoutUnit:(id)arg1 style:(NSUInteger)arg2;
- (id)formattedWithoutUnit:(id)arg1;
- (id)formattedWithUnit:(id)arg1 style:(NSUInteger)arg2;
- (id)formattedWithUnit:(id)arg1;
- (id)formattedWithDegreeSymbol:(id)arg1 style:(NSUInteger)arg2 fallbackStyle:(NSUInteger)arg3;
- (id)formattedWithDegreeSymbol:(id)arg1 fallbackStyle:(NSUInteger)arg2;
- (id)init;

@end

