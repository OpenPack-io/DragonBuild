//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoWeatherComplicationsCompanion/CLKFullColorImageView-Protocol.h>

@class NSArray, NWCDailyForecastRangeView, UIStackView;
@protocol CLKMonochromeFilterProvider;

__attribute__((visibility("hidden")))
@interface NWCSevenDayForecastView : UIView <CLKFullColorImageView>
{
    id <CLKMonochromeFilterProvider> _filterProvider;
    NWCDailyForecastRangeView *_dailyForecastRangeView;
    NSArray *_dailyForecastViews;
    UIStackView *_horizontalStackView;
}

+ (NSUInteger)maximumDailyConditionCount;
@property(retain, nonatomic) UIStackView *horizontalStackView; // @synthesize horizontalStackView=_horizontalStackView;
@property(retain, nonatomic) NSArray *dailyForecastViews; // @synthesize dailyForecastViews=_dailyForecastViews;
@property(retain, nonatomic) NWCDailyForecastRangeView *dailyForecastRangeView; // @synthesize dailyForecastRangeView=_dailyForecastRangeView;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
// - (void).cxx_destruct;
@property(readonly, nonatomic) Class dailyForecastViewClass;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)resumeLiveFullColorImageView;
- (void)pauseLiveFullColorImageView;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)_applyConstraints;
- (void)_addDailyForecastViewsToStackView:(id)arg1;
- (void)processConditions:(id)arg1 dailyForecastedConditions:(id)arg2 timeZone:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

