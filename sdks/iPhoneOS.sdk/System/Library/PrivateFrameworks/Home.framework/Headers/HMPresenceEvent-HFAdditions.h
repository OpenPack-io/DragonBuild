//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMPresenceEvent.h>

#import <Home/HFLocationBasedEvent-Protocol.h>

@interface HMPresenceEvent (HFAdditions) <HFLocationBasedEvent>
+ (NSUInteger)hf_presenceDisableReasonsForHome:(id)arg1;
+ (NSUInteger)hf_locationEventTypeForPresenceEventType:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger hf_eventType;
@property(readonly, nonatomic) NSUInteger hf_activationGranularity;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
@end

