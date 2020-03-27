//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/MKAnnotation-Protocol.h>
#import <PlacesKit/PXPlacesMapRenderable-Protocol.h>

@class NSOrderedSet, NSString;
@protocol PXPlacesMapRenderer, PXPlacesMapSelectionHandler;

@interface PXPlacesMapPointAnnotation : NSObject <MKAnnotation, PXPlacesMapRenderable>
{
    id <PXPlacesMapRenderer> renderer;
    id <PXPlacesMapSelectionHandler> selectionHandler;
    NSOrderedSet *geotaggables;
    long long index;
    struct CLLocationCoordinate2D coordinate;
}

@property(nonatomic) long long index; // @synthesize index;
@property(retain) NSOrderedSet *geotaggables; // @synthesize geotaggables;
@property __weak id <PXPlacesMapSelectionHandler> selectionHandler; // @synthesize selectionHandler;
@property __weak id <PXPlacesMapRenderer> renderer; // @synthesize renderer;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;

@end

