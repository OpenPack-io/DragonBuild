//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUI/RemoteUIControllerDelegate-Protocol.h>

@class GKDispatchGroup, GKLocalPlayer, NSDate, NSMutableArray, NSString, RemoteUIController, UINavigationController, UIViewController;

@interface GKLocalPlayerAuthenticator : NSObject <RemoteUIControllerDelegate>
{
    NSString *_username;
    NSString *_password;
    GKLocalPlayer *_resultantLocalPlayer;
    GKLocalPlayer *_inputLocalPlayer;
    BOOL _authenticated;
    BOOL _authenticating;
    BOOL _forceAuthentication;
    NSDate *_lastAuthDate;
    NSString *_lastAuthPlayerID;
    NSString *_alertTitle;
    NSString *_alertMessage;
    BOOL _userShouldSkipCreateAppleID;
    UIViewController *_presentingViewController;
    RemoteUIController *_remoteU13Controller;
    UINavigationController *_u13NavigationController;
    NSMutableArray *_u13ObjectModels;
    GKDispatchGroup *_u13Group;
}

+ (void)postURL:(id)arg1 postBody:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withPresentingViewController:(id)arg3;
+ (id)authenticatorForExistingPlayer:(id)arg1 withPresentingViewController:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2;
+ (id)authenticatorForExistingPlayer:(id)arg1;
@property(nonatomic) BOOL userShouldSkipCreateAppleID; // @synthesize userShouldSkipCreateAppleID=_userShouldSkipCreateAppleID;
@property(retain, nonatomic) GKDispatchGroup *u13Group; // @synthesize u13Group=_u13Group;
@property(retain, nonatomic) NSMutableArray *u13ObjectModels; // @synthesize u13ObjectModels=_u13ObjectModels;
@property(retain, nonatomic) UINavigationController *u13NavigationController; // @synthesize u13NavigationController=_u13NavigationController;
@property(retain, nonatomic) RemoteUIController *remoteU13Controller; // @synthesize remoteU13Controller=_remoteU13Controller;
@property UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain) NSString *lastAuthPlayerID; // @synthesize lastAuthPlayerID=_lastAuthPlayerID;
@property(retain) NSDate *lastAuthDate; // @synthesize lastAuthDate=_lastAuthDate;
@property BOOL forceAuthentication; // @synthesize forceAuthentication=_forceAuthentication;
@property(getter=isAuthenticating) BOOL authenticating; // @synthesize authenticating=_authenticating;
@property(getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property(retain) GKLocalPlayer *inputLocalPlayer; // @synthesize inputLocalPlayer=_inputLocalPlayer;
@property(retain) GKLocalPlayer *resultantLocalPlayer; // @synthesize resultantLocalPlayer=_resultantLocalPlayer;
// - (void).cxx_destruct;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(NSUInteger )arg3;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)handleAuthKitResultsForUnder13WithContinuationData:(id)arg1 altDSID:(id)arg2 password:(id)arg3;
- (void)authenticateFromExternalServiceWithAuthenticationResults:(id)arg1 withHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, copy) NSString *description;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticationDidComplete;
- (void)reset;
- (void)_authenticateUsingAuthUI:(BOOL)arg1 authenticationResults:(id)arg2 usernameEditable:(BOOL)arg3 authUIDismissHandler:(id /* CDUnknownBlockType */)arg4 completionHandler:(id /* CDUnknownBlockType */)arg5;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)arg1 usernameEditable:(BOOL)arg2 dismissHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)cancelAuthDueToAuthKitErrorWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)authenticateWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)authenticateExistingUserAuthUIWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)authenticateWithAuthKitResults:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)shouldAuthenticateForGameCenter;
- (void)authenticateUsingAuthUIWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(id /* CDUnknownBlockType */)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)init;

@end

