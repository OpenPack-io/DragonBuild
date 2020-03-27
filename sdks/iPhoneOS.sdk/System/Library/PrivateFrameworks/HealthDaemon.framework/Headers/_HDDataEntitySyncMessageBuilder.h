//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDataProvenanceCache, HDEntityEncoder, HDProfile, HDSQLiteDatabase, HDSyncSession, NSArray;
@protocol HDSyncMessageHandler;

@interface _HDDataEntitySyncMessageBuilder : NSObject
{
    HDProfile *_profile;
    HDSQLiteDatabase *_database;
    Class _entityClass;
    HDDataProvenanceCache *_provenanceCache;
    HDEntityEncoder *_entityEncoder;
    id <HDSyncMessageHandler> _messageHandler;
    long long _currentEncodedBytes;
    BOOL _hasSentObject;
    BOOL _didSendFinal;
    long long _maxEncodedBytesPerMessage;
    long long _lastSyncAnchor;
    HDSyncSession *_syncSession;
}

@property(readonly, nonatomic) HDSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(readonly, nonatomic) long long lastSyncAnchor; // @synthesize lastSyncAnchor=_lastSyncAnchor;
@property(readonly, nonatomic) long long currentEncodedBytes; // @synthesize currentEncodedBytes=_currentEncodedBytes;
@property(readonly, nonatomic) long long maxEncodedBytesPerMessage; // @synthesize maxEncodedBytesPerMessage=_maxEncodedBytesPerMessage;
// - (void).cxx_destruct;
- (BOOL)finishAndFlush:(BOOL)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSArray *orderedProperties;
- (BOOL)_sendCurrentCollectionWithAnchor:(long long)arg1 final:(BOOL)arg2 error:(id )arg3;
- (long long)addEntity:(id)arg1 properties:(id)arg2 row:(struct HDSQLiteRow )arg3 anchor:(long long)arg4 index:(NSUInteger)arg5 error:(id )arg6;
- (id)_provenanceForID:(id)arg1 error:(id )arg2;
- (id)initWithProfile:(id)arg1 database:(id)arg2 entityClass:(Class)arg3 bytesPerMessage:(long long)arg4 syncSession:(id)arg5 messageHandler:(id)arg6;

@end

