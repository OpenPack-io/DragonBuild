//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PPDKStorage, _DKEventStream;

@interface PPRecordStorageHelper : NSObject
{
    NSString *_table;
    NSString *_clusterIdentifierColumn;
    unsigned int _maxRecords;
    PPDKStorage *_duetStorage;
    _DKEventStream *_duetStream;
    NSString *_lastDuetImportDateKey;
    NSString *_lastDuetDeletionDateKey;
}

// - (void).cxx_destruct;
- (void)fixupDKEventsWithDatabase:(id)arg1 fixup49995922Table:(id)arg2 batchSize:(unsigned int)arg3 createRecordWithStatement:(id /* CDUnknownBlockType */)arg4 eventForRecord:(id /* CDUnknownBlockType */)arg5 isComplete:(BOOL )arg6;
- (void)_deleteDKEventsWithRowIdQuery:(id)arg1 txnWitness:(id)arg2;
- (struct _PASDBIterAction_)_processRowForDeletionWithStatement:(id)arg1 handle:(id)arg2;
- (void)_deleteRecordsWithRowIdsFromQuery:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL )arg3 deletedCount:(NSUInteger )arg4 bind:(id /* CDUnknownBlockType */)arg5;
- (void)deleteRecordsWithRowIdsFromTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL )arg3 deletedCount:(NSUInteger )arg4;
- (id)createTempTableContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3 bind:(id /* CDUnknownBlockType */)arg4;
- (id)createTempRowIdTableForRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3;
- (void)_deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2 tempTableName:(id)arg3;
- (void)deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned int)arg4 txnWitness:(id)arg5 atLeastOneRecordClusterRemoved:(BOOL )arg6 deletedCount:(NSUInteger )arg7 error:(id )arg8;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL )arg5 deletedCount:(NSUInteger )arg6 error:(id )arg7;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL )arg4 deletedCount:(NSUInteger )arg5 error:(id )arg6;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL )arg3 deletedCount:(NSUInteger )arg4 error:(id )arg5;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL )arg5 deletedCount:(NSUInteger )arg6 error:(id )arg7;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL )arg4 deletedCount:(NSUInteger )arg5 error:(id )arg6;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(BOOL )arg5 deletedCount:(NSUInteger )arg6 error:(id )arg7;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL )arg4 deletedCount:(NSUInteger )arg5 error:(id )arg6;
- (BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(BOOL )arg4 deletedCount:(NSUInteger )arg5 error:(id )arg6;
- (BOOL)deleteAllRecordsWithClusterIdentifier:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(BOOL )arg3 deletedCount:(NSUInteger )arg4 error:(id )arg5;
- (void)disableSyncForBundleIds:(id)arg1 txnWitness:(id)arg2;
- (id)_importDuetEventBatch:(id)arg1 lastDKImportDate:(id)arg2 isComplete:(BOOL )arg3 eventImportBlock:(id /* CDUnknownBlockType */)arg4 txnWitness:(id)arg5;
- (void)_addEventsSourcedOnLastImportDateToSet:(id)arg1 lastDKImportDate:(id )arg2 txnWitness:(id)arg3;
- (void)importDuetEventsWithLimit:(unsigned int)arg1 database:(id)arg2 client:(unsigned char)arg3 remoteEventsOnly:(BOOL)arg4 isComplete:(BOOL )arg5 eventImportBlock:(id /* CDUnknownBlockType */)arg6;
- (void)_cleanDatabaseOfEventsWithUUIDs:(id)arg1 txnWitness:(id)arg2;
- (void)_processTombstoneEventBatch:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 lastTombstoneDate:(id )arg4;
- (id)_lastDeletionDateWithTransaction:(id)arg1;
- (id /* CDUnknownBlockType */)duetEventDeletionProcessingBlockWithDatabase:(id)arg1 client:(unsigned char)arg2;
- (id)createTempRowIdTableForRecordsToDropMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (BOOL)clearWithDatabase:(id)arg1 client:(unsigned char)arg2 deletedCount:(NSUInteger )arg3 error:(id )arg4 clearExternalTableReferences:(id /* CDUnknownBlockType */)arg5;
- (id)uuidForStatement:(id)arg1 referencingBlobInColumn:(int)arg2;
- (id)blobFromUUID:(id)arg1;
- (id)initWithName:(id)arg1 table:(id)arg2 clusterIdentifierColumn:(id)arg3 maxRecords:(unsigned int)arg4 duetStorage:(id)arg5 duetStream:(id)arg6;
- (id)init;

@end

