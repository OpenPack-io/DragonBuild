//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSVTUITrainingSession.h>

#import <CoreSpeech/CSVTUIAudioSessionDelegate-Protocol.h>
#import <CoreSpeech/CSVTUIEndPointDelegate-Protocol.h>
#import <CoreSpeech/SFSpeechRecognitionTaskDelegate-Protocol.h>

@class NSDictionary;

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate>
{
    BOOL _detectBOS;
    BOOL _ASRResultReceived;
    BOOL _reportedStopListening;
    BOOL _utteranceStored;
    NSUInteger _numSamplesFed;
    NSUInteger _bestTriggerSampleStart;
    NSUInteger _extraSamplesAtStart;
    NSDictionary *_voiceTriggerEventInfo;
}

@property(retain, nonatomic) NSDictionary *voiceTriggerEventInfo; // @synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo;
// - (void).cxx_destruct;
- (void)matchRecognitionResult:(id)arg1 withMatchedBlock:(id /* CDUnknownBlockType */)arg2 withNonMatchedBlock:(id /* CDUnknownBlockType */)arg3;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)closeSessionWithStatus:(int)arg1 successfully:(BOOL)arg2;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)didDetectBeginOfSpeech;
- (void)audioSessionUnsupportedAudioRoute;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
- (void)handleAudioInput:(id)arg1;
- (void)_reportStopListening;
- (void)_firedEndPointTimeout;
- (void)_registerEndPointTimeout;
- (void)_registerForceEndPointTimeout;
- (void)_firedVoiceTriggerTimeout;
- (void)_registerVoiceTriggerTimeout;
- (BOOL)shouldMatchPayload;
- (BOOL)shouldHandleSession;
- (void)startTraining;

@end

