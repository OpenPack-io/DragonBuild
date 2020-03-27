//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TSReading/TSDCanvasLayerHosting-Protocol.h>
#import <TSReading/TSDCanvasZoomTrackerDelegate-Protocol.h>

@class CALayer, NSArray, NSMutableArray, NSSet, TSDAllTouchesDoneGestureRecognizer, TSDCanvasLayer, TSDCanvasSubviewsController, TSDCanvasView, TSDCanvasZoomPinchGestureRecognizer, TSDCanvasZoomTracker, TSDEditMenuTapGestureRecognizer, TSDGuidedPanController, TSDInteractiveCanvasController, TSDKnobDragGestureRecognizer, TSDMultiSelectGestureRecognizer, TSDNudgeGestureRecognizer, TSDPreventScrollGestureRecognizer, TSDRepDragGestureRecognizer, TSDRepRotateGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol TSDiOSCanvasViewControllerDelegate;

@interface TSDiOSCanvasViewController : UIViewController <TSDCanvasLayerHosting, TSDCanvasZoomTrackerDelegate, UIGestureRecognizerDelegate>
{
    TSDInteractiveCanvasController *mICC;
    id <TSDiOSCanvasViewControllerDelegate> mDelegate;
    BOOL mContextMenuMightBeDisplayed;
    UITapGestureRecognizer *mSingleTapGestureRecognizer;
    UITapGestureRecognizer *mDoubleTapGestureRecognizer;
    TSDEditMenuTapGestureRecognizer *mEditMenuTapGestureRecognizer;
    TSDKnobDragGestureRecognizer *mKnobDragGestureRecognizer;
    TSDMultiSelectGestureRecognizer *mMultiSelectGestureRecognizer;
    TSDRepDragGestureRecognizer *mRepDragGestureRecognizer;
    TSDRepRotateGestureRecognizer *mRepRotateGestureRecognizer;
    TSDCanvasZoomPinchGestureRecognizer *mZoomGestureRecognizer;
    TSDNudgeGestureRecognizer *mNudgeGestureRecognizer;
    TSDAllTouchesDoneGestureRecognizer *mAllTouchesDoneGestureRecognizer;
    TSDPreventScrollGestureRecognizer *mPreventScrollGestureRecognizer;
    UIPanGestureRecognizer *mGuidedPanGestureRecognizer;
    TSDGuidedPanController *mGuidedPanController;
    BOOL mHasBeenTornDown;
    BOOL mIsPopoverGestureInFlight;
    BOOL mInspectorModeEnabled;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    id /* CDUnknownBlockType */ mInspectorSingleTapBlock;
    BOOL mCurrentlyScrolling;
    BOOL mRotating;
    TSDCanvasZoomTracker *mCanvasZoomTracker;
    CGPoint mLastZoomHUDLocation;
    BOOL _isRotating;
    TSDCanvasSubviewsController *mSubviewsController;
}

