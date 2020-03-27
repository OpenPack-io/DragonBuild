//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTDeviceResourceConsumer-Protocol.h>

@class AVTAvatarConfigurationImageRenderer, AVTRenderingScope;
@protocol AVTDeviceResourceConsumerDelegate, AVTImageCache, AVTTaskScheduler, AVTUILogger, OS_dispatch_queue;

@interface AVTPresetImageProvider : NSObject <AVTDeviceResourceConsumer>
{
    id <AVTDeviceResourceConsumerDelegate> _consumerDelegate;
    id <AVTImageCache> _cache;
    id <AVTUILogger> _logger;
    AVTAvatarConfigurationImageRenderer *_renderer;
    id <AVTTaskScheduler> _renderingScheduler;
    NSObject<OS_dispatch_queue> *_presetQueue;
    NSObject<OS_dispatch_queue> *_colorQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AVTRenderingScope *_colorScope;
    AVTRenderingScope *_defaultScope;
}

+ (id)configurationToRenderForPreset:(id)arg1 overrides:(id)arg2 baseConfiguration:(id)arg3;
+ (id)presetImageCacheWithEnvironment:(id)arg1;
@property(readonly, nonatomic) AVTRenderingScope *defaultScope; // @synthesize defaultScope=_defaultScope;
@property(readonly, nonatomic) AVTRenderingScope *colorScope; // @synthesize colorScope=_colorScope;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *colorQueue; // @synthesize colorQueue=_colorQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *presetQueue; // @synthesize presetQueue=_presetQueue;
@property(readonly, nonatomic) id <AVTTaskScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property(readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <AVTImageCache> cache; // @synthesize cache=_cache;
@property(nonatomic) __weak id <AVTDeviceResourceConsumerDelegate> consumerDelegate; // @synthesize consumerDelegate=_consumerDelegate;
// - (void).cxx_destruct;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (id /* CDUnknownBlockType */)providerForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 poseOverride:(id)arg3 avatarConfiguration:(id)arg4 framingMode:(id)arg5;
- (id /* CDUnknownBlockType */)providerForImageForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(id /* CDUnknownBlockType */)arg4;
- (void)renderColorGradientForModelColor:(id)arg1 skinColor:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)renderColorForColorPreset:(id)arg1 skinColor:(id)arg2 intoLayer:(id)arg3;
- (id)renderThumbnailForModelColor:(id)arg1;
- (id /* CDUnknownBlockType */)providerForGradientFromColor;
- (id /* CDUnknownBlockType */)providerForColorIntoLayer;
- (id /* CDUnknownBlockType */)providerForThumbnailForModelColor:(id)arg1;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 renderingQueueProvider:(id /* CDUnknownBlockType */)arg3 callbackQueue:(id)arg4 renderer:(id)arg5 defaultScope:(id)arg6 environment:(id)arg7;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
- (id)initWithCache:(id)arg1 environment:(id)arg2;
- (id)initWithRenderingScheduler:(id)arg1 environment:(id)arg2;

@end

