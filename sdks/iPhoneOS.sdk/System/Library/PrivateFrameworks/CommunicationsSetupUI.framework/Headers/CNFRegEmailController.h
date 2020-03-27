//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class NSArray, NSString, NSTimer, PSSpecifier;

@interface CNFRegEmailController : CNFRegFirstRunController
{
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    NSString *_pendingAlias;
    BOOL _validating;
}

@property(copy, nonatomic) NSString *pendingAlias; // @synthesize pendingAlias=_pendingAlias;
// - (void).cxx_destruct;
- (void)_setupEventHandlers;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)validationTimeout:(id)arg1;
- (void)startValidationTimeoutTimer;
- (void)stopValidationTimeoutTimer;
- (double)timeoutDuration;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;
- (id)pendingAliasForSpecifier:(id)arg1;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)emailFieldIsEmpty;
- (id)emailTextField;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateControllerState;
- (void)_updateUI;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)_handleValidationModeCancelled;
- (void)checkMailTapped:(id)arg1;
- (void)_returnKeyPressed;
- (void)nextTapped;
- (void)_failValidationWithError:(id)arg1;
- (void)_stopValidationModeAnimated:(BOOL)arg1;
- (void)_finishValidation;
- (BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (id)selectedAliases;
- (void)setAliasSelected:(id)arg1;
- (id)_createSpecifierForAlias:(id)arg1;
- (id)aliasSpecifiers;
- (BOOL)_phoneNumberInAliases:(id)arg1;
- (BOOL)shouldShowAllVettedAliases;
- (id)titleString;
- (void)_showCheckMailButton:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)showActionSpecifier:(id)arg1 animated:(BOOL)arg2;
- (id)_rightButtonItem;
- (id)logName;
- (id)specifierList;
- (id)bundle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

