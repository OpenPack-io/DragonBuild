//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMReplicaManagerProviding-Protocol.h>

@class REMStore;

@interface _REMDACalDAVSyncReplicaManagerProvider : NSObject <REMReplicaManagerProviding>
{
    REMStore *_store;
}

+ (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
+ (id)replicaManagerForAccountID:(id)arg1 withStore:(id)arg2;
@property(retain, nonatomic) REMStore *store; // @synthesize store=_store;
// - (void).cxx_destruct;
- (id)unsavedReplicaManagersForAccountIDs:(id)arg1;
- (id)replicaManagerForAccountID:(id)arg1;
- (id)initWithStore:(id)arg1;

@end

