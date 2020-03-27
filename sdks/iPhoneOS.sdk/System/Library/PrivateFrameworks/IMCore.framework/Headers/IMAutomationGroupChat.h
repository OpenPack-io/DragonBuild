//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMCoreAutomationHook.h>

@interface IMAutomationGroupChat : IMCoreAutomationHook
{
}

- (id)groupNameWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id )arg3 optArguments:(id)arg4;
- (id)groupParticipantsWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id )arg3 optArguments:(id)arg4;
- (id)changeGroupNameWithGroupID:(id)arg1 newName:(id)arg2 timeOut:(double)arg3 error:(id )arg4 optArguments:(id)arg5;
- (id)removeParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id )arg4 optArguments:(id)arg5;
- (id)addParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id )arg4 optArguments:(id)arg5;
- (id)_runChangeParticipantsQueryWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id )arg4 optArguments:(id)arg5 addParticipants:(BOOL)arg6;
- (id)createGroupChatWithDestinationIDs:(id)arg1 error:(id )arg2 optArguments:(id)arg3;

@end

