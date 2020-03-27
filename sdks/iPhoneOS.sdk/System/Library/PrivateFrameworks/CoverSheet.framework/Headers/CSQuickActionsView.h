//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <CoverSheet/PTSettingsKeyObserver-Protocol.h>

@class CSDashBoardQuickActionsButtonSettings, CSQuickActionsButton, _UILegibilitySettings;
@protocol CSQuickActionsDelegate;

@interface CSQuickActionsView : SBFTouchPassThroughView <PTSettingsKeyObserver>
{
    BOOL _flashlightOn;
    id <CSQuickActionsDelegate> _delegate;
    CSQuickActionsButton *_flashlightButton;
    CSQuickActionsButton *_cameraButton;
    _UILegibilitySettings *_legibilitySettings;
    CSDashBoardQuickActionsButtonSettings *_quickActionsSettings;
}

@property(retain, nonatomic) CSDashBoardQuickActionsButtonSettings *quickActionsSettings; // @synthesize quickActionsSettings=_quickActionsSettings;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) BOOL flashlightOn; // @synthesize flashlightOn=_flashlightOn;
@property(retain, nonatomic) CSQuickActionsButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(retain, nonatomic) CSQuickActionsButton *flashlightButton; // @synthesize flashlightButton=_flashlightButton;
@property(nonatomic) __weak id <CSQuickActionsDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)_prototypingAllowsButtons;
- (void)_setButtonBackgroundVisible:(BOOL)arg1;
- (void)_updateButtonBackgroundVisible;
- (UIEdgeInsets)_buttonOutsets;
- (double)_insetY;
- (double)_insetX;
- (void)handleButtonTouchEnded:(id)arg1;
- (void)handleButtonPress:(id)arg1;
- (void)handleButtonTouchBegan:(id)arg1;
- (void)_removeTargetsFromButton:(id)arg1;
- (void)_addTargetsToButton:(id)arg1;
- (void)_addOrRemoveFlashlightButtonIfNecessary;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (id)_buttonGroupName;
- (void)_layoutQuickActionButtons;
- (void)layoutSubviews;
- (void)refreshFlashlightAvailability;
- (void)refreshSupportedButtons;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;

@end

