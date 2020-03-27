//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, PXAnimatedLabel, UIFont;

@interface PXAnimatedHeaderView : UIView
{
    UIFont *_font;
    NSString *_text;
    PXAnimatedLabel *_currentLabel;
    PXAnimatedLabel *_sizingLabel;
    CAGradientLayer *_gradientLayer;
}

@property(retain) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain) PXAnimatedLabel *sizingLabel; // @synthesize sizingLabel=_sizingLabel;
@property(retain) PXAnimatedLabel *currentLabel; // @synthesize currentLabel=_currentLabel;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
// - (void).cxx_destruct;
- (void)_animateLabelSwitchFromLabel:(id)arg1 toLabel:(id)arg2 andAnimationStyle:(long long)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (void)_updateSizingWithText:(id)arg1;
- (id)_labelWithText:(id)arg1;
- (BOOL)_requiresDigitAnimationForNewText:(id)arg1;
- (BOOL)_requiresLabelSwitchForNewText:(id)arg1;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 spinDigits:(BOOL)arg3;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;

@end

