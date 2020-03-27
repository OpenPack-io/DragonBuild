//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;
@protocol _TVPagePerformanceDelegate;

@interface _TVPagePerformanceController : NSObject
{
    struct timeval _baseTimeval;
    NSUInteger _baseAbsoluteTime;
    NSMutableArray *_templateEntries;
    BOOL _pageHasSubpages;
    BOOL _pageWasInterrupted;
    BOOL _pageWasUpdated;
    BOOL _pageIsLoading;
    id <_TVPagePerformanceDelegate> _delegate;
    NSUInteger _viewWillLoad;
    NSUInteger _viewDidLoad;
    NSUInteger _viewWillAppear;
    NSUInteger _viewDidAppear;
    NSUInteger _viewWillDisappear;
    NSUInteger _viewDidDisappear;
    NSUInteger _pageCompleteDuration;
    NSUInteger _pageSetupDuration;
    NSUInteger _pageRenderDuration;
    NSUInteger _pageResourceDuration;
    NSUInteger _pageTransitionDuration;
}

+ (void)postNotificationForImageProxy:(id)arg1 withLoadingStatus:(BOOL)arg2;
+ (BOOL)isPerformanceUIEnabled;
@property(nonatomic) NSUInteger pageTransitionDuration; // @synthesize pageTransitionDuration=_pageTransitionDuration;
@property(nonatomic) NSUInteger pageResourceDuration; // @synthesize pageResourceDuration=_pageResourceDuration;
@property(nonatomic) NSUInteger pageRenderDuration; // @synthesize pageRenderDuration=_pageRenderDuration;
@property(nonatomic) NSUInteger pageSetupDuration; // @synthesize pageSetupDuration=_pageSetupDuration;
@property(nonatomic) NSUInteger pageCompleteDuration; // @synthesize pageCompleteDuration=_pageCompleteDuration;
@property(nonatomic) BOOL pageIsLoading; // @synthesize pageIsLoading=_pageIsLoading;
@property(nonatomic) NSUInteger viewDidDisappear; // @synthesize viewDidDisappear=_viewDidDisappear;
@property(nonatomic) NSUInteger viewWillDisappear; // @synthesize viewWillDisappear=_viewWillDisappear;
@property(nonatomic) NSUInteger viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) NSUInteger viewWillAppear; // @synthesize viewWillAppear=_viewWillAppear;
@property(nonatomic) NSUInteger viewDidLoad; // @synthesize viewDidLoad=_viewDidLoad;
@property(nonatomic) NSUInteger viewWillLoad; // @synthesize viewWillLoad=_viewWillLoad;
@property(nonatomic) BOOL pageWasUpdated; // @synthesize pageWasUpdated=_pageWasUpdated;
@property(nonatomic) BOOL pageWasInterrupted; // @synthesize pageWasInterrupted=_pageWasInterrupted;
@property(nonatomic) BOOL pageHasSubpages; // @synthesize pageHasSubpages=_pageHasSubpages;
@property(nonatomic) __weak id <_TVPagePerformanceDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_maybeDeliverMetrics;
- (BOOL)_isMetricsReady;
- (void)_calculatePageDurations;
- (id)buildPagePerformanceView;
@property(readonly, nonatomic) NSDictionary *metrics;
- (NSUInteger)templateDidComplete;
- (id)getEntryForTemplate:(id)arg1;
- (void)markViewDidDisappear;
- (void)markViewWillDisappear;
- (void)markViewDidAppear;
- (void)markViewWillAppear;
- (void)markViewDidLoad;
- (void)markViewWillLoad;
- (id)init;

@end

