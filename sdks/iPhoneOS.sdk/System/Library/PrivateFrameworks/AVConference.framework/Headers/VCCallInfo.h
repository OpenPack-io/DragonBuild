//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SDPMini;

__attribute__((visibility("hidden")))
@interface VCCallInfo : NSObject
{
    unsigned int callID;
    NSString *participantID;
    unsigned int auNumber;
    unsigned int maxBandwidth;
    unsigned int cellBandwidth;
    BOOL videoIsPaused;
    BOOL isPreLionOS;
    BOOL isVideoQualityDegraded;
    double lastGoodVideoQualityTime;
    double lastBadVideoQualityTime;
    double lastVideoQualityDegradedSwitchTime;
    NSString *sdpString;
    SDPMini *sdp;
    BOOL is4x;
    BOOL isIOS;
    BOOL usesInitialFECImplementation;
    BOOL supportsDynamicMaxBitrate;
    BOOL supportsSpecialAACBundle;
    BOOL supportsSKEOptimization;
    unsigned int visibleRectCropping;
    BOOL useNewPLCalc;
    double firstDegradedMeasure;
    double videoDegradedThreshold;
    unsigned char u8Version;
    NSString *_frameworkVersion;
    NSString *_osVersion;
    NSString *_deviceType;
}

+ (unsigned char)getVCCurrentVersion;
@property(copy, nonatomic) NSString *frameworkVersion; // @synthesize frameworkVersion=_frameworkVersion;
@property(copy, nonatomic) NSString *OSVersion; // @synthesize OSVersion=_osVersion;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) unsigned char u8Version; // @synthesize u8Version;
@property(nonatomic) BOOL supportsSKEOptimization; // @synthesize supportsSKEOptimization;
@property(readonly, nonatomic) BOOL supportsSpecialAACBundle; // @synthesize supportsSpecialAACBundle;
@property(readonly, nonatomic) BOOL useNewPLCalc; // @synthesize useNewPLCalc;
@property(nonatomic) unsigned int visibleRectCropping; // @synthesize visibleRectCropping;
@property(retain, nonatomic) SDPMini *sdp; // @synthesize sdp;
@property(retain, nonatomic) NSString *sdpString; // @synthesize sdpString;
@property(nonatomic) BOOL supportsDynamicMaxBitrate; // @synthesize supportsDynamicMaxBitrate;
@property(readonly, nonatomic) BOOL usesInitialFECImplementation; // @synthesize usesInitialFECImplementation;
@property(readonly, nonatomic) BOOL isIOS; // @synthesize isIOS;
@property(nonatomic) BOOL videoIsPaused; // @synthesize videoIsPaused;
@property(nonatomic) BOOL isVideoQualityDegraded; // @synthesize isVideoQualityDegraded;
@property(nonatomic) BOOL isPreLionOS; // @synthesize isPreLionOS;
@property(nonatomic) unsigned int cellBandwidth; // @synthesize cellBandwidth;
@property(nonatomic) unsigned int maxBandwidth; // @synthesize maxBandwidth;
@property(nonatomic) unsigned int auNumber; // @synthesize auNumber;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID;
@property unsigned int callID; // @synthesize callID;
@property(readonly, nonatomic) BOOL isHDVideoSupported;
- (BOOL)supportSDPCompression;
- (void)setUserAgent:(id)arg1;
- (struct VoiceIOFarEndVersionInfo)audioVersionInfo:(BOOL)arg1;
@property(readonly) BOOL supportsDynamicContentsRectWithAspectPreservation;
- (BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4;
- (void)resetLastGoodVideoQualityTime:(double)arg1;
@property(readonly, nonatomic) BOOL requiresImplicitFeatureString;
- (void)dealloc;
- (id)init;

@end

