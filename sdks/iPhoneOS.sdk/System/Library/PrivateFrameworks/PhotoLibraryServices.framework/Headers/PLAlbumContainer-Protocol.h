//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetContainerList-Protocol.h>

@class NSArray, NSIndexSet, NSMutableOrderedSet, NSNumber, NSString;

@protocol PLAlbumContainer <PLAssetContainerList>
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, nonatomic) NSUInteger unreadAlbumsCount;
@property(readonly, nonatomic) int filter;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ albumsSortingComparator;
@property(readonly, nonatomic) BOOL isFolder;
@property(readonly, nonatomic) NSUInteger albumsCount;
- (void)preheatAlbumsAtIndexes:(NSIndexSet *)arg1 forProperties:(NSArray *)arg2 relationships:(NSArray *)arg3;
- (void)preheatAlbumsForProperties:(NSArray *)arg1 relationships:(NSArray *)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
- (BOOL)albumHasFixedOrder:(NSObject )arg1;
- (BOOL)canEditAlbums;
- (short)albumListType;
- (BOOL)hasAtLeastOneAlbum;
- (NSMutableOrderedSet *)albums;
- (NSNumber *)identifier;
@end

