//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKZoomScale-Protocol.h>

@class HKValueRange;

@interface HKDateZoomScale : NSObject <HKZoomScale>
{
    double _previousZoomScale;
    long long _previousZoom;
    HKValueRange *_unitZoomScaleValueRange;
}

// - (void).cxx_destruct;
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (id)unitZoomScaleValueRange;
- (double)zoomScaleForRange:(struct HKRange)arg1;
- (long long)zoomForZoomScale:(double)arg1;
- (id)maxDate;
- (id)minDate;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;

@end

