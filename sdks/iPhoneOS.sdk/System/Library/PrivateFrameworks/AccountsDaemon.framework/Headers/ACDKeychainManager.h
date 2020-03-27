//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDKeychainManager : NSObject
{
}

+ (id)keychainDeletedHostnameAccounts;
+ (id)keychainDeletedAccounts;
+ (id)keychainDeletedContactAccounts;
+ (id)keychainHostnameAccounts;
+ (id)keychainAccounts;
+ (void)makeItemInvisibleWithService:(id)arg1 andAccount:(id)arg2;
+ (void)setAccountSynciOSVersion:(id)arg1;
+ (id)accountSynciOSVersion;
+ (BOOL)accountSyncMigrated;
+ (BOOL)_dataclassSyncItemExistsForServiceName:(id)arg1 username:(id)arg2;
+ (BOOL)_accountSyncItemExistsForServiceName:(id)arg1 hostname:(id)arg2;
+ (BOOL)_accountSyncItemExistsForServiceName:(id)arg1 username:(id)arg2;
+ (BOOL)_setAccountSyncMigrateItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id )arg6;
+ (BOOL)_setDataclassSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id )arg6;
+ (BOOL)_setAccountSyncItem:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id )arg6;
+ (BOOL)_setAccountSyncItem:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 accessibility:(id)arg4 options:(id)arg5 error:(id )arg6;
+ (id)removeTombstonesForAccount:(id)arg1 clientID:(id)arg2 error:(id )arg3;
+ (void)removeDataclassAccountSyncItemForAccount:(id)arg1;
+ (BOOL)removeAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id )arg4;
+ (void)createDataclassAccountSyncItemForAccount:(id)arg1 withDataclassActions:(id)arg2;
+ (BOOL)createAccountSyncMigratedItemWithError:(id )arg1;
+ (BOOL)createAccountSyncItemForAccount:(id)arg1 clientID:(id)arg2 properties:(id)arg3 error:(id )arg4;
+ (void)_fallbackToUnsyncedOAuthTokens:(id)arg1;
+ (void)_createNoSyncOAuthTokens:(id)arg1 account:(id)arg2 clientID:(id)arg3;
+ (BOOL)_keychainLock_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id )arg5;
+ (BOOL)_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id )arg5;
+ (void)_keychainLock_addItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(BOOL)arg6 requiresTouchID:(BOOL)arg7 error:(id )arg8;
+ (void)_keychainLock_updateItem:(id)arg1 existingPassword:(id)arg2 forServiceName:(id)arg3 username:(id)arg4 accessGroup:(id)arg5 accessibility:(id)arg6 options:(id)arg7 error:(id )arg8;
+ (void)_setItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(BOOL)arg6 requiresTouchID:(BOOL)arg7 options:(id)arg8 error:(id )arg9;
+ (BOOL)_shouldSyncCredentialForAccount:(id)arg1;
+ (id)_itemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id )arg5;
+ (void)_migrateCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3;
+ (void)_accountTypeIdentifierFromComponents:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
+ (void)componentsFromKeychainServiceName:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
+ (id)keychainServiceNameForClientID:(id)arg1 accountTypeIdentifier:(id)arg2 additionalAccountTypeSegment:(id)arg3 key:(id)arg4;
+ (BOOL)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 username:(id)arg3 accountTypeID:(id)arg4 clientID:(id)arg5 options:(id)arg6 error:(id )arg7;
+ (void)removeCredentialForAccount:(id)arg1 key:(id)arg2 error:(id )arg3;
+ (void)_removeCredentialForAccountWithUsername:(id)arg1 accountQualifiedUsername:(id)arg2 accountIdentifier:(id)arg3 accountTypeIdentifier:(id)arg4 credentialType:(id)arg5 clientID:(id)arg6 options:(id)arg7 error:(id )arg8;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id )arg3;
+ (void)removeCredentialForAccount:(id)arg1 error:(id )arg2;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)removeCredentialForAccount:(id)arg1;
+ (void)_setNonPersistentCredentialTimerForAccount:(id)arg1;
+ (void)_saveCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 error:(id )arg4;
+ (void)_setCredentialForAccount:(id)arg1 clientID:(id)arg2 handleCredentialItemRemovals:(BOOL)arg3 error:(id )arg4;
+ (void)setCredentialForNewAccount:(id)arg1 clientID:(id)arg2 error:(id )arg3;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id )arg3;
+ (void)setCredentialForAccount:(id)arg1 error:(id )arg2;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)setCredentialForAccount:(id)arg1;
+ (id)_credentialForAccountWithID:(id)arg1 accountTypeID:(id)arg2 credentialType:(id)arg3 clientID:(id)arg4 allowAdditionalAccountTypeSegment:(BOOL)arg5 options:(id)arg6 error:(id )arg7;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2 error:(id )arg3;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2;
+ (id)credentialForManagedAccountObject:(id)arg1;
+ (id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2;
+ (id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2 error:(id )arg3;
+ (id)_fetchOptionsForAccount:(id)arg1;
+ (void)setServer:(id)arg1;
+ (id)server;
+ (void)initialize;

@end

