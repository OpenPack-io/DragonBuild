//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PXProgrammaticNavigationDestination;
@protocol PXProgrammaticNavigationParticipant;

@protocol PXProgrammaticNavigationParticipant <NSObject>
- (id <PXProgrammaticNavigationParticipant>)nextExistingParticipantOnRouteToDestination:(PXProgrammaticNavigationDestination *)arg1;
- (void)navigateToDestination:(PXProgrammaticNavigationDestination *)arg1 options:(NSUInteger)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
- (BOOL)canRouteToDestination:(PXProgrammaticNavigationDestination *)arg1;
@end

