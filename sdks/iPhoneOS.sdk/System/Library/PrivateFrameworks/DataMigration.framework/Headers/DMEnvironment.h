//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMEnvironment : NSObject
{
    BOOL _testMigrationInfrastructureOnly;
}

+ (id)sharedInstance;
+ (BOOL)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2;
@property(nonatomic) BOOL testMigrationInfrastructureOnly; // @synthesize testMigrationInfrastructureOnly=_testMigrationInfrastructureOnly;
- (void)blockUntilPreferencesFlush;
- (BOOL)isDeviceUsingEphemeralStorage;
- (void)setMigrationPluginResultsPref:(id)arg1;
- (id)migrationPluginResultsPref;
- (BOOL)implementMigrationPluginResults;
- (BOOL)suppressMigrationPluginWrapperExitMarkerPref;
- (BOOL)waitForExecutePluginsSignalMarkerPref;
- (id)continuousIntegrationMarkerPref;
- (void)setUserDataDispositionPref:(id)arg1;
- (id)userDataDispositionPref;
- (void)setLastMigrationResultsPref:(id)arg1;
- (id)lastMigrationResultsPref;
- (void)setLastBuildVersionPref:(id)arg1;
- (id)lastBuildVersionPref;
- (void)clearContext;
- (void)setContext:(id)arg1;
- (id)context;
- (id)contextPath;
- (id)buildVersion;

@end

