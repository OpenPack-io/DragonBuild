//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, VKPolylineOverlay, VKPolylineOverlayRenderRegion;
@protocol VKRouteLineObserverProtocol;

__attribute__((visibility("hidden")))
@interface VKRouteLine : NSObject
{
    BOOL _matchToRoads;
    BOOL _hasNewRoadMatches;
    Box_3d7e3c2c _bounds;
    Matrix_08d701e4 _inverseMatrix;
    VKPolylineOverlay *_overlay;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _boundsInWorldUnit;
    double _simplificationEpsilonPoints;
    double _viewUnitsPerPoint;
    id <VKRouteLineObserverProtocol> _observer;
    vector_78427fd2 _sections;
    struct fast_shared_ptr<md::RouteLineSection, std::allocator> _userLocationSection;
    struct PolylineCoordinate _userLocationIndex;
    Matrix_8746f91e _userLocation;
    double _lastTrafficTimeStamp;
    NSSet *_retainedTiles;
    VKPolylineOverlayRenderRegion *_renderRegion;
    struct ManeuverArrowCoordinates _maneuverArrowCoordinates;
    double _builtViewUnitsPerPoint;
}

@property(readonly, nonatomic) VKPolylineOverlayRenderRegion *renderRegion; // @synthesize renderRegion=_renderRegion;
@property(nonatomic) id <VKRouteLineObserverProtocol> observer; // @synthesize observer=_observer;
@property(nonatomic) double simplificationEpsilonPoints; // @synthesize simplificationEpsilonPoints=_simplificationEpsilonPoints;
@property BOOL hasNewRoadMatches; // @synthesize hasNewRoadMatches=_hasNewRoadMatches;
@property(readonly, nonatomic) VKPolylineOverlay *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) Box_3d7e3c2c bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) vector_78427fd2 sections; // @synthesize sections=_sections;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (double)boundsUnitsPerMeter;
- (Matrix_08d701e4)maneuverTransform;
- (Matrix_08d701e4)inverseManeuverTransform;
- (vector_d9a07fc0)maneuverPoints;
- (void)_updateBounds:(id)arg1;
- (void)forEachSection:(id /* CDUnknownBlockType */)arg1;
- (void)splitRouteLineAtAnnotation:(id)arg1;
- (BOOL)needsUpdateForViewingScale:(double)arg1;
- (BOOL)isTrafficUptoDate:(double)arg1;
- (BOOL)isTrafficUpToDate;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (BOOL)buildRouteLine:(id)arg1 matchToRoads:(BOOL)arg2 viewUnitsPerPoint:(double)arg3 force:(BOOL)arg4;
- (void)_updateTilesCovered:(id)arg1;
- (void)dealloc;
- (id)initWithPolylineOverlay:(id)arg1;

@end

