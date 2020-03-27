//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH2DChartType.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartType : TSCH2DChartType
{
}

+ (id)allAnimationFilters;
+ (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 )arg1 chartType:(id)arg2 barShape:(int)arg3;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsIncrementalResize;
- (BOOL)needsRefinementForInwardLayout;
- (NSUInteger)depthRatioDimension;
- (double)spiceMaxDepthRatio;
- (double)sageMaxDepthRatio;
- (double)maxDepthRatio;
- (double)minDepthRatio;
- (CGSize)minimumChartBodySizeForTransformingGeometry;
- (CGSize)minimumChartBodySize;
- (id)columnShapeUIName;
- (BOOL)supportsInterSetDepthGap;
- (BOOL)supportsColumnShape;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsShadowOffset;
- (BOOL)supportsBevels;
- (BOOL)isHomogeneous;
- (id)renderers;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (id)sceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
- (Class)stageClass;
- (id)categoryLabelPositioner;
- (id)valueLabelPositioner;
- (int)labelOrientation;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (id)animationFilters;
- (BOOL)supportsAxisLabelAngle;
- (BOOL)supportsBubbleOptions;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSeriesShadow;
- (BOOL)supportsErrorBars;
- (BOOL)supportsTrendLines;
- (BOOL)supportsCategoryAxisMinorTickmarks;
- (BOOL)supportsTickmarks;
- (BOOL)supportsAxisLine;
- (BOOL)supportsAxisLabelsOrientation;
- (BOOL)supportsValueAxisLabelsPosition;
- (BOOL)supportsMinorGridlines;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBackgroundFill;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (int)chartBodyBoundsDefinition;
- (Class)presetImagerClass;
- (Class)sageGeometeryHelperClass;
- (Class)repClass;
- (Class)layoutClass;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (NSUInteger)presentationDimension;
- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 )arg1 barShape:(int)arg2;
- (BOOL)layoutFrameShouldEncloseInfoGeometry;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;

@end

