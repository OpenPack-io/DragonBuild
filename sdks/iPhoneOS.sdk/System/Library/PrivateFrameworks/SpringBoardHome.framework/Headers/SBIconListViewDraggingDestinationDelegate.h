//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBFSpringLoadedInteractionBehaviorDelegate-Protocol.h>
#import <SpringBoardHome/SBFSpringLoadedInteractionEffectDelegate-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, SBIconListView, UIDropInteraction;
@protocol SBIconListViewDraggingPolicyHandling;

@interface SBIconListViewDraggingDestinationDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, BSDescriptionProviding, UIDropInteractionDelegate>
{
    NSMapTable *_dragObservers;
    NSMutableSet *_activeDropSessionIdentifiers;
    NSMutableSet *_dropSessionIdentifiersWaitingForConcludeDrop;
    BOOL _waitingForConcludeDrag;
    SBIconListView *_iconListView;
    UIDropInteraction *_dropInteraction;
    NSUInteger _currentDragType;
    id <SBIconListViewDraggingPolicyHandling> _currentPolicyHandler;
    NSUInteger _currentSpringLoadedDragType;
    id <SBIconListViewDraggingPolicyHandling> _springLoadingPolicyHandler;
}

+ (NSUInteger)dragTypeForDropSession:(id)arg1;
@property(nonatomic, getter=isWaitingForConcludeDrag) BOOL waitingForConcludeDrag; // @synthesize waitingForConcludeDrag=_waitingForConcludeDrag;
@property(retain, nonatomic) id <SBIconListViewDraggingPolicyHandling> springLoadingPolicyHandler; // @synthesize springLoadingPolicyHandler=_springLoadingPolicyHandler;
@property(nonatomic) NSUInteger currentSpringLoadedDragType; // @synthesize currentSpringLoadedDragType=_currentSpringLoadedDragType;
@property(retain, nonatomic) id <SBIconListViewDraggingPolicyHandling> currentPolicyHandler; // @synthesize currentPolicyHandler=_currentPolicyHandler;
@property(nonatomic) NSUInteger currentDragType; // @synthesize currentDragType=_currentDragType;
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(readonly, nonatomic) __weak SBIconListView *iconListView; // @synthesize iconListView=_iconListView;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)_resetSpringLoadingPolicyHandler;
- (void)_handleSpringloadAndComplete:(id)arg1;
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;
- (void)springLoadedInteractionDidFinish;
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(CGPoint)arg2 forDropSession:(id)arg3;
@property(readonly, copy) NSString *description;
- (BOOL)updateSpringLoadedPolicyHandlerForDropSession:(id)arg1;
- (BOOL)updateCurrentPolicyHandlerForDropSession:(id)arg1;
- (BOOL)isDropSessionWaitingForConcludeDrop:(id)arg1;
- (void)unmarkDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (void)markDropSessionAsWaitingForConcludeDrop:(id)arg1;
- (void)removeAllDragObserversForDropSession:(id)arg1;
- (void)enumerateDragObserversForDropSession:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)addDragObserver:(id)arg1 forDropSession:(id)arg2;
- (id)uniqueIdentifierForDropSession:(id)arg1;
- (id)initWithIconListView:(id)arg1;

@end

