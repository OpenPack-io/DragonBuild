//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicCarDisplayUI/CARSessionObserving-Protocol.h>
#import <MusicCarDisplayUI/MCDNowPlayingContentManagerProtocol-Protocol.h>
#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDataSource-Protocol.h>
#import <MusicCarDisplayUI/MCDNowPlayingViewControllerDelegate-Protocol.h>
#import <MusicCarDisplayUI/MPRequestResponseControllerDelegate-Protocol.h>

@class CARSessionStatus, MPArtworkCatalog, MPCPlayerResponse, MPCPlayerResponseItem, MPModelPlaylist, MPModelPlaylistEntry, MPModelRadioStation, MPModelSong, MPRequestResponseController, MSVTimer, NSString, UIAlertController, UIImage, UITableView;
@protocol MCDNowPlayingContentManagerDelegate, MCDNowPlayingDataSource;

@interface _MCDNowPlayingContentManager : NSObject <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource, CARSessionObserving, MCDNowPlayingContentManagerProtocol, MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate>
{
    BOOL limitedUI;
    Class tableCellClass;
    MPModelSong *currentPlayingSong;
    MPModelPlaylistEntry *currentPlayingPlaylistEntry;
    MPModelPlaylist *currentPlayingPlaylist;
    MPModelRadioStation *currentPlayingRadioStation;
    MPRequestResponseController *_requestController;
    UIImage *_albumArtwork;
    MPArtworkCatalog *_artworkCatalog;
    id <MCDNowPlayingDataSource> _dataSource;
    NSString *_bundleID;
    CARSessionStatus *_carSessionStatus;
    UIAlertController *_alertController;
    MSVTimer *_artworkTimer;
    id <MCDNowPlayingContentManagerDelegate> _delegate;
    MPCPlayerResponse *_lastReceivedResponse;
    UITableView *_tableView;
    MPCPlayerResponseItem *_nowPlayingItem;
}

@property(retain, nonatomic) MPCPlayerResponseItem *nowPlayingItem; // @synthesize nowPlayingItem=_nowPlayingItem;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MPCPlayerResponse *lastReceivedResponse; // @synthesize lastReceivedResponse=_lastReceivedResponse;
@property(nonatomic) __weak id <MCDNowPlayingContentManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MSVTimer *artworkTimer; // @synthesize artworkTimer=_artworkTimer;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) CARSessionStatus *carSessionStatus; // @synthesize carSessionStatus=_carSessionStatus;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) __weak id <MCDNowPlayingDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property(retain, nonatomic) UIImage *albumArtwork; // @synthesize albumArtwork=_albumArtwork;
@property(retain, nonatomic) MPRequestResponseController *requestController; // @synthesize requestController=_requestController;
@property(retain, nonatomic) MPModelRadioStation *currentPlayingRadioStation; // @synthesize currentPlayingRadioStation;
@property(retain, nonatomic) MPModelPlaylist *currentPlayingPlaylist; // @synthesize currentPlayingPlaylist;
@property(retain, nonatomic) MPModelPlaylistEntry *currentPlayingPlaylistEntry; // @synthesize currentPlayingPlaylistEntry;
@property(retain, nonatomic) MPModelSong *currentPlayingSong; // @synthesize currentPlayingSong;
@property(nonatomic) BOOL limitedUI; // @synthesize limitedUI;
@property(nonatomic) __weak Class tableCellClass; // @synthesize tableCellClass;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *nowPlayingBundleID;
- (void)_performChangeRequest:(id)arg1;
- (id)nowPlayingViewControllerGetPlaybackRate:(id)arg1;
- (void)nowPlayingViewControllerChangePlaybackRate:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(id)arg1;
- (BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(id)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
- (long long)repeatTypeForNowPlayingViewController:(id)arg1;
- (long long)shuffleTypeForNowPlayingViewController:(id)arg1;
- (BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;
- (CDStruct_fce57115)durationSnapshotForNowPlayingViewController:(id)arg1;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)_showPlaceholderArtwork;
- (void)processArtworkForCurrentlyPlayingSong;
- (void)_processResponse:(id)arg1 error:(id)arg2;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_shouldShowPlaybackQueueForItemCount:(long long)arg1;
- (void)modelResponseDidInvalidate:(id)arg1;
- (id)_setupRequest;
- (void)_performRequest;
- (void)_limitedUIChanged:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)viewWillDisappear;
- (void)endRequestObservation;
- (void)beginRequestObservation;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 bundleID:(id)arg3;

@end

