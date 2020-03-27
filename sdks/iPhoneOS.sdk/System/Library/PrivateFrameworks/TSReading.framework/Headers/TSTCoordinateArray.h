//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject
{
    unsigned int mOffset;
    unsigned int mCount;
    double mCoordinates;
    double mAverage;
    NSMutableIndexSet *mVisibleIndices;
    BOOL mLayoutDirectionIsLeftToRight;
    double mTableWidth;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)hasRightToLeftOrderingWithWidth:(double)arg1;
- (id)initWithCount:(unsigned int)arg1 atOffset:(unsigned int)arg2;

@end

