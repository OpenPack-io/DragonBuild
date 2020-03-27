//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlControllableView-Protocol.h>

@class HUIconView, HUQuickControlSliderValueOverlayView, HUQuickControlSliderViewProfile, NSLayoutConstraint, UIImpactFeedbackGenerator;

@interface HUQuickControlSliderView : UIView <HUQuickControlControllableView>
{
    BOOL _showOffState;
    HUQuickControlSliderViewProfile *_profile;
    NSUInteger _reachabilityState;
    double _sliderValue;
    double _secondarySliderValue;
    double _rawSliderValue;
    UIView *_backgroundView;
    UIView *_borderView;
    HUQuickControlSliderValueOverlayView *_valueOverlayView;
    NSLayoutConstraint *_overlayTopConstraint;
    HUIconView *_decorationIconView;
    double _primaryNormalizedValue;
    double _secondaryNormalizedValue;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) double secondaryNormalizedValue; // @synthesize secondaryNormalizedValue=_secondaryNormalizedValue;
@property(nonatomic) double primaryNormalizedValue; // @synthesize primaryNormalizedValue=_primaryNormalizedValue;
@property(retain, nonatomic) HUIconView *decorationIconView; // @synthesize decorationIconView=_decorationIconView;
@property(retain, nonatomic) NSLayoutConstraint *overlayTopConstraint; // @synthesize overlayTopConstraint=_overlayTopConstraint;
@property(retain, nonatomic) HUQuickControlSliderValueOverlayView *valueOverlayView; // @synthesize valueOverlayView=_valueOverlayView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double rawSliderValue; // @synthesize rawSliderValue=_rawSliderValue;
@property(nonatomic) BOOL showOffState; // @synthesize showOffState=_showOffState;
@property(nonatomic) double secondarySliderValue; // @synthesize secondarySliderValue=_secondarySliderValue;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(nonatomic) NSUInteger reachabilityState; // @synthesize reachabilityState=_reachabilityState;
@property(copy, nonatomic) HUQuickControlSliderViewProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (BOOL)_createDecorationIconViewIfNecessary;
- (void)_updateDecorationIconDescriptorAnimated:(BOOL)arg1;
- (void)_updateUIForReachabilityState:(NSUInteger)arg1;
@property(retain, nonatomic) id secondaryValue;
@property(retain, nonatomic) id value;
- (id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg1;
- (void)_actuateTapticFeedback;
- (void)_prepareForTapticFeedback;
- (void)_updateOffState;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (CDStruct_c3b9c2ee)_permittedValueRange;
- (id)initWithProfile:(id)arg1;

@end

