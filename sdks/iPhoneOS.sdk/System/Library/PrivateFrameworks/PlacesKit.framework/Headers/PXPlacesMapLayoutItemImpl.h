//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapLayoutItem-Protocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSString;

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem>
{
    NSMutableOrderedSet *_layoutGeotaggables;
    struct CLLocationCoordinate2D _coordinate;
}

@property(retain, nonatomic) NSMutableOrderedSet *layoutGeotaggables; // @synthesize layoutGeotaggables=_layoutGeotaggables;
@property struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSOrderedSet *geotaggables;
- (BOOL)isEqualToLayoutItem:(id)arg1;
- (void)addGeotaggables:(id)arg1;
- (void)addGeotaggable:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

