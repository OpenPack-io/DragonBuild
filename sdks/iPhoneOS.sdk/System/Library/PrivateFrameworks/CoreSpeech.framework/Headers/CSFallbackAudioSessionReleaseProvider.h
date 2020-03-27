//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioRecorderDelegate-Protocol.h>
#import <CoreSpeech/CSFallbackAudioSessionReleaseProviding-Protocol.h>

@class CSAudioRecorder;
@protocol OS_dispatch_queue;

@interface CSFallbackAudioSessionReleaseProvider : NSObject <CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding>
{
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioRecorder *_audioRecorder;
}

@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)audioRecorderWillBeDestroyed:(id)arg1;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(NSUInteger)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(NSUInteger)arg5;
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(NSUInteger)arg2 buffer:(id)arg3;
- (BOOL)fallbackDeactivateAudioSession:(NSUInteger)arg1 error:(id )arg2;
- (id)initWithAudioRecorder:(id)arg1;

@end

