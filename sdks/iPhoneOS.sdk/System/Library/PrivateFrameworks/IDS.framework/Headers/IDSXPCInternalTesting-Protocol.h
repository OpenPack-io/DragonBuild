//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IDSURI, NSData, NSString;

@protocol IDSXPCInternalTesting <NSObject>
- (void)fetchStoredUserDescriptions:(void (^)(NSString *))arg1;
- (void)removeConnectionWithConnectionName:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)nukeTransparencyStateWithCompletion:(void (^)(NSError *))arg1;
- (void)nukeCloudKitTransparencyStateWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchCloudKitTransparencyStateWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchVerifierAccountKeyPublicDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)fetchVerifierAccountKeyTrustedDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchVerifierCloudKitTrustedDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchVerifierTrustedDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)kickVerificationForServiceIdentifier:(NSString *)arg1 localURI:(IDSURI *)arg2 remoteURI:(IDSURI *)arg3 completion:(void (^)(NSError *))arg4;
- (void)performOutstandingKeyTransparencyVerificationWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchTransparentEndpointsForServiceIdentifier:(NSString *)arg1 localURI:(IDSURI *)arg2 remoteURI:(IDSURI *)arg3 verifyAgainstTrustCircle:(BOOL)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)fetchEndpointCacheStateForServiceIdentifier:(NSString *)arg1 localURI:(IDSURI *)arg2 remoteURI:(IDSURI *)arg3 completion:(void (^)(IDSQueryKeyTransparencyContext *, NSArray *, NSError *))arg4;
- (void)autoBugCaptureWithCompletion:(void (^)(NSError *))arg1;
- (void)tapToRadarWithTitle:(NSString *)arg1 message:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)checkServerStorageForService:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (void)setECVersion:(unsigned int)arg1 withCompletion:(void (^)(void))arg2;
- (void)currentECVersionWithBlock:(void (^)(unsigned int))arg1;
- (void)setForceKeyRoll:(BOOL)arg1 withCompletion:(void (^)(void))arg2;
- (void)triggerKeyRollWithCompletion:(void (^)(NSArray *))arg1;
- (void)registeredIdentityTimestampsWithBlock:(void (^)(NSArray *))arg1;
- (void)oneToOneECCQuicktestEncryptionWithData:(NSData *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
@end

