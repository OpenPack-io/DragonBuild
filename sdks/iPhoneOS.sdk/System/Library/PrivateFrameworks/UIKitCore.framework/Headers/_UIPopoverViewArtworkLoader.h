//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewArtworkLoader : NSObject
{
    long long _backgroundStyle;
    NSString *_backgroundSelector;
}

+ (id)backgroundSelectorForBackgroundStyle:(long long)arg1;
// - (void).cxx_destruct;
- (id)_shortBottomArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortBottomArrowRightEndCapView;
- (id)_shortBottomArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortBottomArrowLeftEndCapView;
- (id)_shortBottomArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortBottomArrowPinnedView;
- (id)_shortBottomArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortBottomArrowView;
- (id)_shortRightArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortRightArrowView;
- (id)_shortTopArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortTopArrowRightEndCapView;
- (id)_shortTopArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortTopArrowLeftEndCapView;
- (id)_shortTopArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortTopArrowPinnedView;
- (id)_shortTopArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)shortTopArrowView;
- (id)_bottomArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)bottomArrowRightEndCapView;
- (id)_bottomArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)bottomArrowLeftEndCapView;
- (id)_bottomArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)bottomArrowPinnedView;
- (id)_bottomArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)bottomArrowView;
- (id)_rightArrowBottomEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)rightArrowBottomEndCapView;
- (id)_rightArrowTopEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)rightArrowTopEndCapView;
- (id)_rightArrowPinnedBottomViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)rightArrowPinnedBottomView;
- (id)_rightArrowPinnedTopViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)rightArrowPinnedTopView;
- (id)_rightArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)rightArrowView;
- (id)_topArrowRightEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)topArrowRightEndCapView;
- (id)_topArrowLeftEndCapViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)topArrowLeftEndCapView;
- (id)_topArrowPinnedViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)topArrowPinnedView;
- (id)_topArrowViewForTraitCollection:(id)arg1 withRimShadow:(BOOL)arg2;
- (id)topArrowView;
- (double)shortArtRightArrowBase;
- (double)shortArtArrowTopGradientEnd;
- (double)shortArtNoArrowTopGradientEnd;
- (double)bottomEndCapHeight;
- (double)capCornerRadius;
- (double)noArrowTopGradientEnd;
- (double)arrowTopGradientEnd;
- (double)clampArrowBase;
- (double)sideArrowStart;
- (double)topArrowStart;
- (double)arrowBase;
- (double)arrowHeight;
- (id)viewWithContentsImage:(id)arg1 rect:(CGRect)arg2 center:(CGRect)arg3 antialiasingMask:(unsigned int)arg4 directionSelector:(id)arg5;
- (CGRect)contentsCenterForRect:(CGRect)arg1 inImageOfSize:(CGSize)arg2;
- (CGRect)contentRectForRect:(CGRect)arg1 inImageOfSize:(CGSize)arg2;
- (id)_templateImageForDirection:(id)arg1 shortArtwork:(BOOL)arg2 traitCollection:(id)arg3 rimShadow:(BOOL)arg4;
- (id)templateImageForDirection:(id)arg1 shortArtwork:(BOOL)arg2 traitCollection:(id)arg3;
- (BOOL)modern;
- (id)initWithBackgroundStyle:(long long)arg1;

@end

