//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject
{
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

// - (void).cxx_destruct;
- (id)_dataclassOwnersManagerConnection;
- (BOOL)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id )arg4;
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id )arg3;
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id )arg3;
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id )arg3;
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id )arg3;
- (BOOL)isPerformingDataclassActionsForAccount:(id)arg1;
- (void)preloadDataclassOwnersWithError:(id )arg1;
- (id)init;

@end

