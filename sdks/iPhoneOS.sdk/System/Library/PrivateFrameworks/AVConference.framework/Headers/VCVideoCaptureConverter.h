//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCVideoCaptureClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCVideoCaptureConverter : NSObject <VCVideoCaptureClient>
{
    unsigned int _destinationFramerate;
    unsigned int _sourceFramerate;
    double _throttleRate;
    unsigned int _sourceFrameCount;
    unsigned int _lastDestinationFrameCount;
    BOOL _isThrottling;
    id _delegate;
}

@property(nonatomic) unsigned int destinationFramerate; // @synthesize destinationFramerate=_destinationFramerate;
@property(nonatomic) unsigned int sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer )arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)updateThrottleRate;
- (BOOL)processFrame:(struct opaqueCMSampleBuffer )arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

