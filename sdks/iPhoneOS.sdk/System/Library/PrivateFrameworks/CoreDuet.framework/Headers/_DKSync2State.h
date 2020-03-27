//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _DKSyncCompositeOperation, _DKSyncType;

@interface _DKSync2State : NSObject
{
    BOOL _isPending;
    _DKSyncType *_type;
    _DKSyncCompositeOperation *_parent;
    NSMutableArray *_completions;
}

@property(retain) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain) _DKSyncCompositeOperation *parent; // @synthesize parent=_parent;
@property(retain) _DKSyncType *type; // @synthesize type=_type;
@property BOOL isPending; // @synthesize isPending=_isPending;
// - (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)mergeType:(id)arg1;
- (void)addCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithType:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;

@end

