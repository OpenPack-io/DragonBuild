//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ActivityRingsUI/ARUIRingGroupControllerDelegate-Protocol.h>
#import <ActivityRingsUI/CALayerDelegate-Protocol.h>

@class ARUIRingGroupController, ARUIRingsViewRenderer, CADisplayLink, CAMetalLayer, MISSING_TYPE, NSArray, UIImage;

@interface ARUIRingsView : UIView <ARUIRingGroupControllerDelegate, CALayerDelegate>
{
    NSArray *_ringGroupControllers;
    BOOL _ringGroupControllersNeedRender;
    CAMetalLayer *_metalLayer;
    MISSING_TYPE *_drawableSize;
    CADisplayLink *_displayLink;
    double _lastTickTime;
    BOOL _renderOnLayout;
    BOOL _shouldBypassApplicationStateChecking;
    BOOL _discardBackBuffers;
    BOOL _viewIsVisible;
    BOOL _paused;
    BOOL _synchronizesWithCA;
    float _screenScale;
    ARUIRingsViewRenderer *_renderer;
    long long _preferredFramesPerSecond;
    double _emptyRingAlpha;
    NSUInteger _iconTextureRows;
    NSUInteger _iconTextureColumns;
    UIImage *_iconSpriteImage;
}

+ (void)clearSharedCaches;
+ (id)ringsViewConfiguredForCompanionOfType:(long long)arg1 withRenderer:(id)arg2;
+ (id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnCompanionWithRenderer:(id)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnCompanion;
+ (id)ringsViewConfiguredForWatchOfType:(long long)arg1 withIcon:(BOOL)arg2 renderer:(id)arg3;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withIcon:(BOOL)arg2;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withRenderer:(id)arg2;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnWatchWithRenderer:(id)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnWatch;
@property(readonly, nonatomic) float screenScale; // @synthesize screenScale=_screenScale;
@property(retain, nonatomic) UIImage *iconSpriteImage; // @synthesize iconSpriteImage=_iconSpriteImage;
@property(nonatomic) NSUInteger iconTextureColumns; // @synthesize iconTextureColumns=_iconTextureColumns;
@property(nonatomic) NSUInteger iconTextureRows; // @synthesize iconTextureRows=_iconTextureRows;
@property(nonatomic) double emptyRingAlpha; // @synthesize emptyRingAlpha=_emptyRingAlpha;
@property(nonatomic) BOOL synchronizesWithCA; // @synthesize synchronizesWithCA=_synchronizesWithCA;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) BOOL discardBackBuffers; // @synthesize discardBackBuffers=_discardBackBuffers;
@property(nonatomic) BOOL shouldBypassApplicationStateChecking; // @synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking;
@property(readonly, nonatomic) ARUIRingsViewRenderer *renderer; // @synthesize renderer=_renderer;
// - (void).cxx_destruct;
- (void)setShouldRenderOnLayout:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (NSUInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)snapshot;
- (id)displayLink;
- (void)_tick:(id)arg1;
- (void)updateDisplayLink;
- (BOOL)_needsDisplayLink;
- (BOOL)_shouldAllowRendering;
- (void)updateRingGroupControllers;
- (void)ringGroupControllerWillAddCelebrationOfType:(NSUInteger)arg1;
- (void)ringGroupControllerNeedsUpdate:(id)arg1;
- (void)_discardBackBuffersIfNoDisplayLink;
- (void)drawIntoTexture:(id)arg1 withDrawable:(id)arg2 waitUntilCompleted:(BOOL)arg3;
- (void)layoutSubviews;
- (void)_resumeByNotification:(id)arg1;
- (void)_pauseByNotification:(id)arg1;
- (id)metalLayer;
- (void)_updateMetalLayerProperties;
- (void)updateMetalLayerVisibility:(BOOL)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)setSkewAdjustmentMatrix:(CDStruct_14d5dc5e)arg1;
- (void)setRingBoundsDiameter:(float)arg1;
- (void)_updateSkewAdjustment;
- (void)_updateDrawableSize;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (NSUInteger)maximumRingCountForControllers:(id)arg1;
@property(readonly, nonatomic) ARUIRingGroupController *ringGroupController;
- (id)ringGroupControllers;
- (id)ringGroups;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initWithRingGroupControllers:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroupControllers:(id)arg1;
- (id)initWithRingGroupController:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroupController:(id)arg1;
- (void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(BOOL)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2;
- (void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2;

@end

