//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel;

@interface NTKModularSmallDateTemplateView : NTKModularTemplateView
{
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}

+ (BOOL)supportsComplicationFamily:(long long)arg1;
+ (BOOL)handlesComplicationTemplate:(id)arg1;
// - (void).cxx_destruct;
- (void)_update;
- (void)_layoutContentView;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)setIsXL:(BOOL)arg1;
- (void)_configureContentSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

