//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MAGraph.h>

@class CLSFocusPeopleCache, NSArray, NSDate, NSDateFormatter, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSRecursiveLock, NSSet, NSString, PGManager, PGMessageProfile;
@protocol OS_dispatch_queue, OS_os_log;

@interface PGGraph : MAGraph
{
    NSDate *_creationDate;
    NSNumber *_canUseLocationDomain;
    BOOL _didFetchRoutineInfo;
    PGMessageProfile *_messageProfile;
    NSDateFormatter *_dateFormatter;
    NSRecursiveLock *_supersetLock;
    NSSet *_supersets;
    NSSet *_supersetCityNodes;
    NSSet *_supersetCountyNodes;
    NSSet *_supersetStateNodes;
    NSSet *_supersetCountryNodes;
    NSSet *_supersetLocales;
    NSSet *_interestingCityNodes;
    NSSet *_highlyInterestingMomentNodes;
    NSMutableDictionary *_personNodesByPersonID;
    NSMutableDictionary *_isCelebratingInGeneralCache;
    NSArray *_preprocessors;
    NSArray *_postprocessors;
    NSDictionary *_zeroKeywordMappingByMeaningLabel;
    NSMutableDictionary *_momentNodeByMomentUUID;
    NSMutableDictionary *_highlightNodeByHighlightUUID;
    BOOL _keepsExistingAssetCurationScores;
    BOOL _canWrite;
    PGManager *_manager;
    CLSFocusPeopleCache *_focusPeopleIngestCache;
    long long _numberOfUtilityAssets;
    long long _numberOfDefaultAssets;
    long long _numberOfImprovedAssets;
    long long _numberOfBetterAssets;
    NSString *_geoServiceProviderID;
    NSUInteger _relatedAlgorithmsVersion;
    NSUInteger _curationAlgorithmsVersion;
    NSUInteger _memoriesAlgorithmsVersion;
    NSString *_locale;
    double _personalGoodAestheticsThreshold;
    double _personalHighAestheticsThreshold;
    NSObject<OS_dispatch_queue> *_graphQueue;
    struct PGRoutineInfoStruct _routineInfo;
}

