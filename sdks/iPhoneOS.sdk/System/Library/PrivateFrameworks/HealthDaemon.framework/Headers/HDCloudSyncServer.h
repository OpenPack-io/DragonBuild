//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDCloudSyncServerInterface-Protocol.h>

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>
{
}

- (id)remote_fetchCloudSyncProgressWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remote_accountConfigurationDidChangeWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remote_enableCloudSyncWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remote_disableCloudSyncWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)remote_fetchCloudDescriptionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)remote_forceCloudResetWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)remote_forceCloudSyncWithOptions:(NSUInteger)arg1 reason:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;

@end

