//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTrimToolPlayerWrapper-Protocol.h>

@class AVPlayer, NSArray, NSMutableArray, NUMediaView, _PXTrimToolPlayerWrapperAVPlayerView;
@protocol NUMediaPlayer, PXTrimToolPlayerObserver, PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource;

@interface PXTrimToolPlayerWrapperNUMediaView : NSObject <PXTrimToolPlayerWrapper>
{
    CDStruct_42e984b2 _delegateFlags;
    BOOL _didPlayBeforeSeek;
    BOOL _didLoopVideoBeforeSeek;
    BOOL _showsUntrimmed;
    id <PXTrimToolPlayerObserver> _playerObserver;
    id <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> _playerItemSource;
    NSArray *_fullVideoPipelineFilters;
    NUMediaView *_mediaView;
    id <NUMediaPlayer> _mediaPlayer;
    NSMutableArray *_mediaViewObservers;
    id _mediaViewTimeObserver;
    _PXTrimToolPlayerWrapperAVPlayerView *_loupePlayerView;
    NSArray *_pipelineFiltersBeforeSeek;
    CDStruct_1b6d18a9 _seekTime;
    CDStruct_e83c9415 _trimRange;
}

@property(nonatomic) BOOL showsUntrimmed; // @synthesize showsUntrimmed=_showsUntrimmed;
@property(copy, nonatomic) NSArray *pipelineFiltersBeforeSeek; // @synthesize pipelineFiltersBeforeSeek=_pipelineFiltersBeforeSeek;
@property(nonatomic) BOOL didLoopVideoBeforeSeek; // @synthesize didLoopVideoBeforeSeek=_didLoopVideoBeforeSeek;
@property(nonatomic) BOOL didPlayBeforeSeek; // @synthesize didPlayBeforeSeek=_didPlayBeforeSeek;
@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) CDStruct_e83c9415 trimRange; // @synthesize trimRange=_trimRange;
@property(retain, nonatomic) _PXTrimToolPlayerWrapperAVPlayerView *loupePlayerView; // @synthesize loupePlayerView=_loupePlayerView;
@property(retain, nonatomic) id mediaViewTimeObserver; // @synthesize mediaViewTimeObserver=_mediaViewTimeObserver;
@property(retain, nonatomic) NSMutableArray *mediaViewObservers; // @synthesize mediaViewObservers=_mediaViewObservers;
@property(retain, nonatomic) id <NUMediaPlayer> mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(readonly, nonatomic) NUMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(copy, nonatomic) NSArray *fullVideoPipelineFilters; // @synthesize fullVideoPipelineFilters=_fullVideoPipelineFilters;
@property(nonatomic) __weak id <PXTrimToolPlayerWrapperNUMediaViewPlayerItemSource> playerItemSource; // @synthesize playerItemSource=_playerItemSource;
@property(nonatomic) __weak id <PXTrimToolPlayerObserver> playerObserver; // @synthesize playerObserver=_playerObserver;
// - (void).cxx_destruct;
- (void)stopPeriodicTimeObserver;
- (void)startPeriodicTimeObserver;
- (void)pause;
- (void)play;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
- (void)invalidateComposition;
- (void)requestPlayerItemWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_handleMediaPlayerObserverStatusChanged:(long long)arg1;
- (void)_handleMediaPlayerObserverTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)_handleMediaPlayerObserverMediaChanged;
- (void)_removeTimeObserver;
- (void)_removeMediaPlayerObserver;
- (void)_registerTimeMediaViewObserver;
- (void)_registerDefaultMediaViewObserver;
- (void)_updateLoupePlayerView;
@property(readonly, nonatomic) AVPlayer *_currentAVPlayer;
- (void)dealloc;
- (id)initWithNUMediaView:(id)arg1;

@end

