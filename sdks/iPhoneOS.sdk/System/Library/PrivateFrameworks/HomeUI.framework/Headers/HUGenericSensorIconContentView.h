//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUAnimationApplier, HUShapeLayerView, HUVisualEffectContainerView, NSArray, UIView;

@interface HUGenericSensorIconContentView : HUPrimaryStateIconContentView
{
    HUShapeLayerView *_bodyView;
    HUVisualEffectContainerView *_bodyContainerView;
    NSArray *_indicatorViews;
    NSArray *_indicatorContainerViews;
    UIView *_indicatorClippingView;
    HUAnimationApplier *_animationApplier;
}

@property(retain, nonatomic) HUAnimationApplier *animationApplier; // @synthesize animationApplier=_animationApplier;
@property(retain, nonatomic) UIView *indicatorClippingView; // @synthesize indicatorClippingView=_indicatorClippingView;
@property(retain, nonatomic) NSArray *indicatorContainerViews; // @synthesize indicatorContainerViews=_indicatorContainerViews;
@property(retain, nonatomic) NSArray *indicatorViews; // @synthesize indicatorViews=_indicatorViews;
@property(retain, nonatomic) HUVisualEffectContainerView *bodyContainerView; // @synthesize bodyContainerView=_bodyContainerView;
@property(retain, nonatomic) HUShapeLayerView *bodyView; // @synthesize bodyView=_bodyView;
// - (void).cxx_destruct;
- (CGRect)_frameForIndicatorContainerViewInPosition:(NSUInteger)arg1;
- (CGRect)_frameForIndicatorViewInPosition:(NSUInteger)arg1 showIndicators:(BOOL)arg2;
- (CGAffineTransform)_transformForIndicatorContainerViewInPosition:(NSUInteger)arg1;
- (void)_layoutIndicatorViewsShowingIndicators:(BOOL)arg1;
- (void)layoutSubviews;
- (id)_animationSettingsForShowingIndicators:(BOOL)arg1;
- (void)_updateIndicatorAlpha;
- (void)updateColorsForDisplayStyle:(NSUInteger)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3;
- (id)managedVisualEffectViews;
- (BOOL)wantsManagedVibrancyEffect;
- (BOOL)showIndicators;
- (id)initWithFrame:(CGRect)arg1;

@end

