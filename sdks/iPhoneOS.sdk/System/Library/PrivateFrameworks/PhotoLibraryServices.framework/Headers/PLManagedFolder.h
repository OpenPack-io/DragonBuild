//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbum.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLDeletableManagedObject-Protocol.h>
#import <PhotoLibraryServices/PLFileSystemAlbumMetadataPersistence-Protocol.h>

@class NSString;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>
{
    BOOL _needsPersistenceUpdate;
    BOOL _needsFixedOrderKeysComplianceUpdate;
}

+ (id)validKindsForPersistence;
+ (id)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)localizedRecoveredTitle;
+ (id)childKeyForOrdering;
+ (id)entityName;
@property(nonatomic) BOOL needsFixedOrderKeysComplianceUpdate; // @synthesize needsFixedOrderKeysComplianceUpdate=_needsFixedOrderKeysComplianceUpdate;
@property(nonatomic) BOOL needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (void)refreshCollections;
- (void)removeChildCollections:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (void)removeChildCollectionsObject:(id)arg1;
- (void)addChildCollectionsObject:(id)arg1;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(NSUInteger)arg2;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (void)replaceObjectInChildCollectionsAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildCollectionsAtIndex:(NSUInteger)arg1;
- (void)insertObject:(id)arg1 inChildCollectionsAtIndex:(NSUInteger)arg2;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
- (void)enforceFixedOrderKeyCompliance;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (BOOL)isValidForPersistence;
@property(readonly, nonatomic) NSUInteger unreadAlbumsCount;
@property(readonly, nonatomic) int filter;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ albumsSortingComparator;
- (BOOL)albumHasFixedOrder:(NSObject )arg1;
- (BOOL)canEditAlbums;
- (short)albumListType;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, nonatomic) NSUInteger albumsCount;
- (id)albums;
- (id)identifier;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
@property(readonly, nonatomic) NSUInteger containersCount;
- (id)containers;
- (BOOL)canPerformDeleteOperation;
- (BOOL)canPerformEditOperation:(NSUInteger)arg1;
- (NSUInteger)videosCount;
- (NSUInteger)photosCount;
- (BOOL)isEmpty;
- (NSUInteger)count;
- (NSUInteger)assetsCount;
- (NSUInteger)approximateCount;
- (id)mutableAssets;
- (id)assets;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
- (void)prepareForDeletion;
- (void)didSave;
- (void)willSave;
- (id)childKeyForOrdering;
- (id)payloadForChangedKeys:(id)arg1;
- (id)descriptionOfChildCollectionOrderValues;

@end

