//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSTCellRegion, TSTMergeListWrapper;

@protocol TSTLayoutDynamicContentProtocol <NSObject>
- (BOOL)dynamicContentMustDrawOnMainThread;
- (BOOL)cell:(id )arg1 forCellID:(struct TSUCellCoord)arg2;

@optional
- (TSTMergeListWrapper *)mergesIntersectingCellRegion:(TSTCellRegion *)arg1;
- (BOOL)mergeRange:(struct TSUCellRect )arg1 forCellID:(struct TSUCellCoord)arg2;
@end

