//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStroke-Protocol.h>

@class NSString, PKStroke, PKStrokeProviderSliceIdentifier;
@protocol CHStrokeIdentifier;

@interface PKStrokeProviderSlice : NSObject <CHStroke>
{
    PKStrokeProviderSliceIdentifier *_identifier;
    PKStroke *_stroke;
    CGRect _bounds;
}

@property(readonly, nonatomic) PKStroke *stroke; // @synthesize stroke=_stroke;
@property(readonly, nonatomic) PKStrokeProviderSliceIdentifier *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (double)_strokeLength;
- (double)_lengthOfSplineSegment:(NSUInteger)arg1;
- (double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2;
- (CGPoint)_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2;
- (CGPoint)_splineControlPoint:(long long)arg1;
- (long long)compareTo:(id)arg1;
@property(readonly, nonatomic) double endTimestamp;
@property(readonly, nonatomic) double startTimestamp;
@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, retain, nonatomic) id <CHStrokeIdentifier> strokeIdentifier;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithStroke:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3;

@end

