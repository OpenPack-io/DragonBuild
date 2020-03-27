//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOComposedRoute, GEOComposedTransitTripRouteLeg, NSArray;

@protocol GEOComposedRouteObserver <NSObject>
- (void)composedRoute:(GEOComposedRoute *)arg1 appliedTransitRouteUpdates:(NSArray *)arg2;
- (void)composedRoute:(GEOComposedRoute *)arg1 changedSelectedRideInClusteredLeg:(GEOComposedTransitTripRouteLeg *)arg2 fromIndex:(NSUInteger)arg3 toIndex:(NSUInteger)arg4;
- (void)composedRoute:(GEOComposedRoute *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg1;
@end

