//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBSynchronizedTransaction-Protocol.h>
#import <FrontBoard/FBSynchronizedTransactionDelegate-Protocol.h>

@class NSMutableSet;
@protocol FBSynchronizedTransactionDelegate, FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate>
{
    BOOL _commitAllowed;
    BOOL _readyForCommit;
    BOOL _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
    id <FBSynchronizedTransactionGroupDelegate> _synchronizationDelegate;
}

@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
// - (void).cxx_destruct;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)performSynchronizedCommit;
- (BOOL)isReadyForSynchronizedCommit;
- (void)_performSynchronizedCommitIfReady;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (BOOL)_shouldFailForChildTransaction:(id)arg1;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)addSynchronizedTransaction:(id)arg1;
- (id)synchronizedTransactions;
- (id)init;

@end

