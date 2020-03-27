//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageChangeHookResponder-Protocol.h>
#import <EmailDaemon/EDMessageDeliveryHookResponder-Protocol.h>
#import <EmailDaemon/EMInteractionLoggerInterface-Protocol.h>

@class EDMailboxPersistence, EDMessagePersistence, NSMutableDictionary;
@protocol EDInteractionEventLog, OS_dispatch_queue;

@interface EDInteractionLogger : NSObject <EDMessageChangeHookResponder, EDMessageDeliveryHookResponder, EMInteractionLoggerInterface>
{
    NSMutableDictionary *_viewedMessages;
    NSMutableDictionary *_messageListMessages;
    NSObject<OS_dispatch_queue> *_stateTrackingQueue;
    id <EDInteractionEventLog> _eventLog;
    EDMessagePersistence *_messagePersistence;
    EDMailboxPersistence *_mailboxPersistence;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _NSRange _messageListVisibleRows;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) id <EDInteractionEventLog> _eventLog; // @synthesize _eventLog;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_stateTrackingQueue; // @synthesize _stateTrackingQueue;
@property(nonatomic) _NSRange _messageListVisibleRows; // @synthesize _messageListVisibleRows;
@property(retain, nonatomic) NSMutableDictionary *_messageListMessages; // @synthesize _messageListMessages;
@property(retain, nonatomic) NSMutableDictionary *_viewedMessages; // @synthesize _viewedMessages;
// - (void).cxx_destruct;
- (void)waitForPendingStateChanges;
- (void)deliveredMessage:(id)arg1 account:(id)arg2;
- (void)persistenceWillTransferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(BOOL)arg4;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)_conversationFlagsChanged:(id)arg1;
- (void)_viewingEndedForAllMessages;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)applicationLaunched;
- (id)_stateForMessage:(id)arg1 extra:(id)arg2 container:(id)arg3;
- (void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2;
- (void)copiedMessages:(id)arg1 toMailbox:(id)arg2;
- (void)deletedMessages:(id)arg1;
- (void)archivedMessages:(id)arg1;
- (void)movedMessages:(id)arg1 toMailboxType:(long long)arg2;
- (void)movedMessages:(id)arg1 toMailbox:(id)arg2;
- (void)messageListDisplayEndedForAllMessages;
- (void)messageListDisplayEndedForMessage:(id)arg1 cellStyle:(id)arg2;
- (void)messageListDisplayStartedForMessage:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4;
- (void)messageListDisplayVisibleRowsChanged:(_NSRange)arg1;
- (id)_range:(_NSRange)arg1 minusRange:(_NSRange)arg2;
- (void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2;
- (void)_logMessageListDisplayStartedMessage:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5;
- (void)viewingEndedForMessage:(id)arg1;
- (void)viewingStartedForMessage:(id)arg1;
- (void)scrolledToEndOfMessage:(id)arg1;
- (void)_composeStartedForMessage:(id)arg1 eventName:(id)arg2;
- (void)composedMessageSent:(id)arg1 account:(id)arg2;
- (void)composeFowardStartedForMessage:(id)arg1;
- (void)composeReplyStartedForMessage:(id)arg1;
- (void)logEvent:(id)arg1 date:(id)arg2 data:(id)arg3;
- (void)logEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4;
- (id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 eventLog:(id)arg3;

@end

