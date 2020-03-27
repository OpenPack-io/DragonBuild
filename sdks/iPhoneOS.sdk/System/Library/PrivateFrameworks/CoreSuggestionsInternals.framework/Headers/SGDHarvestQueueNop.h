//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@interface SGDHarvestQueueNop : SGDHarvestQueue
{
}

- (void)close;
- (void)countHighPriorityItems:(NSUInteger )arg1 lowPriorityItems:(NSUInteger )arg2;
- (NSUInteger)count;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
- (void)popByItemId:(long long)arg1 callback:(id /* CDUnknownBlockType */)arg2;
- (void)pop:(id /* CDUnknownBlockType */)arg1;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 item:(id)arg4 callback:(id /* CDUnknownBlockType */)arg5;

@end

