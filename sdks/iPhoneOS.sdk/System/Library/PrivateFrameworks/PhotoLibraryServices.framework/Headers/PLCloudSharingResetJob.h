//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingResetJob : PLCloudSharingJob
{
}

+ (void)resetAllLocalState;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;

@end

