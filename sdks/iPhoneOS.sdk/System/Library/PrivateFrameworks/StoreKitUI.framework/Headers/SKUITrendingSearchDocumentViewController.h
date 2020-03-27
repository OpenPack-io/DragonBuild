//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>

@class SKUITrendingSearchTemplateElement, SKUITrendingSearchView, UIViewController;

@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUITrendingSearchView *_resultsView;
    SKUITrendingSearchTemplateElement *_template;
    UIViewController *_privacyViewController;
}

@property(retain, nonatomic) UIViewController *privacyViewController; // @synthesize privacyViewController=_privacyViewController;
@property(retain, nonatomic) SKUITrendingSearchTemplateElement *template; // @synthesize template=_template;
@property(retain, nonatomic) SKUITrendingSearchView *resultsView; // @synthesize resultsView=_resultsView;
// - (void).cxx_destruct;
- (UIEdgeInsets)_resultsViewContentInset;
- (void)_reloadResultsView;
- (void)searchResultButtonTapped:(id)arg1;
- (void)resultsViewTapRecognized:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)impressionableViewElements;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;

@end

