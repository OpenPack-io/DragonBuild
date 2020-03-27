//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>

@class NSArray, NSSet, UIAlertController;
@protocol PXActionMenuDelegate;

@interface PXActionMenuController : NSObject <PXActionPerformerDelegate>
{
    BOOL _actionsNeedsUpdate;
    NSArray *_alertActions;
    NSArray *_alertActionViewControllers;
    NSArray *_alertActionTypes;
    NSArray *_activityActions;
    NSSet *_disabledActionTypes;
    NSSet *_excludedActionTypes;
    id <PXActionMenuDelegate> _delegate;
    NSArray *_actionManagers;
}

@property(readonly, nonatomic) NSArray *actionManagers; // @synthesize actionManagers=_actionManagers;
@property(nonatomic) __weak id <PXActionMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSSet *excludedActionTypes; // @synthesize excludedActionTypes=_excludedActionTypes;
@property(copy, nonatomic) NSSet *disabledActionTypes; // @synthesize disabledActionTypes=_disabledActionTypes;
// - (void).cxx_destruct;
- (void)actionPerformer:(id)arg1 didChangeState:(NSUInteger)arg2;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(NSObject )arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(NSObject )arg2;
- (void)invalidateActions;
- (void)_updateActionsIfNeeded;
- (BOOL)shouldAllowPerformanceOfActionType:(id)arg1;
@property(readonly, nonatomic) NSArray *availableActionTypes;
@property(readonly, nonatomic) UIAlertController *alertController;
@property(readonly, nonatomic) NSArray *alertActionTypes; // @synthesize alertActionTypes=_alertActionTypes;
@property(readonly, nonatomic) NSArray *activityActions; // @synthesize activityActions=_activityActions;
@property(readonly, nonatomic) NSArray *alertActionViewControllers; // @synthesize alertActionViewControllers=_alertActionViewControllers;
@property(readonly, nonatomic) NSArray *alertActions; // @synthesize alertActions=_alertActions;
- (id)initWithActionManagers:(id)arg1;
- (id)init;

@end

