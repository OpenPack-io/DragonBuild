//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SYBatchSyncChunk;

__attribute__((visibility("hidden")))
@interface _SYIncomingBatch : NSObject
{
    SYBatchSyncChunk *_batch;
    id /* CDUnknownBlockType */ _completion;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SYBatchSyncChunk *batch; // @synthesize batch=_batch;
// - (void).cxx_destruct;

@end

