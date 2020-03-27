//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCURLListenerListController.h>

#import <ManagedConfigurationUI/MCInteractionDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCQuestionsControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCUIInfoListDelegate-Protocol.h>

@class MCDetailsDescriptionTableCell, MCDetailsHeaderCell, MCProfile, MCQuestionsController, NSArray, NSData, NSString, UIAlertView, UITableViewCell, UITextField;

__attribute__((visibility("hidden")))
@interface MCConfigurationDetailsController : MCURLListenerListController <MCQuestionsControllerDelegate, MCInteractionDelegate, MCUIInfoListDelegate>
{
    NSString *_profileId;
    MCDetailsHeaderCell *_configHeader;
    MCDetailsDescriptionTableCell *_configMiddle;
    UITableViewCell *_configBottom;
    int _installMode;
    BOOL _processingPayload;
    BOOL _installHasFailed;
    BOOL _userCancelledInstall;
    BOOL _waitingForMoreInput;
    BOOL _isInteractionDelegate;
    BOOL _secondaryProfileReceived;
    BOOL _profileWantsToReEnroll;
    BOOL _actionButtonHidden;
    UIAlertView *_activeAlert;
    MCQuestionsController *_questionsController;
    id /* CDUnknownBlockType */ _didAppearBlock;
    BOOL _initialQuestionsHaveBeenAsked;
    NSString *_pin;
    CDStruct_8422b130 _configurationFlags;
    BOOL _delayUserInput;
    MCProfile *_cachedProfile;
    NSData *_cachedProfileData;
    UITextField *_passwordField;
    NSArray *_viewControllersAfterTransition;
    id _profileListChangedObserver;
}

+ (void)_showRebootAlert;
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (id)_dateFormatter;
+ (BOOL)isNearExpirationForUserInfo:(id)arg1;
+ (id)organizationForUserInfo:(id)arg1;
+ (id)displayNameForUserInfo:(id)arg1;
+ (void)updateUserInfo:(id)arg1 withProfile:(id)arg2;
@property(retain, nonatomic) id profileListChangedObserver; // @synthesize profileListChangedObserver=_profileListChangedObserver;
@property(retain, nonatomic) NSArray *viewControllersAfterTransition; // @synthesize viewControllersAfterTransition=_viewControllersAfterTransition;
@property(retain, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) NSData *cachedProfileData; // @synthesize cachedProfileData=_cachedProfileData;
@property(retain, nonatomic) MCProfile *cachedProfile; // @synthesize cachedProfile=_cachedProfile;
@property(nonatomic) BOOL delayUserInput; // @synthesize delayUserInput=_delayUserInput;
@property(copy, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
// - (void).cxx_destruct;
- (void)_profileListChanged:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_showAlertForInstallError:(id)arg1;
- (void)_showReEnrollFailureAlert;
- (void)_showWrongRemovalPasswordAlert;
- (void)_showRemovalWarningAlert;
- (void)_showProfileWarningFromWarning:(id)arg1;
- (void)_showInstallationWarningAlert;
- (BOOL)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2;
- (void)_cancelActiveAlert:(BOOL)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)_showPINSheet;
- (void)_changeActionButtonToRemove;
- (void)_showActionButton;
- (void)_hideActionButton;
- (void)_showNavButtonsForStatus:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_takeMeBack;
- (void)verifyPINBeforeRemoval;
- (void)removePayload;
- (void)performRemoveAfterPINVerification;
- (void)_profileRemovalDidFinish;
- (BOOL)installedThisLaunch;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;
- (void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (BOOL)questionsControllerIsDisplayedInSheet:(id)arg1;
- (void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2;
- (void)_waitForMoreUserInput;
- (void)_finishWaitingForMoreUserInput;
- (void)_promptUserWithUserInput:(id)arg1;
- (void)infoListController:(id)arg1 finishedWithUserResponse:(BOOL)arg2;
- (void)_pushInstallationWarningControllerWithInfo:(id)arg1;
- (id)_infoListFromWarnings:(id)arg1;
- (void)_installFinishedWithError:(id)arg1 profileId:(id)arg2;
- (id)_redirectURLFromInstallError:(id)arg1;
- (BOOL)_installErrorIsUserCancelledError:(id)arg1;
- (void)_clearCachedTableCells;
- (void)_cancelUserInput;
- (void)_submitResponses:(id)arg1;
- (void)_performReEnroll;
- (void)_performReEnrollAfterPINVerification;
- (void)_cancelInstall;
- (void)_continueInstall;
- (void)_performInstall;
- (void)_performInstallAfterPINVerification;
- (void)installPayload;
- (id)_nextTitleAfterAction;
- (void)reEnroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)_titleForCurrentState;
- (void)_updateTitle:(id)arg1;
- (BOOL)profileIsExpiringSoon;
- (id)_currentProfileData;
- (id)_currentProfile;
- (void)_setCachedProfileData:(id)arg1;
- (void)_setCachedProfile:(id)arg1;
- (void)_hideProgressIndicatorWithSuccess:(BOOL)arg1 showButtons:(BOOL)arg2;
- (void)_showProgressIndicator;
- (void)_setDidAppearBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_slideRightToSelf;
- (BOOL)_displayedAsSheet;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

