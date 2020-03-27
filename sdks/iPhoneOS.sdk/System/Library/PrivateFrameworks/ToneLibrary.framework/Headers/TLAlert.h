//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TLAlertConfiguration;
@protocol TLAlertPlaybackObserver;

@interface TLAlert : NSObject
{
    long long _instanceIndex;
    BOOL _hasSynchronizedVibrationUnmatchedWithTone;
    id <TLAlertPlaybackObserver> _playbackObserver;
    TLAlertConfiguration *_configuration;
    long long _type;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
}

+ (BOOL)_stopAllAlerts;
+ (void)_setCurrentOverridePolicy:(long long)arg1 forType:(long long)arg2;
+ (long long)_currentOverridePolicyForType:(long long)arg1;
+ (void)_setWatchPrefersSalientToneAndVibration:(BOOL)arg1;
+ (BOOL)_watchPrefersSalientToneAndVibration;
+ (id)alertWithConfiguration:(id)arg1;
+ (void)playAlertForType:(long long)arg1;
+ (void)playToneAndVibrationForType:(long long)arg1;
@property(readonly, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(readonly, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) TLAlertConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <TLAlertPlaybackObserver> playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(readonly, nonatomic) BOOL _hasSynchronizedVibrationUnmatchedWithTone; // @synthesize _hasSynchronizedVibrationUnmatchedWithTone;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)_descriptionForDebugging:(BOOL)arg1;
- (void)_updateAudioVolumeDynamicallyToValue:(float)arg1;
- (void)stopWithOptions:(id)arg1;
- (void)stop;
- (void)playWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)play;
- (id)_initWithConfiguration:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 hasSynchronizedVibrationUnmatchedWithTone:(BOOL)arg4;
- (BOOL)playWithCompletionHandler:(id /* CDUnknownBlockType */)arg1 targetQueue:(id)arg2;
- (id)initWithType:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithType:(long long)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(long long)arg1;

@end

