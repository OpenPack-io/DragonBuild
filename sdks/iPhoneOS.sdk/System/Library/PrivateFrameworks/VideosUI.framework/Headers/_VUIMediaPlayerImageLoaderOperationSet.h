//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPArtworkCatalog;
@protocol MPArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _VUIMediaPlayerImageLoaderOperationSet : NSObject
{
    id <MPArtworkDataSource> _dataSource;
    MPArtworkCatalog *_artworkCatalog;
}

@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(retain, nonatomic) id <MPArtworkDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;

@end

