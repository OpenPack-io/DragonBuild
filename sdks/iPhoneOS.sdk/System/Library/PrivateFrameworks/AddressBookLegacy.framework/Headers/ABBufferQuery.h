//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABSQLPredicate, CNManagedConfiguration, NSIndexSet;

@interface ABBufferQuery : NSObject
{
    BOOL _fetchLinkedContacts;
    BOOL _needsMultivalueTable;
    BOOL _needsMultivalueEntryTable;
    BOOL _needsPersonTable;
    BOOL _needsPersonLinkTable;
    BOOL _requestedImageData;
    BOOL _requestedImageCropRect;
    BOOL _requestedImageThumbnail;
    BOOL _requestedImageFullscreenData;
    BOOL _requestedSyncImageData;
    BOOL _requestedHasImageData;
    unsigned int _sortOrder;
    void _addressBook;
    CNManagedConfiguration *_managedConfiguration;
    ABSQLPredicate *_predicate;
    struct CPSqliteStatement _statement;
    NSIndexSet *_scopedStoreIdentifiers;
    NSIndexSet *_requestedPropertyIdentifiers;
    NSIndexSet *_requestedMultivalueIdentifiers;
    struct __CFDictionary _propertyIndices;
}

@property(readonly, nonatomic) BOOL requestedHasImageData; // @synthesize requestedHasImageData=_requestedHasImageData;
@property(readonly, nonatomic) BOOL requestedSyncImageData; // @synthesize requestedSyncImageData=_requestedSyncImageData;
@property(readonly, nonatomic) BOOL requestedImageFullscreenData; // @synthesize requestedImageFullscreenData=_requestedImageFullscreenData;
@property(readonly, nonatomic) BOOL requestedImageThumbnail; // @synthesize requestedImageThumbnail=_requestedImageThumbnail;
@property(readonly, nonatomic) BOOL requestedImageCropRect; // @synthesize requestedImageCropRect=_requestedImageCropRect;
@property(readonly, nonatomic) BOOL requestedImageData; // @synthesize requestedImageData=_requestedImageData;
@property(readonly, nonatomic) BOOL needsPersonLinkTable; // @synthesize needsPersonLinkTable=_needsPersonLinkTable;
@property(readonly, nonatomic) BOOL needsPersonTable; // @synthesize needsPersonTable=_needsPersonTable;
@property(readonly, nonatomic) BOOL needsMultivalueEntryTable; // @synthesize needsMultivalueEntryTable=_needsMultivalueEntryTable;
@property(readonly, nonatomic) BOOL needsMultivalueTable; // @synthesize needsMultivalueTable=_needsMultivalueTable;
@property(readonly, nonatomic) BOOL fetchLinkedContacts; // @synthesize fetchLinkedContacts=_fetchLinkedContacts;
@property(nonatomic) struct __CFDictionary propertyIndices; // @synthesize propertyIndices=_propertyIndices;
@property(readonly, nonatomic) NSIndexSet *requestedMultivalueIdentifiers; // @synthesize requestedMultivalueIdentifiers=_requestedMultivalueIdentifiers;
@property(readonly, nonatomic) NSIndexSet *requestedPropertyIdentifiers; // @synthesize requestedPropertyIdentifiers=_requestedPropertyIdentifiers;
@property(readonly, nonatomic) NSIndexSet *scopedStoreIdentifiers; // @synthesize scopedStoreIdentifiers=_scopedStoreIdentifiers;
@property(readonly, nonatomic) unsigned int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) struct CPSqliteStatement statement; // @synthesize statement=_statement;
@property(readonly, nonatomic) ABSQLPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(nonatomic) void addressBook; // @synthesize addressBook=_addressBook;
- (void)appendBindParameterMarkersToQueryString:(id)arg1 count:(NSUInteger)arg2;
- (void)appendOrderByClauseToQueryString:(id)arg1;
- (void)bindWhereClause:(id)arg1;
- (void)appendWhereClauseToQueryString:(id)arg1;
- (void)appendFromClauseToQueryString:(id)arg1;
- (void)bindWithClause:(id)arg1;
- (void)prependWithClauseToQueryString:(id)arg1 whereClause:(id)arg2;
- (void)appendCustomPropertySelectsToQueryString:(id)arg1;
- (void)dealloc;
- (id)scopedStoresForManagedConfiguration:(id)arg1;
- (void)_initSetupPropertySet:(struct __CFSet )arg1 includeLinkedContacts:(BOOL)arg2;
- (id)initWithAddressBook:(void )arg1 predicate:(id)arg2 requestedProperties:(struct __CFSet )arg3 includeLinkedContacts:(BOOL)arg4 sortOrder:(unsigned int)arg5 managedConfiguration:(id)arg6;

@end

