//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFUISiriRemoteSceneViewController, NSArray, NSDictionary, NSString, NSURL, SASRequestOptions;

@protocol AFUISiriRemoteSceneViewControllerDelegate <NSObject>
- (void)siriRemoteViewControllerDidFinishDismissing:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 requestsDismissal:(void (^)(BOOL))arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 requestsPresentation:(void (^)(BOOL))arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 requestKeyboardForTapToEditWithCompletion:(void (^)(BOOL))arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didRequestCurrentTextInputWithReplyHandler:(void (^)(NSString *))arg2;
- (void)siriRemoteViewControllerDidEndTapToEdit:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerWillBeginTapToEdit:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidResetTextInput:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didRequestKeyboard:(BOOL)arg2 minimized:(BOOL)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didRequestKeyboard:(BOOL)arg2;
- (void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidExitUITrackingMode:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidEnterUITrackingMode:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(NSArray *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didChangePresentationPeekMode:(NSUInteger)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(AFUISiriRemoteSceneViewController *)arg1;
- (BOOL)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 openURL:(NSURL *)arg2 appBundleID:(NSString *)arg3 allowSiriDismissal:(BOOL)arg4;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 openURL:(NSURL *)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(void (^)(BOOL))arg4;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didReadBulletinWithIdentifier:(NSString *)arg2;
- (void)siriRemoteViewControllerPulseHelpButton:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 failTest:(NSString *)arg2 withReason:(NSString *)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didFinishTest:(NSString *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 willStartTest:(NSString *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 handlePasscodeUnlockWithCompletion:(void (^)(long long))arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setBugReportingAvailable:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setHelpButtonEmphasized:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3 completion:(void (^)(BOOL))arg4;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusBarHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusViewDisabled:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setCarDisplaySnippetMode:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setTypeToSiriViewHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 launchApplicationWithBundleIdentifier:(NSString *)arg2 withURL:(NSURL *)arg3 launchOptions:(long long)arg4 replyHandler:(void (^)(BOOL))arg5;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 startRequestWithOptions:(SASRequestOptions *)arg2;
- (void)startGuidedAccessForRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1;
- (long long)siriRemoteViewControllerRequestsActivationSource:(AFUISiriRemoteSceneViewController *)arg1;
- (void)dismissSiriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 delayForTTS:(BOOL)arg2 userInfo:(NSDictionary *)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 invalidatedForReason:(NSUInteger)arg2 explanation:(NSString *)arg3;

@optional
- (void)extendCurrentTTSRequested;
- (void)siriRemoteViewController:(AFUISiriRemoteSceneViewController *)arg1 presentedIntentWithBundleId:(NSString *)arg2;
@end

