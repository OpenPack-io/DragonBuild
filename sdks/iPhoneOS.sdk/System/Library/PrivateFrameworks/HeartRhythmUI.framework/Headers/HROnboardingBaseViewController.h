//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class NSLayoutConstraint, UIScrollView, UIView;
@protocol HROnboardingPageViewControllerDelegate;

@interface HROnboardingBaseViewController : HKViewController
{
    BOOL _onboarding;
    UIView *_contentView;
    UIScrollView *_scrollView;
    long long _leftButtonType;
    long long _rightButtonType;
    id <HROnboardingPageViewControllerDelegate> _delegate;
    UIView *_footerView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) id <HROnboardingPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long rightButtonType; // @synthesize rightButtonType=_rightButtonType;
@property(nonatomic) long long leftButtonType; // @synthesize leftButtonType=_leftButtonType;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic, getter=isOnboarding) BOOL onboarding; // @synthesize onboarding=_onboarding;
// - (void).cxx_destruct;
- (double)contentTop;
- (double)titleTopToFirstBaseline;
- (double)_titleTopToFirstBaselineLeading;
- (id)titleFont;
- (id)_titleFontTextStyle;
- (void)_adjustScrollViewForFooterView;
- (void)_setUpNavigationBar;
- (id)_skipButton;
- (id)_closeButton;
- (id)_cancelButton;
- (id)_onboardingAtrialFibrillationDetectionCancelButton;
- (id)_onboardingElectrocardiogramCancelButton;
- (id)_buttonForButtonType:(long long)arg1;
- (void)presentLearnMoreAlertWithMessage:(id)arg1 learnMoreTapped:(id /* CDUnknownBlockType */)arg2;
- (void)presentAlertWithMessage:(id)arg1;
- (void)skipButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)onboardingAtrialFibrillationDetectionCancelButtonTapped:(id)arg1;
- (void)onboardingElectrocardiogramCancelButtonTapped:(id)arg1;
- (void)removeFooterView;
- (void)setFooterView:(id)arg1 insets:(NSDirectionalEdgeInsets)arg2;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)updateUserInterfaceForStyle:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initForOnboarding:(BOOL)arg1;

@end

