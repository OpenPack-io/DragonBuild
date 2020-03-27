//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SBFluidSwitcherScrollProvidingDelegate;

@protocol SBFluidSwitcherScrollProviding <NSObject>
@property(nonatomic) __weak id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;
- (BOOL)cardsNeedBackgroundWallpaperTreatment;
- (void)resetAdjustedScrollingState;
- (CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double )arg5 verticalVelocity:(inout double )arg6;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(NSUInteger)arg1;
- (CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2;
- (CGPoint)contentOffsetForIndex:(NSUInteger)arg1 centered:(BOOL)arg2;
- (CGSize)fittedContentSize;
- (CGSize)contentSize;
- (double)cardCornerRadiusInSwitcher;
- (double)centerYOffsetWhenPresented;
- (BOOL)interpolatesDuringSwipeToKill;
- (double)minimumTranslationToKillIndex:(NSUInteger)arg1;
- (CGPoint)pagingOrigin;
- (CGSize)interpageSpacingForPaging;
- (NSUInteger)scrollAxis;
- (BOOL)scrollViewPagingEnabled;
- (double)decelerationRate;
- (double)switcherCardScale;
- (double)snapshotScale;
@end

