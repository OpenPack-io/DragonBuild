//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMConflictResolving-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMSaveRequestTrackedValue-Protocol.h>

@class REMAccountCapabilities, REMAccountGroupContextChangeItem, REMAccountStorage, REMChangedKeysObserver, REMSaveRequest;

@interface REMAccountChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding>
{
    REMSaveRequest *_saveRequest;
    REMAccountStorage *_storage;
    REMChangedKeysObserver *_changedKeysObserver;
}

+ (id)_emptyListIDsOrderingWithAccountID:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // @synthesize changedKeysObserver=_changedKeysObserver;
@property(readonly, copy, nonatomic) REMAccountStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
// - (void).cxx_destruct;
- (void)_editListIDsOrderingUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_lowLevelApplyUndoToOrdering:(id)arg1;
- (void)_lowLevelAddListChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(BOOL)arg3 withParentListChangeItem:(id)arg4;
- (void)_reassignListChangeItem:(id)arg1 withParentListChangeItem:(id)arg2;
- (void)insertListChangeItem:(id)arg1 adjacentToListChangeItem:(id)arg2 isAfter:(BOOL)arg3 withParentListChangeItem:(id)arg4;
- (id)lowLevelRemoveListIDFromOrdering:(id)arg1;
- (void)lowLevelAddListIDToOrdering:(id)arg1 withParentListChangeItem:(id)arg2;
- (id)listChangeItemsByOrderingListChangeItems:(id)arg1;
- (void)removeFromStore;
- (void)undeleteListWithID:(id)arg1 usingUndo:(id)arg2;
- (void)insertListChangeItem:(id)arg1 afterListChangeItem:(id)arg2;
- (void)insertListChangeItem:(id)arg1 beforeListChangeItem:(id)arg2;
- (void)addListChangeItem:(id)arg1;
- (id)changedKeys;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) REMAccountGroupContextChangeItem *groupContext;
@property(readonly, nonatomic) REMAccountCapabilities *capabilities; // @dynamic capabilities;
- (id)shallowCopyWithSaveRequest:(id)arg1;
- (id)initWithObjectID:(id)arg1 type:(long long)arg2 name:(id)arg3 insertIntoSaveRequest:(id)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 capabilities:(id)arg3 observeInitialValues:(BOOL)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 capabilities:(id)arg3 changedKeysObserver:(id)arg4;

@end

