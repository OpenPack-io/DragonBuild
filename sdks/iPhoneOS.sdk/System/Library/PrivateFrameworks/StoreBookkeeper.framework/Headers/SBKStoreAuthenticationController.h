//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject
{
    BOOL _shouldAuthenticate;
    SSAccount *_storeAccount;
}

+ (id)lastFailedSyncAccountName;
+ (id)lastFailedSyncAccountIdentifier;
+ (id)lastSyncedAccountName;
+ (id)lastSyncedAccountIdentifier;
+ (void)clearLastSyncnedAccount;
@property BOOL shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(readonly) SSAccount *storeAccount; // @synthesize storeAccount=_storeAccount;
// - (void).cxx_destruct;
- (void)saveAccountToLastFailedSyncDefaults;
- (void)saveAccountToLastSyncedDefaults;
- (id)authenticationErrorsForTransaction:(id)arg1;
- (BOOL)shouldForceAuthenticationForTransaction:(id)arg1;
- (BOOL)isAuthenticationValidForTransaction:(id)arg1 error:(id )arg2;
- (id)initWithStoreAccount:(id)arg1;

@end

