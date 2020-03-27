//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallRingText : CLKComplicationTemplate
{
    float _fillFraction;
    CLKTextProvider *_textProvider;
    long long _ringStyle;
}

@property(nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property(nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
// - (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateFloatKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

