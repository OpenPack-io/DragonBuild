//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthMenstrualCycles/HKMCDaySummaryObserverQueryClientInterface-Protocol.h>

@interface HKMCDaySummaryObserverQuery : HKQuery <HKMCDaySummaryObserverQueryClientInterface>
{
    id /* CDUnknownBlockType */ _updateHandler;
}

+ (id)clientInterfaceProtocol;
// - (void).cxx_destruct;
- (void)queue_queryDidDeactivate:(id)arg1;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)queue_deliverError:(id)arg1;
- (void)client_deliverUpdateWithQueryUUID:(id)arg1;
- (id)initWithUpdateHandler:(id /* CDUnknownBlockType */)arg1;

@end

