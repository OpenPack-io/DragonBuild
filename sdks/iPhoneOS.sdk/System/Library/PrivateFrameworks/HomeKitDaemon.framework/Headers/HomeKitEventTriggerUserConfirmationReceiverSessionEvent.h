//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitEventTriggerUserConfirmationReceiverSession, NSDate;

@interface HomeKitEventTriggerUserConfirmationReceiverSessionEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitEventTriggerUserConfirmationReceiverSession *_metric;
    NSDate *_startTime;
}

+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) AWDHomeKitEventTriggerUserConfirmationReceiverSession *metric; // @synthesize metric=_metric;
// - (void).cxx_destruct;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;

@end

