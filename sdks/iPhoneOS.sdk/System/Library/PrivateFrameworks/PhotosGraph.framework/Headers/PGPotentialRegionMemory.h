//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSDate, NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialRegionMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_regionNode;
    long long _year;
    NSArray *_scenedAssets;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSArray *scenedAssets; // @synthesize scenedAssets=_scenedAssets;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *regionNode; // @synthesize regionNode=_regionNode;
// - (void).cxx_destruct;
@property(readonly) NSString *region;
- (void)addMomentNode:(id)arg1;
- (id)initWithRegionNode:(id)arg1 year:(long long)arg2;

@end

