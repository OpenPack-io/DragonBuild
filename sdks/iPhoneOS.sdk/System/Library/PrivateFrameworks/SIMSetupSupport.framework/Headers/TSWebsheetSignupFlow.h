//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSEntitlementJSHandlerDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSDictionary, NSString, UIViewController;
@protocol TSSetupFlowItem;

@interface TSWebsheetSignupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate, UINavigationControllerDelegate>
{
    NSString *_websheetURL;
    NSDictionary *_postdata;
    NSUInteger _requestType;
    UIViewController<TSSetupFlowItem> *_currentViewController;
}

// - (void).cxx_destruct;
- (void)_showFailureAlert:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_createURLRequest:(id /* CDUnknownBlockType */)arg1;
- (void)accountPendingRelease;
- (void)accountCancelled;
- (void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(id /* CDUnknownBlockType */)arg1;
- (id)firstViewController;
- (id)initWithRequestType:(NSUInteger)arg1 websheetURL:(id)arg2 postdata:(id)arg3;

@end

