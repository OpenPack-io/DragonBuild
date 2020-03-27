//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, VCVideoReceiverBase, VideoAttributes;

@protocol VCVideoReceiverDelegate <NSObject>
- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (BOOL)vcVideoReceiver:(VCVideoReceiverBase *)arg1 didReceiveRemoteFrame:(struct __CVBuffer )arg2 atTime:(CDStruct_1b6d18a9)arg3 newVideoAttributes:(VideoAttributes *)arg4 isFirstFrame:(BOOL)arg5;

@optional
- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (unsigned int)vcVideoReceiver:(VCVideoReceiverBase *)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcVideoReceiverRequestKeyFrame:(VCVideoReceiverBase *)arg1 rtcpPSFBType:(unsigned int)arg2;
@end

