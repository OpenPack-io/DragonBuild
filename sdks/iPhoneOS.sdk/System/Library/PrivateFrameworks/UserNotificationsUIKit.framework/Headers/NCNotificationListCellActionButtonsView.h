//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTMaterialGrouping-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationListCellActionButton, NSString, UIStackView, _UIStatesFeedbackGenerator;

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>
{
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _highlightDefaultActionButton;
    BOOL _didPlayHaptic;
    NSString *_materialGroupNameBase;
    double _stretchedWidth;
    double _defaultWidth;
    long long _backgroundMaterialRecipe;
    UIView *_clippingView;
    UIStackView *_buttonsStackView;
    NCNotificationListCellActionButton *_defaultActionButton;
    _UIStatesFeedbackGenerator *_defaultActionFeedbackGenerator;
}

+ (id)_openButtonDescriptionForNotificationRequest:(id)arg1 cell:(id)arg2;
+ (id)_actionButtonDescriptionsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
@property(nonatomic) BOOL didPlayHaptic; // @synthesize didPlayHaptic=_didPlayHaptic;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator; // @synthesize defaultActionFeedbackGenerator=_defaultActionFeedbackGenerator;
@property(retain, nonatomic) NCNotificationListCellActionButton *defaultActionButton; // @synthesize defaultActionButton=_defaultActionButton;
@property(retain, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) long long backgroundMaterialRecipe; // @synthesize backgroundMaterialRecipe=_backgroundMaterialRecipe;
@property(readonly, nonatomic) double defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(nonatomic) double stretchedWidth; // @synthesize stretchedWidth=_stretchedWidth;
@property(nonatomic) BOOL highlightDefaultActionButton; // @synthesize highlightDefaultActionButton=_highlightDefaultActionButton;
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
// - (void).cxx_destruct;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
- (void)_actuateFeedbackForDefaultActionLockedIfNecessary;
- (void)_configureDefaultActionFeedbackIfNecessary;
- (void)_performNonDefaultActionButtonsHideRevealAnimation:(id /* CDUnknownBlockType */)arg1;
- (void)_revealNonDefaultActionButtons;
- (void)_hideNonDefaultActionButtons;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (void)_configureButtonsStackViewIfNecessary;
- (void)_configureClippingViewIfNecessary;
- (NSUInteger)_widthMultipleForVerticallyStackedButtonsWithCount:(NSUInteger)arg1;
- (BOOL)_shouldVerticallyStackButtons;
- (void)_configureDefaultWidth;
- (double)_maxAllowedButtonWidth;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) BOOL shouldPerformDefaultAction;
- (void)_configureActionButtonsForActionButtonDescriptions:(id)arg1 cell:(id)arg2;
- (void)configureOpenActionButtonForNotificationRequest:(id)arg1 cell:(id)arg2;
- (void)configureCellActionButtonsForNotificationRequest:(id)arg1 sectionSettings:(id)arg2 cell:(id)arg3;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end

