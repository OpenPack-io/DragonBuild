//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDAbstractLayout.h>

@class NSArray, NSMutableSet, NSObject, NSSet, TSDInfoGeometry, TSDLayoutGeometry, TSDStroke, TSUBezierPath;
@protocol TSDInfo;

__attribute__((visibility("hidden")))
@interface TSDLayout : TSDAbstractLayout
{
    NSObject<TSDInfo> *mInfo;
    int mLayoutState;
    CGPoint mBaseAlignmentFrameOriginForFixingInterimPosition;
    CGRect mDirtyRect;
    CDStruct_6196388c mInvalidFlags;
    TSDLayoutGeometry *mBaseGeometry;
    CGRect mInitialBoundsForStandardKnobs;
    CGPoint mCapturedInfoGeometryPositionForAttached;
    CGPoint mCapturedAlignmentFrameOriginForAttached;
    NSMutableSet *mConnectedLayouts;
    CGSize mMaximumInlineFrameSize;
}

@property(nonatomic) CGSize maximumInlineFrameSize; // @synthesize maximumInlineFrameSize=mMaximumInlineFrameSize;
@property(readonly, nonatomic) NSSet *connectedLayouts; // @synthesize connectedLayouts=mConnectedLayouts;
@property(readonly, nonatomic) int layoutState; // @synthesize layoutState=mLayoutState;
@property(readonly, nonatomic) TSDLayoutGeometry *originalGeometry; // @synthesize originalGeometry=mBaseGeometry;
@property(readonly, nonatomic) NSObject<TSDInfo> *info; // @synthesize info=mInfo;
- (CGRect)convertNaturalRectToUnscaledCanvas:(CGRect)arg1;
- (CGRect)convertNaturalRectFromUnscaledCanvas:(CGRect)arg1;
- (CGPoint)convertNaturalPointFromUnscaledCanvas:(CGPoint)arg1;
- (void)p_invalidateConnectedLayouts;
- (void)removeConnectedLayout:(id)arg1;
- (void)addConnectedLayout:(id)arg1;
- (BOOL)allowsConnections;
- (id)layoutForSelectionPath:(id)arg1;
- (BOOL)selectionMustBeEntirelyOnscreenToCountAsVisibleInSelectionPath:(id)arg1;
- (BOOL)canvasShouldScrollForSelectionPath:(id)arg1;
- (BOOL)containsStartOfPencilAnnotation:(id)arg1;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (id)containedPencilAnnotationsIncludingChildren:(BOOL)arg1;
- (id)containedPencilAnnotations;
- (id)pageAnchorDetailsForPencilAnnotationAtSelectionPath:(id)arg1 attachedType:(long long)arg2;
- (id)unscaledContentRectsToAvoidPencilAnnotationOverlap;
- (double)percentOfUnscaledRectContainedInParentRep:(CGRect)arg1;
- (CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (CGRect)rectInRootForZoomingToSelectionPath:(id)arg1;
- (CGRect)rectInRootForSelectionPath:(id)arg1;
- (CGRect)rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (CGSize)p_newMaxInlineFrameSize;
- (void)p_recursiveInvalidate;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (void)p_registerWithLayoutController:(id)arg1;
@property(readonly, nonatomic) TSUBezierPath *pathForClippingConnectionLines;
- (id)i_wrapPath;
- (CGRect)i_takeDirtyRect;
- (void)recursivelyAddLayoutAndChildrenToSet:(id)arg1;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
@property(readonly, nonatomic) BOOL needsToValidateChildrenForInlineLayout;
@property(readonly, nonatomic) double inlineCenteredAlignmentHorizontalOffset;
@property(readonly, nonatomic) double descentForInlineLayout;
@property(readonly, nonatomic) NSSet *additionalGuides;
@property(readonly, nonatomic) BOOL shouldProvideSizingGuides;
@property(readonly, nonatomic) BOOL shouldDisplayGuides;
- (void)updateLayoutGeometryInPreparationForPartitioning;
- (BOOL)allowIntersectionOfChildLayout:(id)arg1;
- (BOOL)orderedBefore:(id)arg1;
- (CGSize)maximumFrameSizeForChild:(id)arg1;
@property(readonly, nonatomic) NSArray *additionalLayoutsForRepCreation;
@property(readonly, nonatomic) NSSet *reliedOnLayouts;
@property(readonly, nonatomic) NSArray *dependentLayouts;
@property(readonly, nonatomic) CGPoint commentPoleUnscaledOffset;
- (void)calculateAndSetPointsToSearchReference:(id)arg1;
- (CGPoint)activityLineUnscaledEndPointForSearchReference:(id)arg1;
- (CGPoint)calculatePointFromSearchReference:(id)arg1;
- (CGRect)rectInRootForCalculatingActivityLineEndpoint;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (double)scaleForInlineClampingUnrotatedSize:(CGSize)arg1 withTransform:(CGAffineTransform)arg2;
- (id)computeLayoutGeometry;
- (id)computeInfoGeometryDuringResize;
@property(readonly, nonatomic) CGPoint centerForConnecting;
@property(readonly, nonatomic) CGPoint centerForRotation;
@property(readonly, nonatomic) CGRect boundsForStandardKnobs;
@property(readonly, nonatomic, getter=isDraggable) BOOL draggable;
@property(readonly, nonatomic, getter=isSelectable) BOOL selectable;
- (void)validateFromLastInterimPosition;
- (void)p_calculateClampModelValuesWithAdditionalTransform:(CGAffineTransform)arg1 andPerformBlock:(id /* CDUnknownBlockType */)arg2;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(CGAffineTransform)arg2 assertIfInDocument:(BOOL)arg3;
- (void)dynamicOverrideDidChange;
@property(readonly, nonatomic) NSObject *dynamicOverride;
@property(readonly, nonatomic) BOOL canFlip;
@property(readonly, nonatomic) CGAffineTransform originalPureTransformInRoot;
@property(readonly, nonatomic) CGAffineTransform pureTransformInRoot;
@property(readonly, nonatomic) BOOL canInspectGeometry;
@property(readonly, nonatomic) TSDLayoutGeometry *inspectorGeometry;
- (CGAffineTransform)p_additionalTransformForInlineRoot;
@property(readonly, nonatomic) TSDLayoutGeometry *pureGeometryInParent;
@property(readonly, nonatomic) TSDLayoutGeometry *pureGeometryInRoot;
@property(readonly, nonatomic) TSDLayoutGeometry *pureGeometry;
@property(readonly, nonatomic) TSDLayoutGeometry *originalPureGeometry;
@property(readonly, nonatomic) TSDInfoGeometry *initialInfoGeometry;
@property(readonly, nonatomic) CGRect initialBoundsForStandardKnobs;
@property(readonly, nonatomic) BOOL isBeingManipulated;
@property(readonly, nonatomic) TSDInfoGeometry *finalInfoGeometryForResize;
- (void)endResize;
- (void)takeSizeFromTracker:(id)arg1;
- (void)resizeWithTransform:(CGAffineTransform)arg1;
- (CGSize)minimumSizeForResizingKnob:(id)arg1;
@property(readonly, nonatomic) CGSize minimumSize;
- (void)beginResize;
@property(readonly, nonatomic) BOOL canAspectRatioLockBeChangedByUser;
@property(readonly, nonatomic) BOOL resizeMayChangeAspectRatio;
- (void)endRotate;
- (void)takeRotationFromTracker:(id)arg1;
- (void)beginRotate;
@property(readonly, nonatomic) BOOL shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (CGAffineTransform)layoutTransformInInfoSpace:(CGAffineTransform)arg1;
@property(readonly, nonatomic) CGAffineTransform originalTransformForProvidingGuides;
@property(readonly, nonatomic) CGAffineTransform originalTransformInRoot;
- (void)endDrag;
- (void)dragBy:(CGPoint)arg1;
- (void)dragByUnscaled:(CGPoint)arg1;
- (void)beginDrag;
@property(readonly, nonatomic) BOOL isBeingTransformed;
- (void)pauseDynamicTransformation;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(double)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
@property(readonly, nonatomic) BOOL isStrokeBeingManipulated;
@property(readonly, nonatomic) TSDStroke *stroke;
@property(readonly, nonatomic) BOOL isInTopLevelContainerForEditing;
@property(readonly, nonatomic) BOOL isInGroup;
@property(readonly, nonatomic) BOOL shouldBeDisplayedInShowMode;
@property(readonly, nonatomic) Class repClassOverride;
- (void)processChanges:(id)arg1;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (id)layoutGeometryFromInfo;
- (CGPoint)capturedInfoPositionForAttachment;
- (void)validate;
@property(readonly, nonatomic) BOOL invalidGeometry;
- (id)layoutController;
- (id)rootLayout;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
@property(readonly, nonatomic) BOOL parentAutosizes;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (void)setParent:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)updateChildrenFromInfo;
- (void)invalidateChildren;
- (id)wrapInvalidationParent;
- (void)invalidateExteriorWrap;
- (BOOL)childLayoutIsCurrentlyHiddenWhileManipulating:(id)arg1;
- (void)updateMaximumInlineFrameSize;
- (void)invalidateTextScalePercent;
- (void)invalidateInlineSize;
- (void)invalidateFrame;
- (void)invalidateSize;
- (void)invalidatePosition;
- (void)invalidate;
@property(readonly, nonatomic) BOOL shouldValidate;
@property(copy, nonatomic) TSDLayoutGeometry *dynamicGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (void)setAdjustedInterimPositionY:(double)arg1;
- (void)setAdjustedInterimPositionX:(double)arg1;

@end

