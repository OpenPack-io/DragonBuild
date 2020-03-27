//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSAnalytics/OSAProxyConfiguration.h>

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface OSASystemConfiguration : OSAProxyConfiguration
{
    BOOL _appleInternal;
    BOOL _carrierInstall;
    BOOL _multiUserMode;
    NSMutableDictionary *_submissionMetadata;
    NSString *_pairedWatchOS;
    NSDictionary *_logConfig;
    NSSet *_logBlacklist;
    NSDictionary *_submissionParams;
    NSDictionary *_whitelistedDomains;
    NSString *_pathRoot;
    NSString *_pathContainerRoot;
    NSString *_pathSubmission;
    NSString *_pathPreferences;
    NSString *_pathDiagnostics;
    NSString *_pathCATasking;
    NSString *_pathAWDTasking;
}

+ (void)ensureConformanceOfFile:(int)arg1;
+ (id)ensureUsablePath:(id)arg1 component:(id)arg2 options:(id)arg3;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)logPathForType:(id)arg1 at:(double)arg2 options:(id)arg3;
- (id)logExt:(id)arg1;
- (id)logPrefix:(id)arg1;
- (id)createReportMetadata:(id)arg1 with:(id)arg2 at:(double)arg3 usingOptions:(id)arg4;
- (BOOL)isWhitelisted:(id)arg1 forDomain:(id)arg2;
- (id)submissionParam:(id)arg1;
@property(readonly) NSString *pathAWDTasking;
@property(readonly) NSString *pathCATasking;
@property(readonly) NSString *pathDiagnostics;
@property(readonly) NSString *pathPreferences;
- (id)logPath;
- (id)pathSubmissionForOwner:(id)arg1;
@property(readonly) NSString *pathSubmission;
@property(readonly) NSString *pathContainerRoot;
@property(copy) NSString *pathRoot;
- (BOOL)isConfigEnabled:(id)arg1;
- (BOOL)usesLegacySubmission:(id)arg1;
- (id)getPropsForLogType:(id)arg1;
- (id)getLogBlacklist;
- (void)onceConfig;
- (void)saveToPath:(id)arg1;
- (void)plumbEmail:(id)arg1;
- (id)internalKey;
- (id)currentTaskingIDByRouting;
- (id)seedGroup;
- (id)releaseType;
- (id)automatedContextURL;
- (id)automatedDeviceGroup;
- (id)experimentGroup;
- (id)getTaskingKey:(id)arg1;
- (id)getPrefsKey:(id)arg1 forDomain:(id)arg2 withOptions:(id)arg3;
- (BOOL)setPrefsKey:(id)arg1 value:(id)arg2 forDomain:(id)arg3 withSync:(BOOL)arg4;
- (id)awdReporterKey;
- (id)crashReporterKey;
- (id)serialNumber;
- (id)systemId;
- (id)uiCountryCode;
- (id)targetAudience;
- (id)osTrain;
- (id)productReleaseString;
- (id)productNameVersionBuildString;
- (id)productName;
- (id)productBuildString;
- (id)buildVersion;
- (id)productVersion;
- (void)sysVersionData;
- (id)modelCode;
- (id)pairedWatchOS;
@property(readonly) BOOL multiUserMode;
@property(readonly) BOOL carrierInstall;
@property(readonly) BOOL appleInternal;
- (id)identifier;
@property(readonly) NSMutableDictionary *submissionMetadata;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (BOOL)isProxy;

@end

