//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMFVersion, NSData, NSString;

@protocol HMDNetworkRouterFirewallRuleManagerDebug <NSObject>
- (void)forceFetchCloudChangesAndForceChangeNotifications:(BOOL)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)removeOverridesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeAllOverridesWithCompletion:(void (^)(NSError *))arg1;
- (void)addOverrides:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setOverrides:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeAllLocalRulesWithCompletion:(void (^)(NSError *))arg1;
- (void)dumpLocalRulesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 firmwareVersion:(HMFVersion *)arg3 ignoreOverrides:(BOOL)arg4 rawOutput:(BOOL)arg5 completion:(void (^)(NSError *, NSString *))arg6;
- (void)dumpLocalRulesForProductGroup:(NSString *)arg1 ignoreOverrides:(BOOL)arg2 rawOutput:(BOOL)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (void)dumpAllLocalRulesIgnoringOverrides:(BOOL)arg1 rawOutput:(BOOL)arg2 completion:(void (^)(NSError *, NSString *))arg3;
- (void)dumpCloudRecordsForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 rawOutput:(BOOL)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (void)listCloudRecordsForProductGroup:(NSString *)arg1 rawOutput:(BOOL)arg2 completion:(void (^)(NSError *, NSString *))arg3;
@end

