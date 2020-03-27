//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSMutableDictionary;
@protocol SVPrefetcherFactory, SVVideoQueueObserving, SVVideoQueueProviding;

@interface SVPrefetchManager : NSObject <SVVideoTransitionObserver>
{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVPrefetcherFactory> _prefetcherFactory;
    NSMutableDictionary *_prefetchers;
}

@property(readonly, nonatomic) NSMutableDictionary *prefetchers; // @synthesize prefetchers=_prefetchers;
@property(readonly, nonatomic) id <SVPrefetcherFactory> prefetcherFactory; // @synthesize prefetcherFactory=_prefetcherFactory;
@property(readonly, nonatomic) id <SVVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
// - (void).cxx_destruct;
- (void)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (void)updatePrefetchersWithCurrentVideo:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPrefetcherFactory:(id)arg1 queueProvider:(id)arg2 queueObserver:(id)arg3;

@end

