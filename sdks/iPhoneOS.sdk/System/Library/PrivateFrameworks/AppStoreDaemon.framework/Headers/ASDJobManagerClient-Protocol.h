//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSDictionary;

@protocol ASDJobManagerClient <NSObject>
- (void)didUpdateStates:(NSDictionary *)arg1;
- (void)didUpdateProgress:(NSDictionary *)arg1;
- (void)didCompleteJobs:(NSArray *)arg1 finalPhases:(NSDictionary *)arg2;
- (void)didChangeJobs:(NSArray *)arg1;
@end

