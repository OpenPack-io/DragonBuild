//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisReferenceLineStyle : NSObject
{
    TSCHChartAxisID *mAxisIdentifier;
    NSArray *mReferenceLineStyles;
}

@property(copy, nonatomic) NSArray *referenceLineStyles; // @synthesize referenceLineStyles=mReferenceLineStyles;
@property(copy, nonatomic) TSCHChartAxisID *axisIdentifier; // @synthesize axisIdentifier=mAxisIdentifier;
// - (void).cxx_destruct;
- (void)didInitFromSOS;

@end

