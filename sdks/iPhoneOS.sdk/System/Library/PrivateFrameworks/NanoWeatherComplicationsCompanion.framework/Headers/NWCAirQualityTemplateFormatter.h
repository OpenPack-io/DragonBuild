//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWCTemplateFormattable-Protocol.h>

@class NSNumberFormatter;

@interface NWCAirQualityTemplateFormatter : NSObject <NWCTemplateFormattable>
{
    NSNumberFormatter *_indexNumberFormatter;
}

+ (id)sharedFormatter;
@property(retain, nonatomic) NSNumberFormatter *indexNumberFormatter; // @synthesize indexNumberFormatter=_indexNumberFormatter;
// - (void).cxx_destruct;
- (id)_localizedIndexForConditions:(id)arg1;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)init;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;
- (id)utilitarianLargeTemplateForLocation:(id)arg1 conditions:(id)arg2;
- (id)modularSmallTemplateForLocation:(id)arg1 conditions:(id)arg2;
- (id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(BOOL)arg2 conditions:(id)arg3;
- (id)graphicCornerTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)graphicCircularTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)graphicBezelTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)circularMediumTemplateForConditions:(id)arg1;
- (id)circularSmallTemplateForConditions:(id)arg1;

@end

