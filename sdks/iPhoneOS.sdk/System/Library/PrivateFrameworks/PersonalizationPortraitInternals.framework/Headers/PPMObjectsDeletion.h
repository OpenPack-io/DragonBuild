//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMObjectsDeletion : NSObject
{
    PETDistributionEventTracker *_tracker;
}

@property(readonly, nonatomic) PETDistributionEventTracker *tracker; // @synthesize tracker=_tracker;
// - (void).cxx_destruct;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMObjectDonationSource_)arg2 component:(struct PPMPortraitComponent_)arg3 error:(struct PPMTypeSafeBool_)arg4;
- (id)init;

@end

