//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBFObliterationController : NSObject
{
}

+ (id)sharedInstance;
- (void)markObliterationStart;
- (void)obliterateDataPartitionShowingProgress:(BOOL)arg1 skipDataObliteration:(BOOL)arg2 eraseDataPlan:(BOOL)arg3 reason:(id)arg4;
- (void)wipeAndBrickShowingProgress:(BOOL)arg1 reason:(id)arg2;

@end

