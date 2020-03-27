//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXChangeDirectionNumberFilter, PXInitialHysteresisNumberFilter;

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject
{
    BOOL _didHandleInitialPinch;
    PXInitialHysteresisNumberFilter *_initialDirectionFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    double _lastDirection;
    BOOL _isTrackingPinch;
}

@property(readonly, nonatomic) BOOL isTrackingPinch; // @synthesize isTrackingPinch=_isTrackingPinch;
// - (void).cxx_destruct;
- (void)reset;
- (void)filterPinchGestureWithScale:(double)arg1 initialPinchHandler:(id /* CDUnknownBlockType */)arg2 subsequentDirectionChangeHandler:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end

