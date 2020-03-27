//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>


@class MCDPCContainer, MCDPCModel, NSArray, NSOperationQueue, NSString;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate>
{
    MCDPCModel *_model;
    MCDPCContainer *_rootContainer;
    NSArray *_stackToRebuild;
    BOOL _hasBrowsableContent;
    BOOL _hasSectionedContent;
    BOOL _hasLoaded;
    NSString *_bundleID;
    NSOperationQueue *_modelInvalidationQueue;
}

@property(retain, nonatomic) NSOperationQueue *modelInvalidationQueue; // @synthesize modelInvalidationQueue=_modelInvalidationQueue;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (id)currentStack;
- (void)_populateStack;
- (void)_modelDidInvalidate:(id)arg1;
- (void)refreshNavigationStackForLaunch;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_setupView;
- (id)_createRootViewController;
- (id)_createSectionedRootViewController;
- (void)_nowPlayingIdentifiersChanged:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 stack:(id)arg2;

@end

