//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSPortDeathSentinel.h>

@interface BSPortDeathWatcher : BSPortDeathSentinel
{
}

- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(id /* CDUnknownBlockType */)arg3;
- (id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(id /* CDUnknownBlockType */)arg3;

@end

