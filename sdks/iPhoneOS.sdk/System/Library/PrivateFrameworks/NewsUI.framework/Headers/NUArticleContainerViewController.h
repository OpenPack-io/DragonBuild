//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NUArticleBarButtonItemManagerDelegate-Protocol.h>
#import <NewsUI/NUInterstitialAdManagerDelegate-Protocol.h>
#import <NewsUI/NULoadingDelegate-Protocol.h>
#import <NewsUI/NUNavigationControl-Protocol.h>
#import <NewsUI/NUPageViewControllerDataSource-Protocol.h>
#import <NewsUI/NUPageViewControllerDelegate-Protocol.h>

@class NUArticleBarButtonItemManager, NUArticleNavigationController, NUInterstitialAdManager, NUPageViewController;
@protocol NUArticleContainerViewControllerDelegate, NUPaging, NUPagingFactory, NURouter;

@interface NUArticleContainerViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, NUPageViewControllerDelegate, NUPageViewControllerDataSource, NUArticleBarButtonItemManagerDelegate, NUInterstitialAdManagerDelegate, NUNavigationControl, NULoadingDelegate>
{
    BOOL _linkPreviewing;
    id <NUArticleContainerViewControllerDelegate> _delegate;
    NUArticleNavigationController *_navigationController;
    NUPageViewController *_pageViewController;
    id <NUPagingFactory> _pagingFactory;
    NUInterstitialAdManager *_interstitialAdManager;
    id <NUPaging> _paging;
    NUArticleBarButtonItemManager *_barButtonItemManager;
    id <NURouter> _router;
}

@property(readonly, nonatomic) id <NURouter> router; // @synthesize router=_router;
@property(readonly, nonatomic) NUArticleBarButtonItemManager *barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(retain, nonatomic) id <NUPaging> paging; // @synthesize paging=_paging;
@property(readonly, nonatomic) NUInterstitialAdManager *interstitialAdManager; // @synthesize interstitialAdManager=_interstitialAdManager;
@property(readonly, nonatomic) id <NUPagingFactory> pagingFactory; // @synthesize pagingFactory=_pagingFactory;
@property(readonly, nonatomic) NUPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(readonly, nonatomic) NUArticleNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic, getter=isLinkPreviewing) BOOL linkPreviewing; // @synthesize linkPreviewing=_linkPreviewing;
@property(nonatomic) __weak id <NUArticleContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)viewControllerPageableForViewController:(id)arg1;
- (void)styleNavigationForPage:(id)arg1;
- (void)loadingDidFinishWithError:(id)arg1;
- (void)loadingWillStart;
- (void)enableNavigation:(BOOL)arg1;
- (id)interstitialAdManager:(id)arg1 pageAfterPage:(id)arg2;
- (void)interstitialAdManager:(id)arg1 didUnloadInterstitialPage:(id)arg2;
- (void)interstitialAdManager:(id)arg1 didLoadInterstitialPage:(id)arg2;
- (void)articleBarButtonItemManagerDidLayoutBarButtonItems:(id)arg1;
- (void)articleBarButtonItemManager:(id)arg1 performShareActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManager:(id)arg1 performNextActionForBarButtonItem:(id)arg2;
- (void)articleBarButtonItemManager:(id)arg1 performDoneActionForBarButtonItem:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 viewController:(id)arg2 changedVisibilityFactor:(double)arg3;
- (void)pageViewController:(id)arg1 didChangeVisibleViewControllerFromViewController:(id)arg2 direction:(NSUInteger)arg3;
- (void)loadWithArticleIDs:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPagingFactory:(id)arg1 interstitialAdManager:(id)arg2 router:(id)arg3;
- (id)init;

@end

