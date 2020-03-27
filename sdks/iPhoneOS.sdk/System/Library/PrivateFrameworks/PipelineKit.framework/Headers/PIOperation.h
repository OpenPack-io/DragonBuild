//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSMutableArray, NSString, PIGroup, PIPipeline;
@protocol OS_dispatch_group, OS_dispatch_source;

@interface PIOperation : NSObject
{
    NSObject<OS_dispatch_group> *_operationGroup;
    double _executionRateLimit;
    PIGroup *_group;
    NSString *_identifier;
    id _key;
    NSString *_information;
    id _context;
    long long _priority;
    long long _qualityOfService;
    long long _concurrencyLimit;
    NSUInteger _state;
    BOOL _cancelled;
    NSError *_error;
    float _progress;
    NSUInteger _waitingTimeout;
    NSUInteger _executionTimeout;
    NSUInteger _wallTimeout;
    NSObject<OS_dispatch_source> *_waitingTimeoutTimer;
    NSObject<OS_dispatch_source> *_executionTimeoutTimer;
    NSObject<OS_dispatch_source> *_wallTimeoutTimer;
    id /* CDUnknownBlockType */ _executionBlock;
    id /* CDUnknownBlockType */ _progressBlock;
    id /* CDUnknownBlockType */ _cancellationBlock;
    id /* CDUnknownBlockType */ _completionBlock;
    NSMutableArray *_dependencies;
    NSMutableArray *_subOperations;
    PIOperation *_mainOperation;
    PIPipeline *_subPipeline;
    double _timestampStart;
    double _timestampReady;
    double _timestampCancelling;
    double _timestampExecuting;
    double _timestampFinish;
    BOOL _needsToRetry;
    NSUInteger _retryCount;
}

+ (id)_stringForQualityOfService:(long long)arg1;
+ (id)_stringForPriority:(long long)arg1;
+ (id)_stringForState:(NSUInteger)arg1;
+ (id)operationWithExecutionBlock:(id /* CDUnknownBlockType */)arg1;
+ (id)operation;
@property(readonly) NSUInteger retryCount; // @synthesize retryCount=_retryCount;
@property BOOL needsToRetry; // @synthesize needsToRetry=_needsToRetry;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ cancellationBlock; // @synthesize cancellationBlock=_cancellationBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ executionBlock; // @synthesize executionBlock=_executionBlock;
@property(retain) NSError *error; // @synthesize error=_error;
@property NSUInteger state; // @synthesize state=_state;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *information; // @synthesize information=_information;
@property(copy, nonatomic) id key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak PIGroup *group; // @synthesize group=_group;
// - (void).cxx_destruct;
- (id)description;
- (void)performSubOperationsAsynchronously:(id)arg1 waitUntilFinishedUsingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)performSubOperationSynchronously:(id)arg1 error:(id )arg2;
- (id)performSynchronously:(BOOL)arg1 error:(id )arg2;
- (id)performSynchronously;
- (void)_performOperationSynchronously;
- (void)_finishSynchronousOperation:(id)arg1;
- (void)_cleanup;
- (void)_didFinish;
- (void)_willFinish;
- (void)_willRetry;
- (void)_willExecute;
- (void)_prepare;
- (void)_cancel;
- (BOOL)hasSucceeded;
- (BOOL)shouldContinue;
- (BOOL)isActive;
- (double)wallTime;
- (double)executionTime;
- (double)cancellationTime;
- (double)waitingTime;
- (void)removeDependencies:(id)arg1;
- (void)addDependencies:(id)arg1;
- (void)waitUntilFinishedUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)cancel:(id /* CDUnknownBlockType */)arg1;
@property(readonly, getter=isFinished) BOOL finished;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (id)subPipeline;
- (id)executingQueue;
@property float progress; // @synthesize progress=_progress;
- (void)updateProgress;
- (id)mainOperation;
- (id)subOperations;
@property(readonly, copy) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property NSUInteger wallTimeout; // @synthesize wallTimeout=_wallTimeout;
@property NSUInteger executionTimeout; // @synthesize executionTimeout=_executionTimeout;
@property NSUInteger waitingTimeout; // @synthesize waitingTimeout=_waitingTimeout;
@property double executionRateLimit; // @synthesize executionRateLimit=_executionRateLimit;
- (long long)executionQualityOfService;
@property long long concurrencyLimit; // @synthesize concurrencyLimit=_concurrencyLimit;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property long long priority; // @synthesize priority=_priority;
- (void)dealloc;
- (id)init;

@end

