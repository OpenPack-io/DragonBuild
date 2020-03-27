//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPPlayButtonControl.h>

#import <LinkPresentation/LPStreamingAudioPlayerClient-Protocol.h>

@class LPStreamingAudioPlayer;

__attribute__((visibility("hidden")))
@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPStreamingAudioPlayerClient>
{
    LPStreamingAudioPlayer *_player;
}

// - (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)streamingAudioPlayerDidFailToPlay:(id)arg1;
- (void)streamingAudioPlayer:(id)arg1 didChangeProgress:(float)arg2;
- (void)streamingAudioPlayer:(id)arg1 didTransitionToState:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithAudio:(id)arg1 style:(id)arg2;

@end

