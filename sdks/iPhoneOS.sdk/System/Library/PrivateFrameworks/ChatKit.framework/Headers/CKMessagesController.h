//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

#import <ChatKit/CKAlertSuppressionContextsProviding-Protocol.h>
#import <ChatKit/CKAlertUtilitiesProtocol-Protocol.h>
#import <ChatKit/CKBrowserViewControllerStoreSendDelegate-Protocol.h>
#import <ChatKit/CKChatControllerDelegate-Protocol.h>
#import <ChatKit/CKComposeChatControllerDelegate-Protocol.h>
#import <ChatKit/CKCoreChatControllerDelegate-Protocol.h>
#import <ChatKit/CKOnboardingControllerDelegate-Protocol.h>

@class CKAlertUtilities, CKConversation, CKConversationListController, CKCoreChatController, CKInboxViewController, CKNavigationController, CKOnboardingController, CKViewController, NSMutableArray, NSSet, UIViewController;
@protocol CKBrowserViewControllerProtocol, CKMessagesControllerDelegate;

@interface CKMessagesController : UISplitViewController <UISplitViewControllerDelegate, UIActionSheetDelegate, CKCoreChatControllerDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, CKChatControllerDelegate, CKComposeChatControllerDelegate, CKBrowserViewControllerStoreSendDelegate, CKOnboardingControllerDelegate, CKAlertUtilitiesProtocol, CKAlertSuppressionContextsProviding>
{
    CKConversation *_currentConversation;
    NSMutableArray *_conversationCache;
    id /* CDUnknownBlockType */ _alertViewHandler;
    unsigned int _attachmentPreviewQosClass;
    BOOL _isInitialLoad;
    id <CKMessagesControllerDelegate> _messagesControllerDelegate;
    CKCoreChatController *_chatController;
    CKCoreChatController *_composeChatController;
    CKNavigationController *_composeChatNavigationController;
    id /* CDUnknownBlockType */ _deferredHandleURLBlock;
    CKConversationListController *_conversationListController;
    CKOnboardingController *_onboardingController;
    CKNavigationController *_conversationListNavigationController;
    CKNavigationController *_chatNavigationController;
    CKViewController *_blankViewController;
    UIViewController *_statusBarStyleViewController;
    UIViewController<CKBrowserViewControllerProtocol> *_prewarmedCameraBrowser;
    CKAlertUtilities *_alertUtilities;
    CKInboxViewController *_inboxViewController;
}

