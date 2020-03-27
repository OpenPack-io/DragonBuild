//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureFinder : GEOMapRequest
{
    CDStruct_2c43369c _coordinate;
    GEOMapTileFinder *_tileFinder;
    id /* CDUnknownBlockType */ _roadHandler;
    id /* CDUnknownBlockType */ _pointHandler;
    id /* CDUnknownBlockType */ _polygonHandler;
    BOOL _ignoreUnnamedFeatures;
}

@property(nonatomic) BOOL ignoreUnnamedFeatures; // @synthesize ignoreUnnamedFeatures=_ignoreUnnamedFeatures;
@property(copy, nonatomic) id /* CDUnknownBlockType */ polygonHandler; // @synthesize polygonHandler=_polygonHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ pointHandler; // @synthesize pointHandler=_pointHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ roadHandler; // @synthesize roadHandler=_roadHandler;
// - (void).cxx_destruct;
- (void)findFeatures:(id /* CDUnknownBlockType */)arg1 pointHandler:(id /* CDUnknownBlockType */)arg2 polygonHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)_pickRoadInTile:(id)arg1 tileRect:(const CDStruct_90e2a262 )arg2 localPoint:(const Matrix_8746f91e )arg3;
@property(readonly, nonatomic) GEOMapAccess *map;
- (void)cancel;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2;

@end

