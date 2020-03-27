//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HDSimpleGraphDatabase, HKObserverSet, NSArray, NSCache, NSDictionary, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface HDHealthOntologyManager : NSObject
{
    NSDictionary *_codingSystemPriorityInfo;
    NSArray *_privateCodeCreationCodingSortDescriptors;
    NSUUID *_assetAvailabilityRegistrationToken;
//     struct os_unfair_lock_s _ivarLock;
    _Atomic BOOL _invalidated;
    NSCache *_nebulousConceptCache;
    HKObserverSet *_observers;
    BOOL _useCache;
    NSCache *_conceptsByIdentifierCache;
    _Atomic BOOL _enabled;
    BOOL _unitTest_useEmbeddedOntology;
    BOOL _unitTest_useEmbeddedOntologyAsset;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_ontologyURL;
    HDSimpleGraphDatabase *_graphDatabase;
}

+ (void)obliterateWithProfile:(id)arg1 reason:(id)arg2;
+ (id)_ontologyURLForProfile:(id)arg1;
+ (id)supportedLocales;
+ (id)_primaryCodingKeyPathForSampleTypeIdentifier:(id)arg1;
+ (id)_unknownConceptName;
+ (id)_bestDisplayableCodingInCodings:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)_bestDisplayNameForCodings:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (BOOL)graphDatabase:(id)arg1 setVersion:(id)arg2 error:(id )arg3;
@property(readonly, nonatomic) BOOL unitTest_useEmbeddedOntologyAsset; // @synthesize unitTest_useEmbeddedOntologyAsset=_unitTest_useEmbeddedOntologyAsset;
@property(readonly, nonatomic) BOOL unitTest_useEmbeddedOntology; // @synthesize unitTest_useEmbeddedOntology=_unitTest_useEmbeddedOntology;
@property(retain, nonatomic) HDSimpleGraphDatabase *graphDatabase; // @synthesize graphDatabase=_graphDatabase;
@property(readonly, copy, nonatomic) NSURL *ontologyURL; // @synthesize ontologyURL=_ontologyURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)hd_unitTesting_clearCache;
- (void)hd_unitTesting_disableCache;
- (void)hd_unitTesting_setupDatabase;
- (void)hd_unitTesting_closeDatabase;
- (void)_handleOntologyAssetAvailabilityUpdate:(long long)arg1;
- (void)obliterateWithReason:(id)arg1;
- (void)importUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)importWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_createOntologyDirectoryIfNecessaryWithError:(id )arg1;
- (BOOL)_work_node:(id)arg1 addAttributeWithCoding:(id)arg2 error:(id )arg3;
- (BOOL)performGraphDatabaseWork:(id /* CDUnknownBlockType */)arg1 usingTransaction:(BOOL)arg2 error:(id )arg3;
- (BOOL)supportsLocale:(id)arg1;
- (void)_notifyObserversReferenceOntologyCreated;
- (void)_notifyObserversReferenceOntologyDidUpdateWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_notifyObserversReferenceOntologyWillUpdate;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)nameForCodingSystem:(long long)arg1 value:(id)arg2 error:(id )arg3;
- (id)allAssociatedConceptsWithError:(id )arg1;
- (id)conceptsAssociatedWithSampleUUID:(id)arg1 error:(id )arg2;
- (id)conceptsAssociatedWithSample:(id)arg1 error:(id )arg2;
- (id)sampleUUIDsAssociatedWithConcept:(id)arg1 error:(id )arg2;
- (BOOL)removeAllAssociationsToSampleUUID:(id)arg1 error:(id )arg2;
- (BOOL)breakAssociationFromSampleUUID:(id)arg1 toConcept:(id)arg2 error:(id )arg3;
- (BOOL)makeAssociationFromSampleUUID:(id)arg1 toConceptIdentifier:(id)arg2 error:(id )arg3;
- (BOOL)insertAssociations:(id)arg1 error:(id )arg2;
- (BOOL)makeAssociationFromSampleUUID:(id)arg1 toConcept:(id)arg2 error:(id )arg3;
- (long long)countOfConceptsAssociatedWithUserRecords:(id )arg1;
- (id)relationshipsForConceptWithIdentifier:(id)arg1 error:(id )arg2;
- (id)conceptsWithRelationship:(id)arg1 fromNodeWithID:(id)arg2 error:(id )arg3;
- (id)conceptsWithRelationship:(id)arg1 toNodeWithID:(id)arg2 error:(id )arg3;
- (id)_conceptsWithRelationship:(id)arg1 toNodeWithID:(id)arg2 reversed:(BOOL)arg3 error:(id )arg4;
- (id)conceptsContainingAttribute:(long long)arg1 withValue:(id)arg2 error:(id )arg3;
- (id)_queue_conceptsWithGraphDatabaseCall:(id /* CDUnknownBlockType */)arg1 error:(id )arg2;
- (id)_conceptsWithGraphDatabaseCall:(id /* CDUnknownBlockType */)arg1 error:(id )arg2;
- (id)conceptForName:(id)arg1 error:(id )arg2;
- (id)conceptsForIdentifiers:(id)arg1 expectedOntologyVersion:(id)arg2 error:(id )arg3;
- (id)conceptForIdentifier:(id)arg1 error:(id )arg2;
- (id)_conceptWithGraphDatabaseCall:(id /* CDUnknownBlockType */)arg1 error:(id )arg2;
- (id)_work_conceptFromGraphNode:(id)arg1 preloadRelationships:(BOOL)arg2;
- (id)_codingSystemPriorityArrayForSampleType:(id)arg1 property:(id)arg2;
- (id)_adHocConceptCodingFromCodings:(id)arg1;
- (id)_privateCodeCreationCodingSortDescriptors;
- (id)_primaryCodingFromCodings:(id)arg1 usingPrioritizedCodingSystems:(id)arg2;
- (BOOL)_isNebulousCoding:(id)arg1;
- (id)_work_graphDatabase:(id)arg1 synthesizeConceptWithPrimaryCoding:(id)arg2 displayName:(id)arg3;
- (id)_work_graphDatabase:(id)arg1 findConceptForCoding:(id)arg2;
- (id)conceptForContext:(id)arg1 locale:(id)arg2;
- (void)_queue_createAndInitializeIfNeeded;
- (id)userVersionWithError:(id )arg1;
- (id)_queue_graphDatabaseUserVersionWithError:(id )arg1;
- (id)versionWithError:(id )arg1;
- (long long)_queue_graphDatabaseVersion;
- (id)_graphDatabaseUserVersionImplementation:(id)arg1 error:(id )arg2;
- (BOOL)hd_unitTesting_setVersion:(id)arg1 error:(id )arg2;
- (long long)_graphDatabaseVersionImplementation:(id)arg1 error:(id )arg2;
- (BOOL)_queue_importReferenceOntology;
- (BOOL)_queue_copyEmbeddedReferenceOntology;
- (BOOL)_queue_insertRawRelationshipIntoDatabase:(id)arg1 valueString:(id)arg2;
- (BOOL)_queue_insertRawAttributeIntoDatabase:(id)arg1 valueString:(id)arg2;
- (BOOL)_queue_insertTwoItemRawOntologyValueIntoDatabase:(id)arg1 table:(id)arg2 valueString:(id)arg3;
- (BOOL)useEmbeddedOntologyAsset;
- (BOOL)useEmbeddedOntology;
@property(readonly, nonatomic) BOOL ignoresOntologyAssetAvailabilityChanges;
@property(readonly, nonatomic) BOOL ignoresVersionCheckDuringReferenceOntologyImport;
- (id)_referenceOntologyFileURL;
- (id)_ontologyAssetManager;
- (id)_queue_graphDatabase;
- (void)invalidateAndWait;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)_queue_closeDatabase;
- (void)_queue_clearCachedConceptWithIdentifier:(id)arg1;
- (void)_queue_clearCache;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end