+ (long long)_librarySizeRangeForNumberOfAssets:(NSUInteger)arg1;
+ (BOOL)graphExistsWithName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (id)graphURLForName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (id)assetPropertySetsForIngest;
+ (double)topTierAestheticScoreForRatio:(double)arg1 inPhotoLibrary:(id)arg2;
+ (id)blacklistSceneBabyLabels;
+ (id)sceneBabyLabels;
+ (Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)edgeClass;
+ (Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)nodeClass;
+ (id)_graphNodePOILabelByPlaceType;
+ (id)_poiLabelForPOIType:(id)arg1;
+ (BOOL)_hasMomentsForPersonIdentifiers:(id)arg1 inGraph:(id)arg2 photoLibrary:(id)arg3;
+ (id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)arg1;
+ (id)_meaningLabelTree;
+ (void)_traverseMeaningLabelsInTree:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
+ (void)_traverseMeaningLabelsUsingBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)_findParentMeaningLabelForMeaningLabel:(id)arg1 inTree:(id)arg2 currentParent:(id)arg3;
+ (id)parentMeaningLabelForMeaningLabel:(id)arg1;
+ (void)traverseParentMeaningsForMeaningLabel:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
+ (id)defaultMatchingSortDescriptors;
+ (id)matchingBlasklistedSceneLabels;
+ (id)matchingWeightToDictionary;
+ (id)_personClosestToMeBetweenPerson:(id)arg1 andOtherPerson:(id)arg2;
+ (id)_closestRelationshipEdgeLabelForPerson:(id)arg1 andOtherPerson:(id)arg2;
+ (NSUInteger)meaningForMeaningLabel:(id)arg1;
+ (id)meaningLabelForMeaning:(NSUInteger)arg1;
+ (id)stringForMeaning:(NSUInteger)arg1;
+ (id)mostSignificantMeaningLabels;
+ (id)frequentMeaningLabels;
+ (id)stellarMeanings;
+ (id)lessMeaningfulMeanings;
+ (id)veryMeaningfulMeanings;
+ (id)allMeaningfulMeanings;
+ (id)blacklistScenePetLabels;
+ (id)scenePetLabels;
+ (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 blacklisted:(BOOL)arg2;
+ (id)blacklistSceneLabelsForHobbyType:(long long)arg1;
+ (id)sceneLabelsForHobbyType:(long long)arg1;
+ (BOOL)location:(struct CLLocationCoordinate2D)arg1 isCloseToLocation:(struct CLLocationCoordinate2D)arg2;
+ (id)aggregateKeyByPublicEventCategoryLabel;
+ (id)aggregateKeyByMeaningLabel;
@property BOOL canWrite; // @synthesize canWrite=_canWrite;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *graphQueue; // @synthesize graphQueue=_graphQueue;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) PGMessageProfile *messageProfile; // @synthesize messageProfile=_messageProfile;
@property(nonatomic) BOOL keepsExistingAssetCurationScores; // @synthesize keepsExistingAssetCurationScores=_keepsExistingAssetCurationScores;
@property(nonatomic) long long numberOfBetterAssets; // @synthesize numberOfBetterAssets=_numberOfBetterAssets;
@property(nonatomic) long long numberOfImprovedAssets; // @synthesize numberOfImprovedAssets=_numberOfImprovedAssets;
@property(nonatomic) long long numberOfDefaultAssets; // @synthesize numberOfDefaultAssets=_numberOfDefaultAssets;
@property(nonatomic) long long numberOfUtilityAssets; // @synthesize numberOfUtilityAssets=_numberOfUtilityAssets;
@property(retain, nonatomic) CLSFocusPeopleCache *focusPeopleIngestCache; // @synthesize focusPeopleIngestCache=_focusPeopleIngestCache;
@property __weak PGManager *manager; // @synthesize manager=_manager;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long librarySizeRange;
@property(readonly, nonatomic) NSUInteger numberOfAssets;
- (void)uncacheHighlightNodeForHighlightUUID:(id)arg1 checkExistence:(BOOL)arg2;
- (void)uncacheHighlightNodesForHighlightUUIDs:(id)arg1;
- (void)cacheHighlightNode:(id)arg1 forHighlightUUID:(id)arg2 checkUnicity:(BOOL)arg3;
- (id)cachedHighlightNodeForHighlightUUID:(id)arg1;
- (void)uncacheMomentNodeForMomentUUID:(id)arg1 checkExistence:(BOOL)arg2;
- (void)uncacheMomentNodesForMomentUUIDs:(id)arg1;
- (void)cacheMomentNode:(id)arg1 forMomentUUID:(id)arg2 checkUnicity:(BOOL)arg3;
- (id)cachedMomentNodeForMomentUUID:(id)arg1;
@property(readonly, nonatomic) NSSet *allMomentUUIDs;
- (void)unloadMessageProfile;
@property(nonatomic) double personalHighAestheticsThreshold; // @synthesize personalHighAestheticsThreshold=_personalHighAestheticsThreshold;
@property(nonatomic) double personalGoodAestheticsThreshold; // @synthesize personalGoodAestheticsThreshold=_personalGoodAestheticsThreshold;
@property(nonatomic) struct PGRoutineInfoStruct routineInfo; // @synthesize routineInfo=_routineInfo;
@property(nonatomic) BOOL canUseLocationDomain;
- (void)saveNumberOfAssetsToInfoNode;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) NSUInteger memoriesAlgorithmsVersion; // @synthesize memoriesAlgorithmsVersion=_memoriesAlgorithmsVersion;
@property(nonatomic) NSUInteger relatedAlgorithmsVersion; // @synthesize relatedAlgorithmsVersion=_relatedAlgorithmsVersion;
@property(nonatomic) NSUInteger curationAlgorithmsVersion; // @synthesize curationAlgorithmsVersion=_curationAlgorithmsVersion;
@property(retain, nonatomic) NSString *geoServiceProviderID; // @synthesize geoServiceProviderID=_geoServiceProviderID;
@property(retain, nonatomic) NSDate *creationDate;
- (id)_infoNode;
- (void)prepareForRebuild;
@property(readonly) BOOL needsRebuild;
- (void)invalidateMemoryCaches;
- (BOOL)saveToURL:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection;
@property(readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1 persistenceOptions:(long long)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
@property(readonly) BOOL isOnGraphQueue;
- (void)_checkCanRead;
- (void)_checkCanWrite;
- (double)topTierAestheticScoreForTripKeyAsset;
- (double)topTierAestheticScore;
- (void)computeAndStoreTopTierAestheticScore;
- (void)insertAssetCurationScoreInLibraryForFeeder:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)addInteractionScore:(float)arg1 forAsset:(id)arg2;
- (void)_writeInteractionScoresToPhotosDatabase:(id)arg1;
- (void)writePendingScoresToPhotosDatabase;
- (void)addCurationScore:(double)arg1 forAsset:(id)arg2;
- (void)_writeCurationScoresToPhotosDatabase:(id)arg1;
- (BOOL)_shouldUpdateCurationScore:(double)arg1 withNewCurationScore:(double)arg2;
- (void)enumerateBabyNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)babyNodes;
- (id)_neighborsFromMomentNode:(id)arg1 count:(NSUInteger)arg2 locationRequired:(BOOL)arg3 minDayDuration:(NSUInteger)arg4 maxDayDuration:(NSUInteger)arg5;
- (id)_peopleUUIDsForMomentNode:(id)arg1;
- (double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 referenceDistance:(double)arg3 andDistanceBlock:(id /* CDUnknownBlockType */)arg4;
- (double)_calculateScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andDistanceBlock:(id /* CDUnknownBlockType */)arg3;
- (double)_locationScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andLocationCoordinate:(const struct CLLocationCoordinate2D )arg3;
- (double)_peopleScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andPeopleUUIDs:(id)arg3;
- (double)_densityScoreWithNeighborNodes:(id)arg1 referenceTimestamp:(double)arg2 andNumberOfAssets:(NSUInteger)arg3;
- (double)routineScoreForLocalDate:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 andPeopleUUIDs:(id)arg4;
- (double)neighborScoreForLocalDate:(id)arg1;
- (double)neighborScoreForMomentNode:(id)arg1;
- (id)searchNodesForAsset:(id)arg1 inMoment:(id)arg2;
- (long long)libraryAge;
- (id)localDatesForMomentNode:(id)arg1;
- (id)closestMomentNodeForLocalDate:(id)arg1;
- (id)yearNodeForYear:(long long)arg1;
- (id)monthNodeForMonth:(long long)arg1;
- (id)dayNodeForDay:(long long)arg1;
- (id)momentNodesOverlappingLocalDateInterval:(id)arg1;
- (id)momentNodesForDateNode:(id)arg1;
- (id)_previousSeasonForSeason:(id)arg1;
- (id)previousSeasonNodeForSeasonNode:(id)arg1;
- (id)seasonNodeForLocalDate:(id)arg1;
- (id)dateNodesForWeekOfMonth:(long long)arg1;
- (id)dateNodesForWeekOfYear:(long long)arg1;
- (id)dateNodesForYear:(long long)arg1;
- (id)dateNodesForMonth:(long long)arg1;
- (id)dateNodesIgnoringYearForLocalDate:(id)arg1;
- (id)momentNodesIgnoringYearForLocalDate:(id)arg1;
- (id)momentNodesForLocalDate:(id)arg1;
- (id)dateNodesForLocalDateInterval:(id)arg1;
- (id)dateNodeForLocalDate:(id)arg1;
- (id)momentsResultForMomentNodes:(id)arg1 sortChronologically:(BOOL)arg2;
- (id)momentsForMomentNodes:(id)arg1 sortChronologically:(BOOL)arg2;
- (id)momentForMomentNode:(id)arg1;
- (id)highlightForHighlightNode:(id)arg1;
- (id)_fuzzyMomentLookupForMomentNode:(id)arg1 error:(id )arg2;
- (id)_strictMomentLookupForMomentNode:(id)arg1;
- (id)momentNodesForMoments:(id)arg1;
- (id)momentNodeForMoment:(id)arg1;
- (id)highlightNodeForHighlightUUID:(id)arg1;
- (id)highlightNodeForHighlight:(id)arg1;
- (id)momentNodesForMomentIdentifiers:(id)arg1;
- (id)momentNodeForMomentUUID:(id)arg1;
- (id)momentNodeForAsset:(id)arg1;
- (id)eventNodeForAssetCollection:(id)arg1;
- (id)_nodeForAssetCollection:(id)arg1 error:(id )arg2;
- (id)_fuzzyEventNodeLookupForAssetCollection:(id)arg1 error:(id )arg2;
- (id)_strictEventNodeLookupForAssetCollection:(id)arg1 error:(id )arg2;
- (id)_eventNodesForDateComponents:(id)arg1 error:(id )arg2;
- (void)_enumerateMomentForMomentNode:(id)arg1 paddingTime:(double)arg2 enumerationBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_enumerateEventNodesForAssetCollection:(id)arg1 paddingTime:(double)arg2 error:(id )arg3 enumerationBlock:(id /* CDUnknownBlockType */)arg4;
- (id)connectPublicEventNode:(id)arg1 withBusinessNode:(id)arg2;
- (id)insertBusiness:(id)arg1 fromEventNode:(id)arg2;
- (id)insertPOIWithFeeder:(id)arg1 fromMomentNode:(id)arg2 isNearHomeOrWork:(BOOL)arg3;
- (id)insertROIWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertROINodeWithPlace:(id)arg1 fromEventNode:(id)arg2;
- (id)insertPOINodeWithPlace:(id)arg1 fromEventNode:(id)arg2 hasInsertedSpecialPOIAmusementParkNode:(BOOL)arg3;
- (id)insertSpecialPOIAmusementParkNodeFromMomentNode:(id)arg1;
- (id)insertSceneNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertSceneNodeWithScene:(id)arg1 fromEventNode:(id)arg2;
- (id)largeFrequentLocationNodes;
- (id)sceneNodesForSceneNames:(id)arg1;
- (id)sceneNodeForSceneName:(id)arg1;
- (id)_userLocales;
- (id)seasonNodes;
- (id)dayOfWeekNodeForDayOfWeek:(long long)arg1;
- (id)dayOfWeekNodes;
- (id)_validLocationNodeForLocationNode:(id)arg1 withLocationMask:(NSUInteger)arg2;
- (struct CLLocationCoordinate2D)_approximateCoordinateForLocationNode:(id)arg1;
- (id)_commonNodeForLocationNode:(id)arg1 andLocationNode:(id)arg2;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)arg1;
- (BOOL)_locationNodesRepresentSameCity:(id)arg1;
- (id)commonLocationNodeForRelevantLocationNodes:(id)arg1 locationMask:(NSUInteger)arg2;
- (id)relevantAddressNodesForMomentNodes:(id)arg1;
- (id)relevantLocationNodesForMomentNodes:(id)arg1;
- (id)densestCloseLocationNodeFromLocationNode:(id)arg1 withDateInterval:(id)arg2 locationMask:(NSUInteger)arg3;
- (void)enumeratePublicEventNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateBusinessNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateAreaNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateCelebratedHolidayNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)bestFittingAreaNodeFromAreaNodes:(id)arg1;
- (double)libraryDuration;
- (id)celebratedHolidayNodes;
- (id)allMomentNodes;
- (id)allTimeYearsNodes;
- (id)dateNodeNameWithLocalDate:(id)arg1;
- (id)coworkers;
- (id)friends;
- (id)children;
- (id)parents;
- (id)partners;
- (id)familyMembers;
- (id)allPersonNodesExceptMeNode;
- (id)meNode;
- (id)insertLocationMobilityNodeWithMobility:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertLocationMobilityNodeWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertAddressNodeWithPlacemark:(id)arg1 location:(id)arg2 weight:(float)arg3 duringDateInterval:(id)arg4 fromEventNode:(id)arg5;
- (id)insertLocationHierarchyWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertAddressNodeWithProjectedPlacemark:(id)arg1 atEventLocation:(id)arg2 usingImprovedPlacemark:(BOOL)arg3;
- (void)insertLocationHierarchyWithProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (void)insertAreasOfInterestForProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (long long)_uuidForPlacemark:(id)arg1 forNodeLabel:(id)arg2;
- (id)insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (id)_feederForInsertingAssetCollection:(id)arg1;
- (void)_insertRoutineInfo;
- (void)_registerInsertedMomentNodes:(id)arg1 inGraphUpdate:(id)arg2;
- (void)insertMomentsWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)performChangeForGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)deletePersonsWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)_deleteMomentsWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)performBatchUpdatesWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
- (id)_insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 insertedAndUpdatedPersonNodes:(id )arg3 progressBlock:(id /* CDUnknownBlockType */)arg4;
- (id)_cleanUpMoments:(id)arg1;
- (id)insertPet:(id)arg1;
- (id)maximalSocialGroupsForPersonIdentifiers:(id)arg1;
- (id)socialGroupsForPersonIdentifiers:(id)arg1;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1;
- (NSUInteger)_countOfDistinctSocialGroups:(id)arg1;
- (id)_personNodeIntersectingSocialGroups:(id)arg1;
- (id)_socialGroupNodeForPersonNodes:(id)arg1 searchWithTolerance:(BOOL)arg2;
- (id)socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(BOOL)arg2;
- (id)personLocalIdentifiersBySocialGroupUUIDWithSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(BOOL)arg2;
- (id)personNodeForPersonLocalIdentifier:(id)arg1;
- (id)momentNodesForPersonNodes:(id)arg1;
- (id)personNodesForSocialGroupNode:(id)arg1;
- (id)personNodesForPersonIdentifiers:(id)arg1;
- (id)assetCollectionsForPersonNodes:(id)arg1;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1 withThreshold:(double)arg2;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1;
- (BOOL)isBestPairSocialGroup:(id)arg1;
- (BOOL)isPairSocialGroup:(id)arg1;
- (BOOL)hasSocialGroups;
- (id)bestSocialGroupNodes;
- (id)sortedSocialGroupNodes;
- (id)socialGroupNodeForPersonNodes:(id)arg1;
- (id)inferredMeNode;
- (id)musicGenreDistributionUsingTaggedGenres:(BOOL)arg1;
- (void)enumerateMusicSessionNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSSet *musicSessions;
- (id)staticGraphSchema;
- (id)_createZeroKeywordMappingByMeaningLabel;
@property(readonly, nonatomic) NSDictionary *zeroKeywordMappingByMeaningLabel;
- (id)momentNodesConnectedToNode:(id)arg1;
- (id)nodeLabelForHighlightType:(unsigned short)arg1;
- (id)onGoingTripNodes;
- (id)dayHighlightNodes;
- (id)defaultHighlightNodes;
- (id)aggregationNodes;
- (id)allTripNodes;
- (id)shortTripNodes;
- (id)longTripNodes;
- (id)defaultHighlightTypeNode;
- (id)onGoingTripHighlightTypeNode;
- (id)aggregationHighlightTypeNode;
- (id)shortTripHighlightTypeNode;
- (id)longTripHighlightTypeNode;
- (id)insertBaby:(id)arg1;
- (id)insertMusicTrackWithTrackTitle:(id)arg1 durationInSeconds:(id)arg2;
- (id)insertMusicAlbumNodeWithAlbumTitle:(id)arg1;
- (id)insertMusicGenreNodeWithGenreName:(id)arg1;
- (id)insertMusicSessionNodeWithLocalStartDate:(id)arg1 localEndDate:(id)arg2;
- (void)performProcessingSteps:(id)arg1 withGraphUpdate:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
- (void)performPostprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
- (void)performPreprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)exportMatchMomentEventResults:(id)arg1 relatedType:(NSUInteger)arg2 focusOnNodes:(id)arg3 toFileURL:(id)arg4 error:(id )arg5;
- (id)_eventsFromEvents:(id)arg1 withTargetDomain:(unsigned short)arg2;
- (id)_commonAreaNodesBetweenAddressAreaNodes:(id)arg1 andAddressNode:(id)arg2;
- (id)_commonAreaNodesBetweenAddressNode:(id)arg1 andAddressNode:(id)arg2;
- (id)_closestLocationNodeFromAddressNode:(id)arg1 toAddressNode:(id)arg2;
- (id)_firstLocationNodeFromAddressNode:(id)arg1 inLocationNodes:(id)arg2;
- (double)_distanceForLocationLabel:(id)arg1;
- (double)_relationshipScoreForPerson:(id)arg1;
- (double)_scoreForPlaceSubDomain:(unsigned short)arg1;
- (id)_coreSceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_sceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_sceneMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_corePlaceMatchingIdsToScoresFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_placeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_placeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_coreEventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_eventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_eventMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_coreLocationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_locationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_locationMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_timeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_timeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_peopleMatchingResultFromEvent:(id)arg1 matchedEvent:(id)arg2 presentPeopleCountForEvent:(NSUInteger)arg3 presentPeopleCountForMatchedEvent:(NSUInteger)arg4 commonPeople:(id)arg5 relationshipScoreCache:(id)arg6 needsKeywords:(BOOL)arg7;
- (id)_peopleMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (NSUInteger)_peopleCountWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_peopleWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_peopleMatchingIdsToResultsFromEvent:(id)arg1 options:(id)arg2;
- (id)matchPeopleNodes:(id)arg1 sortDescriptors:(id)arg2;
- (id)matchEvent:(id)arg1 withEvent:(id)arg2 options:(id)arg3;
- (id)matchEvent:(id)arg1 options:(id)arg2;
- (id)_dateIntervalForMomentNodes:(id)arg1;
- (id)interestingAreaNodes;
- (id)interestingCityNodes;
- (id)mainUrbanCityNodes;
- (id)_peopleSocialGraphWithLoops:(BOOL)arg1;
- (void)_randomWalkCommunityDetectionWithWeightThreshold:(float)arg1;
- (NSUInteger)_cluePeopleForRelationships:(id)arg1;
- (id)celebratedHolidays;
- (id)highlyInterestingMomentNodesForMomentNodes:(id)arg1;
- (id)highlyInterestingMomentNodes;
- (id)weekends;
- (id)trips;
- (id)_supersetsForLocalDateInterval:(id)arg1 intersectingMomentNodes:(id)arg2 earlyStop:(BOOL)arg3;
- (id)_locationNodesOfSupersetsWithLocationNodeLabel:(id)arg1;
- (id)supersetsForLocalDateInterval:(id)arg1;
- (id)supersetsForLocalDate:(id)arg1;
- (BOOL)supersetsIntersectMomentNodes:(id)arg1;
- (id)supersetsIntersectingMomentNodes:(id)arg1;
@property(readonly, nonatomic) NSSet *supersetLocales;
@property(readonly, nonatomic) NSSet *supersetCountryNodes;
@property(readonly, nonatomic) NSSet *supersetStateNodes;
@property(readonly, nonatomic) NSSet *supersetCountyNodes;
@property(readonly, nonatomic) NSSet *supersetCityNodes;
@property(readonly, nonatomic) NSSet *supersets;
- (void)_enumerateSocialGroupsIncludingMeNode:(BOOL)arg1 withValidGroupsBlock:(id /* CDUnknownBlockType */)arg2 invalidGroupsBlock:(id /* CDUnknownBlockType */)arg3 averageWeight:(out float )arg4;
- (id)socialGroupsDebugStringIncludingMeNode:(BOOL)arg1;
- (void)enumerateSocialGroupsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumeratePeopleClustersWithLinkage:(NSUInteger)arg1 threshold:(double)arg2 includingMeNode:(BOOL)arg3 withBlock:(id /* CDUnknownBlockType */)arg4;
- (void)enumeratePeopleClustersIncludingMeNode:(BOOL)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)invalidateSupersetCaches;
- (void)invalidateProcessingCaches;
- (void)_enumerateMeaningfulEventsWithMeaningLabel:(id)arg1 visitedMeaningfulEvents:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)addParentMeaningHierarchyForMeaningNode:(id)arg1;
- (void)addMeaningToMeaningfulEventNode:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(BOOL)arg3;
- (id)meaningfulEventNodeForUUID:(id)arg1;
- (id)bestMeaningLabelForMeaningfulEvent:(id)arg1;
- (id)preciseMeaningNodeForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2;
- (id)preciseMeaningLabelForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2;
- (void)enumerateMomentNodesWithMeaning:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)momentNodesWithMeaning:(NSUInteger)arg1;
- (void)enumerateMeaningsFromMeaningfulEvent:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)meaningsFromMeaningfulEvent:(id)arg1;
- (void)enumerateMeaningfulEventsWithMeaning:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)eventIsStellar:(id)arg1;
- (BOOL)eventIsVeryMeaningful:(id)arg1;
- (id)meaningfulEvents;
- (id)insertMomentNodeForMoment:(id)arg1;
- (void)enumeratePetNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)petNodes;
- (id)nodesForMomentsInHighlight:(id)arg1;
- (id)nodesForHighlightsInHighlightDayGroup:(id)arg1;
- (id)insertHighlightGroupNodeWithHighlight:(id)arg1;
- (void)updateHighlightsForHighlightDayGroupNode:(id)arg1 withHighlightDayGroup:(id)arg2;
- (void)insertHighlightDayGroupsWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (id)_propertiesFromIngestHighlight:(id)arg1;
- (void)updateHighlightNode:(id)arg1 withHighlight:(id)arg2;
- (id)insertHighlightNodeWithHighlight:(id)arg1;
- (void)updateMomentsForHighlightNode:(id)arg1 withHighlight:(id)arg2;
- (void)insertHighlightDaysWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)insertHighlightsWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (void)deleteHighlightsWithGraphUpdate:(id)arg1 progressBlock:(id /* CDUnknownBlockType */)arg2;
- (id)insertPublicEvent:(id)arg1 fromEventNode:(id)arg2;
- (id)hobbiesForType:(long long)arg1;
- (id)allHobbies;
- (id)insertContactSuggestion:(id)arg1 forPersonNode:(id)arg2 confidence:(double)arg3 edgeProperties:(id)arg4;
- (void)updatePersonNode:(id)arg1 withPerson:(id)arg2 forPropertyNames:(id)arg3;
- (id)insertPersonNodeForPerson:(id)arg1 fromEventNode:(id)arg2 numberOfAssetsWithPerson:(NSUInteger)arg3 edgeWeight:(float)arg4;
- (id)insertPeopleWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 addressNodes:(id)arg3 isNearPeopleAddress:(BOOL )arg4;
- (id)insertHomeWorkNodeForPerson:(id)arg1 personNode:(id)arg2 fromAddressNodes:(id)arg3;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andPersonNode:(id)arg2 forRelationship:(NSUInteger)arg3 confidence:(float)arg4 properties:(id)arg5;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andSocialGroupNode:(id)arg2 forRelationship:(NSUInteger)arg3 confidence:(float)arg4 properties:(id)arg5;
- (id)insertPersonNodeForPerson:(id)arg1;
- (id)insertMePersonNodeForPerson:(id)arg1;
- (void)_reportPublicEvents;
- (void)_reportBusinessItems;
- (void)_reportMePersonHomeWorkInfo;
- (void)_reportDisambiguatedLocations;
- (void)_reportMeaningfulEvents;
- (void)reportAGGDLogs;
- (id)_requiredSceneNodesToMatchForHolidayEventRule:(id)arg1;
- (BOOL)_isMatchingRequiredScenes:(id)arg1 withMomentNode:(id)arg2;
- (BOOL)_isMatchingRequiredScenes:(id)arg1 withMomentNodes:(id)arg2;
- (BOOL)_allRequiredRulesOfEventRule:(id)arg1 applyToLocalDate:(id)arg2 andAnyNodeFromMomentNodes:(id)arg3;
- (BOOL)_isInterestingForAnyNodeFromMomentNodes:(id)arg1;
- (void)_cacheEventRule:(id)arg1 isCelebrating:(BOOL)arg2;
- (void)invalidateIsCelebratingInGeneralCache;
- (id)celebratingMomentNodesForDateNode:(id)arg1 eventRule:(id)arg2;
- (BOOL)isCelebratingHolidayEventInGeneralForEventRule:(id)arg1;
- (id)allDatesForEventRule:(id)arg1 yearRange:(_NSRange)arg2;
- (id)allDatesForEventRule:(id)arg1;
- (id)insertPartOfDayNodeWithPartOfDayName:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertPartOfDayNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertDateNodesFromEventNode:(id)arg1;
- (id)insertDateNodesFromLocalStartDate:(id)arg1 toLocalEndDate:(id)arg2 fromEventNode:(id)arg3;
- (id)insertDateNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (void)enumerateDateComponentsBetweenLocalStartDate:(id)arg1 andLocalEndDate:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (id)insertTimeNodesWithDateComponents:(id)arg1 fromEventNode:(id)arg2;
- (id)_dayOfWeekNameForDate:(id)arg1;
- (id)insertDateNodeHierarchyWithDateComponents:(id)arg1;

@end

