//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/RBPowerAssertion.h>

@class RBSystemState;

__attribute__((visibility("hidden")))
@interface RBSystemPowerAssertion : RBPowerAssertion
{
    RBSystemState *_state;
}

@property(copy, nonatomic) RBSystemState *state; // @synthesize state=_state;
// - (void).cxx_destruct;
- (int)_targetPid;
- (id)_preventIdleSleepIdentifiers;
- (id)init;

@end

