//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRefreshControlContentView.h>

@class UILabel, UIView, _UIRefreshControlModernReplicatorView;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView
{
    BOOL _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    UIView *_seed;
    BOOL _hasFinishedRevealing;
    UILabel *_textLabel;
    BOOL _scrollViewVerticalFeedbackGeneratorEnabled;
    BOOL _areAnimationsValid;
    double _currentPopStiffness;
    double _impactIntensity;
}

@property(nonatomic) double impactIntensity; // @synthesize impactIntensity=_impactIntensity;
@property(nonatomic) double currentPopStiffness; // @synthesize currentPopStiffness=_currentPopStiffness;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) BOOL areAnimationsValid; // @synthesize areAnimationsValid=_areAnimationsValid;
// - (void).cxx_destruct;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)_effectiveTintColorWithAlpha:(double)arg1;
- (id)_effectiveTintColor;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)maximumSnappingHeight;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (double)_currentTimeOffset;
- (void)_updateTimeOffsetOfRelevantLayers;
- (double)_percentageShowing;
- (void)_snappingMagic;
- (void)_goAway;
- (void)_tick;
- (void)_spin;
- (void)_bloom;
- (void)_unbloom;
- (void)_reveal;
- (void)_resetToRevealingState;
- (CGAffineTransform)_unbloomedSeedTransform;
- (CGAffineTransform)_bloomedSeedTransform;
- (void)_setUnbloomedAppearance;
- (void)_setBloomedAppearance;
- (void)_setSpunAppearance;
- (void)_cleanUpAfterRevealing;
- (void)_removeAllAnimations;
- (void)_tickDueToProgrammaticRefresh;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (long long)style;
- (id)initWithFrame:(CGRect)arg1;

@end

