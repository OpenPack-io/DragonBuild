//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNClassicGuidanceManager.h>

__attribute__((visibility("hidden")))
@interface MNDriveGuidanceManager : MNClassicGuidanceManager
{
    int _currentContinuePhase;
}

- (int)transportType;
- (BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2;
- (BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2;
- (void)_updatePrepareForNextStep;
- (id)_nameInfoForContinueSign;
- (double)_distanceForSign;
- (int)_continuePhase;
- (const CDStruct_39925896 )_announceSettings;
- (void)_resetStepState;

@end

