//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlayCoordinating-Protocol.h>

@class SBAppLayout, SBDeviceApplicationSceneViewController, SBInlineAppExposeLiveContentOverlayView;
@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate;

@interface SBInlineAppExposeLiveContentOverlayCoordinator : NSObject <SBSwitcherLiveContentOverlayCoordinating>
{
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    long long _environment;
    long long _layoutRole;
    BOOL _overlay;
    SBAppLayout *_liveContentAppLayout;
    SBInlineAppExposeLiveContentOverlayView *_liveContentOverlayView;
    BOOL _liveContentOverlayUpdatesSuspended;
    long long _containerOrientation;
    id <SBSwitcherLiveContentOverlayCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <SBSwitcherLiveContentOverlayCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=areLiveContentOverlayUpdatesSuspended) BOOL liveContentOverlayUpdatesSuspended; // @synthesize liveContentOverlayUpdatesSuspended=_liveContentOverlayUpdatesSuspended;
@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
// - (void).cxx_destruct;
- (id)_appLayoutFromLayoutState:(id)arg1;
- (void)_removeLiveContentOverlay;
- (void)_addLiveContentOverlay:(id)arg1 forAppLayout:(id)arg2 animated:(BOOL)arg3;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)updateSceneViewController:(id)arg1 environment:(long long)arg2 layoutRole:(long long)arg3 overlay:(BOOL)arg4;

@end

