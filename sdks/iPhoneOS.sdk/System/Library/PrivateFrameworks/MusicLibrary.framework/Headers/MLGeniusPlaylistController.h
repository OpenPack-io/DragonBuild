//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject
{
    void _echo;
    void _echo_library;
    void _echo_cluster_playlist;
    NSMutableData *_sharedBlobMutableData;
}

+ (id)geniusTracksForSeedTrack:(id)arg1 error:(id )arg2;
+ (id)playlistControllerWithSeedTracks:(id)arg1 error:(id )arg2;
+ (void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
+ (NSUInteger)defaultMinTrackCount;
+ (NSUInteger)defaultTrackCount;
+ (BOOL)hasGeniusDataAvailable;
+ (BOOL)hasGeniusFeatureEnabled;
+ (BOOL)useFakeGeniusData;
+ (void)ignoreUnusedWarnings;
// - (void).cxx_destruct;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(NSUInteger)arg1 error:(id )arg2;
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id )arg2;
- (BOOL)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id )arg3;
- (BOOL)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id )arg3;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(NSUInteger)arg1 maxTracks:(NSUInteger)arg2 stride:(int)arg3;
- (BOOL)_canIncludeTrackInGeniusContainer:(id)arg1;
- (id)_sharedBlobMutableData;
- (id)tracksFromClusterForCount:(NSUInteger)arg1 error:(id )arg2;
- (void)dealloc;
- (id)init;

@end

