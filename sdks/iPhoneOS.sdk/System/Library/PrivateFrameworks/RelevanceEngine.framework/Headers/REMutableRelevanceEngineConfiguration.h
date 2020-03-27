//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineConfiguration.h>

@class NSObject, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager, RERelevanceProviderManagerLoader;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration
{
}

+ (id)defaultConfiguration;
+ (id)sampleUpNextConfiguration;
+ (id)defaultUpNextConfiguration;
// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) BOOL ignoresInstalledApplications; // @dynamic ignoresInstalledApplications;
@property(retain, nonatomic) id <RERelevanceEngineMetricsRecorder> metricsRecorder; // @dynamic metricsRecorder;
@property(nonatomic) BOOL allowsDiagnosticExtension; // @dynamic allowsDiagnosticExtension;
@property(nonatomic) BOOL ignoreDeviceLockState; // @dynamic ignoreDeviceLockState;
@property(nonatomic) BOOL wantsBackup; // @dynamic wantsBackup;
@property(nonatomic) BOOL allowsRemoteTraining; // @dynamic allowsRemoteTraining;
@property(copy, nonatomic) NSString *preferenceDomain; // @dynamic preferenceDomain;
@property(nonatomic) BOOL wantsImmutableContent; // @dynamic wantsImmutableContent;
@property(copy, nonatomic) REFeatureSet *primaryFeatures; // @dynamic primaryFeatures;
- (void)removeAllInteractions;
- (void)removeInteractionAtIndex:(NSUInteger)arg1;
- (long long)_indexOfInteractionWithName:(id)arg1;
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addInteractionWithDescriptor:(id)arg1;
- (void)removeAllSections;
- (void)removeSectionAtIndex:(NSUInteger)arg1;
- (void)removeSectionWithName:(id)arg1;
- (long long)_indexOfSectionWithName:(id)arg1;
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addSectionWithDescriptor:(id)arg1;
@property(retain, nonatomic) RELocationManager *locationManager; // @dynamic locationManager;
@property(nonatomic) NSUInteger modelStorageBehavior; // @dynamic modelStorageBehavior;
@property(nonatomic) NSUInteger trainingBehavior; // @dynamic trainingBehavior;
@property(copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader; // @dynamic relevanceProviderManagerLoader;
@property(copy, nonatomic) REDataSourceLoader *dataSourceLoader; // @dynamic dataSourceLoader;
@property(nonatomic) BOOL allowsUpdatingModelFile; // @dynamic allowsUpdatingModelFile;
@property(nonatomic) NSUInteger modelVersion; // @dynamic modelVersion;
@property(copy, nonatomic) NSURL *baseModelFileURL; // @dynamic baseModelFileURL;
@property(copy, nonatomic) NSURL *modelFileURL; // @dynamic modelFileURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @dynamic observerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue; // @dynamic engineQueue;

@end

