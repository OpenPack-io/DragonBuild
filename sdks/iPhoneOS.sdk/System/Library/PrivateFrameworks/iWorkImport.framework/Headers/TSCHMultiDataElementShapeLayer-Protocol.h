//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, TSCHChartSeries, TSCHMultiDataLayerAnimationInfo, TSDFill, TSDStroke;

@protocol TSCHMultiDataElementShapeLayer
- (void)updateElementFrameToNullForSeries:(TSCHChartSeries *)arg1 addingAnimationsToAnimationInfo:(TSCHMultiDataLayerAnimationInfo *)arg2;
- (CALayer *)currentValueLayer;
- (BOOL)aboveIntercept;
- (void)updateElementFrame:(CGRect)arg1 forSeries:(TSCHChartSeries *)arg2 addingAnimationsToAnimationInfo:(TSCHMultiDataLayerAnimationInfo *)arg3;
- (void)setFill:(TSDFill *)arg1 stroke:(TSDStroke *)arg2 withViewScale:(double)arg3;
@end

