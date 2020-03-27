//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AIDAAccountManager, AKAppleIDAuthenticationController, NSArray, NSError;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject
{
    AKAppleIDAuthenticationController *_authController;
    AIDAAccountManager *_accountManager;
    NSArray *_devices;
    NSError *_loadError;
    id <AADeviceListDelegate> _delegate;
}

@property(nonatomic) __weak id <AADeviceListDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
// - (void).cxx_destruct;
- (void)_renewCredentials;
- (void)_loadRequest:(id)arg1 responseHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_createRequestForAccount:(id)arg1 requestHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_setDeviceList:(id)arg1 loadError:(id)arg2;
- (void)_loadDeviceList;
- (id)_authController;
- (id)_aidaAccount;
- (id)_appleAccount;
- (id)_accountStore;
- (void)refreshDeviceList;
- (id)initWithAccountManager:(id)arg1;

@end

