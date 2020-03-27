//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, RLMRealmConfiguration, RLMSchema;

@interface RLMRealm : NSObject
{
    shared_ptr_130f66cc _realm;
    struct RLMSchemaInfo _info;
    struct unique_ptr<RLMResultsSetInfo, std::__1::default_delete<RLMResultsSetInfo>> _resultsSetInfo;
    NSHashTable *_collectionEnumerators;
    BOOL _sendingNotifications;
    BOOL _dynamic;
    RLMSchema *_schema;
    NSHashTable *_notificationHandlers;
}

+ (BOOL)performMigrationForConfiguration:(id)arg1 error:(id )arg2;
+ (NSUInteger)schemaVersionAtURL:(id)arg1 encryptionKey:(id)arg2 error:(id )arg3;
+ (void)resetRealmState;
+ (id)uncachedSchemalessRealmWithConfiguration:(id)arg1 error:(id )arg2;
+ (id)realmWithConfiguration:(id)arg1 error:(id )arg2;
+ (id)realmWithSharedRealm:(shared_ptr_130f66cc)arg1 schema:(id)arg2;
+ (id)asyncOpenWithConfiguration:(id)arg1 callbackQueue:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
+ (id)realmWithURL:(id)arg1;
+ (id)defaultRealm;
+ (BOOL)isCoreDebug;
@property(readonly, nonatomic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(retain, nonatomic) NSHashTable *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(retain, nonatomic) RLMSchema *schema; // @synthesize schema=_schema;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)detachAllEnumerators;
- (void)unregisterEnumerator:(id)arg1;
- (void)registerEnumerator:(id)arg1;
- (BOOL)writeCopyToURL:(id)arg1 encryptionKey:(id)arg2 error:(id )arg3;
- (id)createObject:(id)arg1 withValue:(id)arg2;
- (id)objectWithClassName:(id)arg1 forPrimaryKey:(id)arg2;
- (id)objects:(id)arg1 withPredicate:(id)arg2;
- (id)objects:(id)arg1 where:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (id)objects:(id)arg1 where:(id)arg2;
- (id)allObjects:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObjects:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)addOrUpdateObjects:(id)arg1;
- (void)addOrUpdateObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (BOOL)refresh;
- (void)dealloc;
- (BOOL)compact;
- (id)resolveThreadSafeReference:(id)arg1;
- (void)invalidate;
- (void)cancelWriteTransaction;
- (BOOL)transactionWithBlock:(id /* CDUnknownBlockType */)arg1 error:(id )arg2;
- (void)transactionWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)commitWriteTransactionWithoutNotifying:(id)arg1 error:(id )arg2;
- (BOOL)commitWriteTransaction:(id )arg1;
- (void)commitWriteTransaction;
- (void)beginWriteTransaction;
@property(readonly, nonatomic) RLMRealmConfiguration *configuration;
- (void)sendNotifications:(id)arg1;
- (id)addNotificationBlock:(id /* CDUnknownBlockType */)arg1;
- (void)verifyNotificationsAreSupported:(BOOL)arg1;
@property(nonatomic) BOOL autorefresh;
@property(readonly, nonatomic) struct Group group;
@property(readonly, nonatomic) BOOL inWriteTransaction;
- (void)verifyThread;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)initPrivate;

@end

