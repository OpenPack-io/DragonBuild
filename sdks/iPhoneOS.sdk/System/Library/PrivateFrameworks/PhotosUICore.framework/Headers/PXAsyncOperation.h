//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSLock;

@interface PXAsyncOperation : NSOperation
{
    NSLock *_stateLock;
    int _operationState;
}

// - (void).cxx_destruct;
- (void)px_finishIfPossible;
- (void)px_start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)start;
- (BOOL)isAsynchronous;
- (id)init;

@end

