//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMKeychainManager : NSObject
{
}

+ (id)sharedInstance;
- (id)_accessibilityForDataProtectionClass:(long long)arg1 migratable:(BOOL)arg2;
- (id)_query:(id)arg1 error:(id )arg2;
- (int)_delete:(id)arg1;
- (int)_updateWithQuery:(id)arg1 attributes:(id)arg2;
- (int)_add:(id)arg1;
- (id)allRecords;
- (id)allAccountsForService:(id)arg1;
- (id)allServices;
- (id)itemForAccount:(id)arg1 service:(id)arg2 error:(id )arg3;
- (id)passwordForAccount:(id)arg1 service:(id)arg2;
- (BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6;
- (BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3;
- (id)dataForAccount:(id)arg1 service:(id)arg2;
- (BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3;
- (BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6;
- (BOOL)deleteDataForAccount:(id)arg1 service:(id)arg2;

@end

