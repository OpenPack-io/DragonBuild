//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedRouteTransitTripSection.h>

@interface GEOComposedRouteTransitTripSection (RenderRegion)
- (id)unsnappedPathsInOverlay:(id)arg1;
- (id)pathsForRenderRegion:(id)arg1 inOverlay:(id)arg2 shouldSnapToTransit:(BOOL)arg3 verifySnapping:(BOOL)arg4;
- (BOOL)_validateSnappedPaths:(id)arg1 snappedTileBounds:(const Box_3d7e3c2c )arg2 overlay:(id)arg3;
- (BOOL)_getEndPoints:(id)arg1 rect:(const Box_3d7e3c2c )arg2 result:(array_39cc276d )arg3;
@end

