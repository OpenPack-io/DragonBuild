//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesDataSourceDelegate-Protocol.h>

@class HKAxis, HKGraphSeriesDataSource, HKPropertyAnimationApplier, HKValueRange, NSArray, NSMutableDictionary, NSUUID, UIColor, UIView;
@protocol HKAxisAccessoryViewDelegate, HKGraphSeriesAxisAnnotation, HKGraphSeriesAxisScalingRule, HKSeriesDelegate;

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate>
{
    BOOL _dirty;
    CDStruct_f3788345 _selectedPathRange;
    NSMutableDictionary *_cachedCoordinateListsByBlockPath;
    NSMutableDictionary *_cachedDataBlocksByBlockPath;
    HKValueRange *_closestXCoordinateRange;
    HKPropertyAnimationApplier *_animationApplier;
    HKValueRange *_visibleValueRange;
    BOOL _allowsSelection;
    BOOL _adjustYAxisForLabels;
    BOOL _animatingDuringAutoscale;
    BOOL _primarySeriesForAutoscale;
    BOOL _wantsRoundingDuringYRangeExpansion;
    HKGraphSeriesDataSource *_dataSource;
    NSArray *_titleLegendEntries;
    NSArray *_detailLegendEntries;
    id <HKSeriesDelegate> _delegate;
    id <HKGraphSeriesAxisAnnotation> _axisAnnotationDelegate;
    id <HKAxisAccessoryViewDelegate> _yAxisAccessoryViewDelegate;
    double _alpha;
    double _offscreenIndicatorAlpha;
    NSUUID *_UUID;
    id _context;
    HKAxis *_yAxis;
    id <HKGraphSeriesAxisScalingRule> _axisScalingRule;
    UIView *_cachedYAxisAccessoryView;
    UIColor *_offScreenIndicatorColor;
}

