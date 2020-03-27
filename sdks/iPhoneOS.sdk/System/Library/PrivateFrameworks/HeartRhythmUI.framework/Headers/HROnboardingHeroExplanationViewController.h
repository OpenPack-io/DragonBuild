//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRStackedButtonView, NSLayoutConstraint, NSString, UILabel, UIView;

@interface HROnboardingHeroExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    long long _textAlignment;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
// - (void).cxx_destruct;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (double)_titleLastBaselineToBodyTop;
- (double)_titleTopToFirstBaseline;
- (double)_titleTopToFirstBaselineLeading;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (void)_setUpButtonFooterView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (long long)stackedButtonViewLastButtonMode;
@property(readonly, nonatomic) NSString *buttonTitleString;
@property(readonly, nonatomic) NSString *bodyString;
@property(readonly, nonatomic) NSString *titleString;
- (id)createHeroView;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

