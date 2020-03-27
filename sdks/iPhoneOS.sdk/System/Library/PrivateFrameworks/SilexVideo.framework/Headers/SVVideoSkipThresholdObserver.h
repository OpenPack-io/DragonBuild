//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipThresholdObserving-Protocol.h>

@protocol SVVideoLoadingStateObserving, SVVideoSkipThreshold;

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving>
{
    BOOL _loading;
    id /* CDUnknownBlockType */ block;
    id <SVVideoSkipThreshold> _thresholdProvider;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
}

@property(readonly, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver; // @synthesize loadingStateObserver=_loadingStateObserver;
@property(readonly, nonatomic) id <SVVideoSkipThreshold> thresholdProvider; // @synthesize thresholdProvider=_thresholdProvider;
@property(copy, nonatomic, setter=onChange:) id /* CDUnknownBlockType */ block; // @synthesize block;
// - (void).cxx_destruct;
- (void)loadingCompletedWithThreshold:(double)arg1;
@property(readonly, nonatomic) BOOL loading; // @synthesize loading=_loading;
- (id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2;

@end