@property(retain, nonatomic) CKInboxViewController *inboxViewController; // @synthesize inboxViewController=_inboxViewController;
@property(retain, nonatomic) CKAlertUtilities *alertUtilities; // @synthesize alertUtilities=_alertUtilities;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *prewarmedCameraBrowser; // @synthesize prewarmedCameraBrowser=_prewarmedCameraBrowser;
@property(retain, nonatomic) UIViewController *statusBarStyleViewController; // @synthesize statusBarStyleViewController=_statusBarStyleViewController;
@property(nonatomic) BOOL isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(copy, nonatomic) id /* CDUnknownBlockType */ alertViewHandler; // @synthesize alertViewHandler=_alertViewHandler;
@property(retain, nonatomic) CKViewController *blankViewController; // @synthesize blankViewController=_blankViewController;
@property(retain, nonatomic) CKNavigationController *chatNavigationController; // @synthesize chatNavigationController=_chatNavigationController;
@property(retain, nonatomic) CKNavigationController *conversationListNavigationController; // @synthesize conversationListNavigationController=_conversationListNavigationController;
@property(retain, nonatomic) CKOnboardingController *onboardingController; // @synthesize onboardingController=_onboardingController;
@property(retain, nonatomic) CKConversationListController *conversationListController; // @synthesize conversationListController=_conversationListController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deferredHandleURLBlock; // @synthesize deferredHandleURLBlock=_deferredHandleURLBlock;
@property(retain, nonatomic) CKConversation *currentConversation; // @synthesize currentConversation=_currentConversation;
@property(retain, nonatomic) CKNavigationController *composeChatNavigationController; // @synthesize composeChatNavigationController=_composeChatNavigationController;
@property(retain, nonatomic) CKCoreChatController *composeChatController; // @synthesize composeChatController=_composeChatController;
@property(retain, nonatomic) CKCoreChatController *chatController; // @synthesize chatController=_chatController;
@property(nonatomic) __weak id <CKMessagesControllerDelegate> messagesControllerDelegate; // @synthesize messagesControllerDelegate=_messagesControllerDelegate;
// - (void).cxx_destruct;
- (void)teardownCamera;
- (void)prewarmCameraIfNecessary;
- (id)_newCameraBrowser;
- (void)didFinishCheckingMissingCarrierSetting;
- (void)presentCKAlertController:(id)arg1;
- (void)onboardingControllerDidFinish:(id)arg1;
- (id)presentingViewControllerForOnboardingController:(id)arg1;
- (void)presentOnboardingViewControllerIfNeeded;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)commitSticker:(id)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)requestPresentationStyleExpanded:(BOOL)arg1;
- (void)dismissAndReloadInputViews:(BOOL)arg1;
- (void)dismissToKeyboard:(BOOL)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setLocalUserIsTyping:(BOOL)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)commitPayload:(id)arg1;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)arg1;
- (void)_setEntryViewHidden:(BOOL)arg1;
- (void)dismiss;
- (void)_presentAppStoreWithLaunchURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)showSurfAppForCurrentConversationWithAmount:(double)arg1 currency:(id)arg2;
- (void)showStoreForURL:(id)arg1 fromSourceApplication:(id)arg2;
- (void)notifyThatKeepMessagesSettingWasResetIfNeeded;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (BOOL)isShowingChatControllerWithUnsentText;
- (BOOL)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2;
- (BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1;
- (BOOL)isShowingChatController;
- (BOOL)isShowingInboxViewController;
@property(readonly, nonatomic) BOOL isShowingConversationListController;
- (BOOL)isShowingDirtyComposeModalView;
- (BOOL)currentCompositionHasContent;
- (BOOL)isAnimatingMessageSend;
- (BOOL)isComposingMessage;
- (BOOL)isShowingBlankChatController;
- (void)conversationListIsDeletingConversations:(id)arg1;
- (void)conversationListWillBeginEditing:(BOOL)arg1;
- (void)_hideConversationListForIPadPPTTest;
- (void)showConversationList:(BOOL)arg1;
- (BOOL)resumeToConversation:(id)arg1;
- (void)showConversationAndMessageForSearchURL:(id)arg1;
- (void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(BOOL)arg3;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2 keepAllCurrentlyLoadedMessages:(BOOL)arg3;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2;
- (BOOL)isDownTimeActiveForCurrentChat;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 keepAllCurrentlyLoadedMessages:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 keepAllCurrentlyLoadedMessages:(BOOL)arg4;
- (void)cancelNewMessageComposition;
- (BOOL)hasBusinessRecipientWithRecipientIDs:(id)arg1;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 bizIntent:(id)arg4 launchPluginWithBundleID:(id)arg5 pluginLaunchPayload:(id)arg6;
- (void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3;
- (id)_sharedBalloonPluginManager;
- (void)executeDeferredHandleURLBlock;
- (void)executeDeferredTasks;
- (void)_conversationFilteringStateChangedNotification:(id)arg1;
- (void)_appStateChange:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatRegistryDidLoad:(id)arg1;
- (void)_conversationLeft:(id)arg1;
- (void)cleanUpBizNavBarForConversation:(id)arg1;
- (void)setupBizNavBarForConversation:(id)arg1;
- (void)_setIsShowingNoSelectionUI:(BOOL)arg1;
- (void)_popToConversationListAndPerformBlockAnimated:(BOOL)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)_updateAlertSuppressionContext;
- (void)__updateAlertSuppressionContext;
@property(readonly, nonatomic) NSSet *alertSuppressionContexts;
- (BOOL)_isShowingFullScreenAppViewController;
- (BOOL)_isShowingModalChatController;
- (BOOL)_isShowingFullscreenController;
- (void)_keyCommandChangeConversation:(BOOL)arg1;
- (void)keyCommandPreviousConversation:(id)arg1;
- (void)keyCommandNextConversation:(id)arg1;
- (void)keyCommandDeleteConversation:(id)arg1;
- (void)keyCommandCompose:(id)arg1;
- (void)updateConversationListNavigationControllerViewStack;
- (void)showInboxViewController:(BOOL)arg1;
- (void)setCurrentConversation:(id)arg1 keepAllCurrentlyLoadedMessages:(BOOL)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)_splitViewControllerShouldRestoreResponderAfterTraitCollectionTransition:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (BOOL)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (BOOL)_hasCurrentConversations;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)composeChatControllerShouldShowBackButtonViewDuringSendAnimation:(id)arg1;
- (void)composeChatController:(id)arg1 didSelectNewConversation:(id)arg2;
- (void)cancelAndDestroyCompositionWithoutDismiss;
- (void)composeChatControllerDidCancelComposition:(id)arg1;
- (BOOL)composeChatControllerCanEditRecipients;
- (id)navigationBarBackdropLayerGroupNameForChatController:(id)arg1;
- (void)prewarmCameraIfNecessaryForChatController:(id)arg1;
- (void)chatController:(id)arg1 forwardComposition:(id)arg2;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (BOOL)isCollapsed;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)performSearchForQuery:(id)arg1;
- (void)dismissKeyboadIfUp;
- (void)performResumeDeferredSetup;
- (id)conversationList;
- (BOOL)becomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)init;
- (void)dealloc;

@end