@property(readonly, retain, nonatomic) TSDCanvasSubviewsController *subviewsController; // @synthesize subviewsController=mSubviewsController;
@property(readonly, nonatomic) BOOL isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) BOOL contextMenuMightBeDisplayed; // @synthesize contextMenuMightBeDisplayed=mContextMenuMightBeDisplayed;
@property(readonly, nonatomic) BOOL isPopoverGestureInFlight; // @synthesize isPopoverGestureInFlight=mIsPopoverGestureInFlight;
@property(readonly, retain, nonatomic) UIPanGestureRecognizer *guidedPanGestureRecognizer; // @synthesize guidedPanGestureRecognizer=mGuidedPanGestureRecognizer;
@property(readonly, retain, nonatomic) TSDPreventScrollGestureRecognizer *preventScrollGestureRecognizer; // @synthesize preventScrollGestureRecognizer=mPreventScrollGestureRecognizer;
@property(retain, nonatomic) TSDAllTouchesDoneGestureRecognizer *allTouchesDoneGestureRecognizer; // @synthesize allTouchesDoneGestureRecognizer=mAllTouchesDoneGestureRecognizer;
@property(retain, nonatomic) TSDNudgeGestureRecognizer *nudgeGestureRecognizer; // @synthesize nudgeGestureRecognizer=mNudgeGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *zoomGestureRecognizer; // @synthesize zoomGestureRecognizer=mZoomGestureRecognizer;
@property(retain, nonatomic) TSDRepRotateGestureRecognizer *repRotateGestureRecognizer; // @synthesize repRotateGestureRecognizer=mRepRotateGestureRecognizer;
@property(retain, nonatomic) TSDRepDragGestureRecognizer *repDragGestureRecognizer; // @synthesize repDragGestureRecognizer=mRepDragGestureRecognizer;
@property(retain, nonatomic) TSDMultiSelectGestureRecognizer *multiSelectGestureRecognizer; // @synthesize multiSelectGestureRecognizer=mMultiSelectGestureRecognizer;
@property(retain, nonatomic) TSDKnobDragGestureRecognizer *knobDragGestureRecognizer; // @synthesize knobDragGestureRecognizer=mKnobDragGestureRecognizer;
@property(retain, nonatomic) TSDEditMenuTapGestureRecognizer *editMenuTapGestureRecognizer; // @synthesize editMenuTapGestureRecognizer=mEditMenuTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=mDoubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=mSingleTapGestureRecognizer;
@property(nonatomic) id <TSDiOSCanvasViewControllerDelegate> delegate; // @synthesize delegate=mDelegate;
@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
- (id)topLevelReps;
@property(readonly, retain, nonatomic) UIViewController *containerViewController;
@property(readonly, retain, nonatomic) UIView *containerView;
@property(readonly, retain, nonatomic) CALayer *containerLayer;
@property(readonly, retain, nonatomic) CALayer *topLevelTilingLayer;
- (Class)audioInspectorPaneClass;
- (Class)movieInspectorPaneClass;
- (id)newAudioPlaybackHUDWithFrame:(CGRect)arg1 audioRep:(id)arg2 delegate:(id)arg3;
- (void)hideMoviePlaybackHUD;
- (void)showMoviePlaybackHUD:(id)arg1 withFrame:(CGRect)arg2;
- (id)newMoviePlaybackHUDWithFrame:(CGRect)arg1 playerController:(id)arg2 movieRep:(id)arg3;
- (void)presentMovieCompatibilityAlertForUnplayableMoviePasteboardDrawableProviders:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)presentMovieCompatibilityAlertForUnplayableMovieURLs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)endModalOperation;
- (void)beginModalOperationWithLocalizedMessage:(id)arg1 progress:(id)arg2 cancelHandler:(id /* CDUnknownBlockType */)arg3;
- (void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)p_didPresentErrorWithRecovery:(BOOL)arg1 completionHandler:(void )arg2;
- (void)presentError:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)p_willPresentError:(id)arg1;
- (void)p_editMenuDidHide:(id)arg1;
- (void)p_guidedPanWithGesture:(id)arg1;
@property(readonly, nonatomic) BOOL isDraggingViaGuidedPan;
- (void)canvasZoomTrackerDidFinish:(id)arg1;
- (void)canvasZoomTrackerDidEndFinalZoomAnimation:(id)arg1;
- (void)canvasZoomTrackerWillBeginFinalZoomAnimation:(id)arg1;
- (void)canvasZoomTrackerDidEndViewScaleFeedback:(id)arg1;
- (void)canvasZoomTracker:(id)arg1 willUpdateViewScaleFeedbackWithScale:(double)arg2;
- (void)canvasZoomTracker:(id)arg1 willBeginViewScaleFeedbackWithFastPinch:(BOOL)arg2;
- (void)p_zoomWithGesture:(id)arg1;
- (void)p_handleSingleTapGesture:(id)arg1;
- (void)addInspectorPanZoomModeGRsToArray:(id)arg1;
- (void)endInspectorPanZoomMode;
- (void)beginInspectorPanZoomModeWithSingleTapBlock:(id /* CDUnknownBlockType */)arg1;
- (void)forceStopScrolling;
- (void)stopScrolling;
- (void)unlock:(id)arg1;
- (void)cut:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (id)extraMenuItems;
- (id)itemsToAddToEditMenuForRep:(id)arg1;
- (void)hideEditMenu;
- (void)toggleEditMenuForCurrentSelection;
- (void)showEditMenu:(id)arg1;
- (void)p_buildMenuItems:(id)arg1 forSelection:(id)arg2;
- (void)showEditMenuForSelection:(id)arg1;
- (CGRect)targetRectForEditMenu:(id)arg1;
- (id)viewForGestureRecognizer:(id)arg1;
- (BOOL)repDragGestureRecognizer:(id)arg1 shouldBeginTapHoldTrackingAtScaledPoint:(CGPoint)arg2;
- (BOOL)allowTouchOutsideCanvasView:(id)arg1 forGesture:(id)arg2;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)shouldIgnoreTextGestures;
- (BOOL)shouldSelectAndShowEditMenuOnFirstTapForRep:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)p_handleTapForEditMenu:(id)arg1;
- (void)p_allTouchesDone:(id)arg1;
- (BOOL)handleDoubleTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2;
- (void)handleDoubleTap:(id)arg1;
- (BOOL)handleSingleTapAtPoint:(CGPoint)arg1 withRecognizer:(id)arg2;
- (void)i_updateZoomGestureRecognizer;
- (void)resetGesturesForContextSwitch;
- (void)setUpGestureRecognizers;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) NSSet *panGestureRecognizers;
@property(readonly, nonatomic) NSArray *commonGestureRecognizers;
- (id)hitKnobWithTouch:(id)arg1 returningRep:(id )arg2;
- (id)hitRepWithTouch:(id)arg1;
- (void)canvasDidUpdateRepsFromLayouts;
- (BOOL)isInFocusedContainer;
- (id)viewController;
- (id)asiOSCVC;
@property(readonly, nonatomic) CALayer *clippingLayer;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
@property(readonly, nonatomic) TSDCanvasLayer *canvasLayer;
- (BOOL)becomeFirstResponder;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)p_updateWideGamut;
- (BOOL)p_shouldUseWideGamut;
- (void)viewDidLoad;
- (void)loadView;
- (void)teardown;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) CDStruct_499be82c centerPlusMovementContentPlacement;
@property(readonly, nonatomic) CDStruct_499be82c touchContentPlacement;

@end