+ (void)drawInnerDotMarkerInContext:(CGContext )arg1 outColor:(CGColor )arg2 inColor:(CGColor )arg3 x:(double)arg4 y:(double)arg5 radius:(double)arg6;
+ (void)drawFilledMarkerInContext:(CGContext )arg1 color:(CGColor )arg2 x:(double)arg3 y:(double)arg4 radius:(double)arg5;
@property(retain, nonatomic) UIColor *offScreenIndicatorColor; // @synthesize offScreenIndicatorColor=_offScreenIndicatorColor;
@property(retain, nonatomic) UIView *cachedYAxisAccessoryView; // @synthesize cachedYAxisAccessoryView=_cachedYAxisAccessoryView;
@property(retain, nonatomic) id <HKGraphSeriesAxisScalingRule> axisScalingRule; // @synthesize axisScalingRule=_axisScalingRule;
@property(copy, nonatomic) HKAxis *yAxis; // @synthesize yAxis=_yAxis;
@property(nonatomic) BOOL wantsRoundingDuringYRangeExpansion; // @synthesize wantsRoundingDuringYRangeExpansion=_wantsRoundingDuringYRangeExpansion;
@property(nonatomic) BOOL primarySeriesForAutoscale; // @synthesize primarySeriesForAutoscale=_primarySeriesForAutoscale;
@property(readonly, nonatomic) BOOL animatingDuringAutoscale; // @synthesize animatingDuringAutoscale=_animatingDuringAutoscale;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) BOOL adjustYAxisForLabels; // @synthesize adjustYAxisForLabels=_adjustYAxisForLabels;
@property(nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) double offscreenIndicatorAlpha; // @synthesize offscreenIndicatorAlpha=_offscreenIndicatorAlpha;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) __weak id <HKAxisAccessoryViewDelegate> yAxisAccessoryViewDelegate; // @synthesize yAxisAccessoryViewDelegate=_yAxisAccessoryViewDelegate;
@property(nonatomic) __weak id <HKGraphSeriesAxisAnnotation> axisAnnotationDelegate; // @synthesize axisAnnotationDelegate=_axisAnnotationDelegate;
@property(nonatomic) __weak id <HKSeriesDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *detailLegendEntries; // @synthesize detailLegendEntries=_detailLegendEntries;
@property(retain, nonatomic) NSArray *titleLegendEntries; // @synthesize titleLegendEntries=_titleLegendEntries;
@property(retain, nonatomic) HKGraphSeriesDataSource *dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (CGRect)backgroundRectFromStringRect:(CGRect)arg1 forFont:(id)arg2;
- (void)drawRoundedRect:(CGRect)arg1 color:(id)arg2 context:(CGContext )arg3;
- (CGRect)adjustRect:(CGRect)arg1 forFont:(id)arg2;
- (BOOL)untransformedChartPointsForTimeScope:(long long)arg1 range:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)findVisibleBlockCoordinatesForChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5;
- (double)distanceFromTouchPoint:(CGPoint)arg1 inChartRect:(CGRect)arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(CGPoint)arg5 xAxisTransform:(CGAffineTransform)arg6;
- (void)deselectPath;
- (void)selectPathsinPathRange:(CDStruct_f3788345)arg1 coordinateRange:(id)arg2;
- (BOOL)isHighlighted;
- (id)closestXCoordinateRange;
- (CDStruct_f3788345)selectedPathRange;
- (void)layoutOverlayInteractiveViews:(id)arg1 seriesOverlayData:(id)arg2 overlayRect:(CGRect)arg3;
- (id)overlayInteractiveViewsWithDelegate:(id)arg1;
- (void)drawOverlayInContext:(CGContext )arg1 seriesOverlayData:(id)arg2;
- (id)overlayIdentifier;
- (long long)overlayType;
- (void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2;
- (id)marginsForYAxis:(id)arg1 chartRect:(CGRect)arg2;
- (BOOL)supportsMultiTouchSelection;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContext )arg5 secondaryRenderContext:(id)arg6;
- (void)clearCaches;
- (id)_dataBlockForBlockPath:(CDStruct_6ca94699)arg1;
- (id)_coordinatesForBlockPath:(CDStruct_6ca94699)arg1 xAxis:(id)arg2;
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(CDStruct_6ca94699)arg2;
- (id)_cachedCoordinatesForBlockPath:(CDStruct_6ca94699)arg1;
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3;
- (void)_enumeratePathIndexesInValueRange:(id)arg1 zoomLevel:(long long)arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(CGRect)arg3 contentOffset:(CGPoint)arg4;
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(CGRect)arg2 contentOffset:(CGPoint)arg3 zoomScale:(double)arg4;
- (void)_setDirtyWithNewData:(BOOL)arg1;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (BOOL)configureYAxisAccessoryViewForDateRange:(id)arg1 timeScope:(long long)arg2;
- (UIEdgeInsets)yAxisAccessoryViewEdgeInsets;
- (CGSize)yAxisAccessoryViewSize;
- (void)enumerateCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 roundToViewScale:(BOOL)arg6 exclusionOptions:(long long)arg7 block:(id /* CDUnknownBlockType */)arg8;
- (BOOL)containsCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5;
- (CGAffineTransform)coordinateTransformForChartRect:(CGRect)arg1 xAxisTransform:(CGAffineTransform)arg2;
- (void)drawWithChartRect:(CGRect)arg1 seriesCoordinates:(id)arg2 zoomLevelConfiguration:(id)arg3 coordinateTransform:(CGAffineTransform)arg4 inContext:(CGContext )arg5 secondaryRenderContext:(id)arg6;
- (CGAffineTransform)coordinateTransformFromXAxisTransform:(CGAffineTransform)arg1 chartRect:(CGRect)arg2;
- (id)seriesCoordinatesWithXAxis:(id)arg1 chartRect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4;
- (BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(CGRect)arg1 blockCoordinate:(id)arg2;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3;
- (UIEdgeInsets)virtualMarginInsets;
- (id)valueRangeForYAxisWithXAxisRange:(id)arg1 dateZoom:(long long)arg2 chartRect:(CGRect)arg3;
- (id)_expandYRange:(id)arg1 withXRange:(id)arg2 dateZoom:(long long)arg3 chartRect:(CGRect)arg4;
- (void)cancelInFlightAutoscale;
- (void)autoscaleYAxisWithYAxisRange:(id)arg1 chartRect:(CGRect)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)autoscaleYAxisWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(CGRect)arg5 animated:(BOOL)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(CGRect)arg5;
- (BOOL)shouldInvertAxis;
- (id)visibleValueRange;
- (void)dealloc;
- (id)init;

@end

