//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionTarget.h>

@interface _CNUIUserActionTelephonyVoiceTarget : CNUIUserActionTarget
{
}

- (id)TTYRelayCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)TTYCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)phoneCallActionWithDestinationID:(id)arg1 contactProperty:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)ttyActionsFutureForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)ttyActionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)init;

@end

