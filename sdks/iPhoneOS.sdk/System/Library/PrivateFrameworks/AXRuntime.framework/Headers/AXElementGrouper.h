//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AXElementGrouper : NSObject
{
    double _thresholdForDeterminingEqualSize;
    long long _heuristics;
}

@property(nonatomic) long long heuristics; // @synthesize heuristics=_heuristics;
- (id)_groupablesForItems:(id)arg1;
- (id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(NSUInteger )arg2;
- (id)_applyTransformationPassesToRootGroup:(id)arg1;
- (id)_applyTransformationPass:(id)arg1 toGroup:(id)arg2;
- (id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2;
- (BOOL)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2;
- (id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2;
- (id)groupElementsInRootGroup:(id)arg1;
@property(readonly, nonatomic) NSArray *transformationPasses;
@property(readonly, nonatomic) double thresholdForDeterminingEqualSize; // @synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize;
@property(readonly, nonatomic) NSUInteger preferredGroupSize;
@property(readonly, nonatomic) NSUInteger maximumGroupSize;
@property(readonly, nonatomic) NSUInteger minimumGroupSize;
- (id)initWithHeuristics:(long long)arg1;
- (id)init;

@end

