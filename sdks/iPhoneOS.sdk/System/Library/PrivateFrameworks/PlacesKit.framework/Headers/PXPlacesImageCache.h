//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface PXPlacesImageCache : NSObject
{
    NSCache *_cache;
}

// - (void).cxx_destruct;
- (void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3;
- (id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;
- (void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;
- (void)removeAllObjects;
- (id)init;

@end

