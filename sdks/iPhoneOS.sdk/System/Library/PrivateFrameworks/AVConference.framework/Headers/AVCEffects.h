//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient;
@protocol AVCEffectsDelegate, OS_dispatch_queue;

@interface AVCEffects : NSObject
{
    id _delegate;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceEffectsQueue;
    int _mode;
    BOOL _isEffectsApplied;
    BOOL _isFaceMeshTrackingEnabled;
    int _effectType;
}

@property(nonatomic) int effectType; // @synthesize effectType=_effectType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)encodeProcessedVideoFrame:(id)arg1;
- (void)avcVideoFrameDidRelease:(id)arg1;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
@property(nonatomic) id <AVCEffectsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

