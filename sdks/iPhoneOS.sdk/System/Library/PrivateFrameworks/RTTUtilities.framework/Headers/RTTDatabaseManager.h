//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingCore/HCDatabaseManager.h>

@class CHManager;

@interface RTTDatabaseManager : HCDatabaseManager
{
    CHManager *_callHistoryManager;
}

+ (id)sharedManager;
// - (void).cxx_destruct;
- (BOOL)contactPathWasUsedForTTY:(id)arg1;
- (BOOL)contactIsTTYContact:(id)arg1;
- (BOOL)contactIDIsTTYContact:(id)arg1;
- (BOOL)deleteConversationWithCallUID:(id)arg1;
- (BOOL)deleteConversationsWithCallUIDs:(id)arg1;
- (BOOL)saveConversation:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (void)callHistoryDBDidChange:(id)arg1;
- (void)logMessage:(id)arg1;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)managedObjectModelName;
- (id)init;

@end

