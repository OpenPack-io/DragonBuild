//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class MediaControlsCollectionViewCountData, NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableSet, UIScrollView, _MediaControlsTapHoldGestureRecognizer;
@protocol MediaControlsCollectionItemViewController, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate;

@interface MediaControlsCollectionViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_activeViewControllers;
    UIViewController<MediaControlsCollectionItemViewController> *_inactiveSelectedViewController;
    NSMutableSet *_inactiveViewControllers;
    NSMutableArray *_pendingUpdates;
    UIEdgeInsets _controlCenterEdgeInsets;
    CGSize _lastKnownEnvironmentSize;
    long long _animatedSelectionCount;
    long long _appearanceTransitionCount;
    BOOL _shouldDisableAutoReaping;
    BOOL _shouldIgnoreScrollNotifications;
    BOOL _isAnimatingSelection;
    BOOL _isPerformingBatchUpdates;
    BOOL _needsReloadData;
    MediaControlsCollectionViewCountData *_countData;
    long long _highlightedItemIndex;
    BOOL _appeared;
    id <MediaControlsCollectionViewDataSource> _dataSource;
    id <MediaControlsCollectionViewDelegate> _delegate;
    id /* CDUnknownBlockType */ _dismissalBlock;
    long long _selectedItemIndex;
    _MediaControlsTapHoldGestureRecognizer *_tapGestureRecognizer;
    UIScrollView *_scrollView;
    long long _displayMode;
    double _preferredItemHeight;
    UIEdgeInsets _scrollViewInsets;
}

+ (id)alphaAnimatorWithAnimations:(id /* CDUnknownBlockType */)arg1;
+ (id)frameAnimator;
@property(nonatomic) double preferredItemHeight; // @synthesize preferredItemHeight=_preferredItemHeight;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) _MediaControlsTapHoldGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) long long selectedItemIndex; // @synthesize selectedItemIndex=_selectedItemIndex;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(nonatomic) UIEdgeInsets scrollViewInsets; // @synthesize scrollViewInsets=_scrollViewInsets;
@property(nonatomic) __weak id <MediaControlsCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MediaControlsCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (double)_backgroundCornerRadius;
- (BOOL)_isScrollViewAnimatingScroll;
- (id)_visibleBottomViewControllers;
- (id)_visibleTopViewControllers;
- (void)_enumerateActiveViewControllers:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_wantsTapGestureRecognizer;
- (void)_setSelectedItemIndex:(long long)arg1 animated:(BOOL)arg2 shouldScroll:(BOOL)arg3 shouldNotifyDelegate:(BOOL)arg4 withReason:(long long)arg5;
- (void)_handleScrollViewTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_endAppearanceTransitionForChildViewControllers;
- (void)_beginAppearanceTransitionForChildViewControllers:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_endAppearanceTransitionForChildViewControllerIfNeeded:(id)arg1;
- (void)_beginAppearanceTransitionIfNeeded:(BOOL)arg1 forChildViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_setHighlighted:(BOOL)arg1 forViewController:(id)arg2;
- (void)_setHighlighted:(BOOL)arg1 forViewControllerAtIndex:(long long)arg2;
- (void)_removeViewController:(id)arg1;
- (void)_removeInactiveViewControllersFromHierarchy;
- (void)_reapActiveViews;
- (void)_reapViewAtIndex:(long long)arg1;
- (id)_insertViewControllerForIndex:(long long)arg1;
- (void)_transitionTopAndBottomViewControllersToVisible:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_transitionToVisible:(BOOL)arg1;
- (void)_transitionToDisplayMode:(long long)arg1 usingTransitionCoordinator:(id)arg2 assumingSize:(CGSize)arg3;
- (void)_adjustForEnvironmentChangeWithSize:(CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_adjustForEnvironmentChangeIfNeededWithSize:(CGSize)arg1 transitionCoordinator:(id)arg2;
- (double)_verticalSpacing;
- (void)_updateFrameForViewController:(id)arg1 atIndex:(long long)arg2 withCoordinator:(id)arg3 assumingSize:(CGSize)arg4;
- (void)_updateFramesForActiveViewControllersWithCoordinator:(id)arg1 assumingSize:(CGSize)arg2;
- (void)_updateContentSize;
- (void)updateContentInsets;
- (double)_totalHeight;
- (void)_tileViews;
- (void)_setFrame:(CGRect)arg1 forVisibleViewAtIndex:(long long)arg2;
- (void)_scrollToSelectedItemAnimated:(BOOL)arg1;
- (void)_reloadDataIfNeeded;
- (void)_populateViewsInFrame:(CGRect)arg1;
- (CGRect)_frameForViewAtIndex:(long long)arg1 displayMode:(long long)arg2 size:(CGSize)arg3;
- (CGRect)_frameForViewAtIndex:(long long)arg1 size:(CGSize)arg2;
- (CGRect)_frameForViewAtIndex:(long long)arg1;
- (_NSRange)_rangeOfItemsInRect:(CGRect)arg1;
- (id)_indexesOfItemsInRect:(CGRect)arg1;
- (double)_selectedItemHeightInSize:(CGSize)arg1 shouldIgnoreInsets:(BOOL)arg2;
- (double)_selectedItemHeightInSize:(CGSize)arg1;
- (double)_preferredSelectedItemHeight;
- (double)_regularItemHeight;
- (long long)_closestItemAtPoint:(CGPoint)arg1;
- (void)_dequeueAndPerformBatchUpdatesIfNeeded;
- (BOOL)_canPerformBatchUpdates;
- (double)preferredItemHeightGivenWidth:(double)arg1;
- (void)scrollToSelectedItemAnimated:(BOOL)arg1;
@property(readonly, nonatomic) NSIndexSet *visibleIndexes;
- (long long)itemAtPoint:(CGPoint)arg1;
- (void)reloadData;
- (void)performBatchUpdates:(id /* CDUnknownBlockType */)arg1;
- (void)reloadItemsAtIndexes:(id)arg1;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)deleteItemsAtIndexes:(id)arg1;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)insertItemAtIndex:(long long)arg1;
- (void)setSelectedItemIndex:(long long)arg1 animated:(BOOL)arg2 shouldScroll:(BOOL)arg3;
@property(readonly, nonatomic) NSArray *visibleBottomViewControllers;
@property(readonly, nonatomic) NSArray *visibleTopViewControllers;
@property(readonly, nonatomic) NSArray *visibleViewControllers;
- (id)viewControllerForSelectedItem;
- (id)viewControllerForItemAtIndex:(long long)arg1;
- (id)viewControllerForItemAtPoint:(CGPoint)arg1;
- (id)dequeueReusableViewControllerForItemAtIndex:(long long)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

