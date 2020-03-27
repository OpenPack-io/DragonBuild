//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, PricePopoverBar, StockChartView, StockGraphView, StocksTapDragGestureRecognizer, UILabel;

@interface ChartHUDView : UIView
{
    UILabel *_leftDateLabel;
    UILabel *_centeredLabel;
    UILabel *_rightDateLabel;
    long long _interval;
    NSMutableSet *_inactiveTouchInfoSet;
    NSMutableSet *_touchInfoSet;
    BOOL _forceTouchUpdate;
    PricePopoverBar *_pricePopoverBar;
    StocksTapDragGestureRecognizer *_tapDragGesture;
    BOOL _enabled;
    BOOL _overlayHidden;
    StockChartView *_chartView;
    StockGraphView *_graphView;
    double _barHeight;
}

+ (id)monoSpacedFontWithFont:(id)arg1;
+ (id)newHUDLabel;
+ (id)stringForTimeIntervalSince1970:(double)arg1 withInterval:(long long)arg2 isDouble:(BOOL)arg3 isLeft:(BOOL)arg4;
+ (void)initializeDateFormattersIfNeededForInterval:(long long)arg1 withTimeZone:(id)arg2;
+ (id)_dateRangeSeparatorString;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
@property(nonatomic, getter=isOverlayHidden) BOOL overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) StockGraphView *graphView; // @synthesize graphView=_graphView;
@property(nonatomic) __weak StockChartView *chartView; // @synthesize chartView=_chartView;
// - (void).cxx_destruct;
- (void)tapDragGestureChanged:(id)arg1;
- (void)_showHUD;
- (BOOL)isTrackingTouches;
- (void)setShowingTracking:(BOOL)arg1 withTouchInfo:(id)arg2 animated:(BOOL)arg3;
- (void)setSelectedInterval:(long long)arg1 timeZone:(id)arg2;
- (void)layoutSubviews;
- (void)resizeSelectedClipViewsIfNeeded;
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)resetLocale;

@end

