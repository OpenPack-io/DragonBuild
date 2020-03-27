//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateSettings/RemoteUIControllerDelegate-Protocol.h>

@class RUIStyle, RemoteUIController, SUDescriptor, UINavigationController, UIViewController;

@interface SUSSoftwareUpdateTermsManager : NSObject <RemoteUIControllerDelegate>
{
    RemoteUIController *_termsRemoteUI;
    id /* CDUnknownBlockType */ _termsCompletion;
    SUDescriptor *_update;
    BOOL _overrideNextRUIAction;
    BOOL _agreeToCombinedTOSInProgress;
    UINavigationController *_showProgressViewController;
    UIViewController *_hostController;
    UIViewController *_presentedViewController;
    RUIStyle *_serverFlowStyle;
}

@property(retain, nonatomic) RUIStyle *serverFlowStyle; // @synthesize serverFlowStyle=_serverFlowStyle;
// - (void).cxx_destruct;
- (void)_termsDisagree;
- (void)_acceptedTermsVersion:(id)arg1;
- (void)_acceptedTermsFromAsset;
- (void)_handleAgreeFromObjectModel:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(NSUInteger )arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)_loadTermsRemoteUIFailureWithError:(id)arg1;
- (void)_loadRemoteUITermsWithCloudAtURL:(id)arg1;
- (void)_loadTermsFromUpdateAsset;
- (void)cancelLoadingTerms:(id)arg1;
- (void)presentTermsIfNecessaryForUpdate:(id)arg1 overController:(id)arg2 showLoadSpinner:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)showLoadingSpinnerViewController;
- (void)_presentModalController:(id)arg1;
- (void)_finishTermsWithAcceptance:(BOOL)arg1 error:(id)arg2;

@end

