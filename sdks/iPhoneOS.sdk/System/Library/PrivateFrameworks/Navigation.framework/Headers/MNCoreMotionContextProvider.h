//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOMotionContextProvider-Protocol.h>

@class CMActivityManager, MNTraceRecorder;
@protocol GEOMotionContextProviderDelegate;

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider>
{
    CMActivityManager *_activityManager;
    id <GEOMotionContextProviderDelegate> _delegate;
    MNTraceRecorder *_traceRecorder;
}

@property(nonatomic) __weak id <GEOMotionContextProviderDelegate> motionDelegate; // @synthesize motionDelegate=_delegate;
// - (void).cxx_destruct;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (void)dealloc;
- (id)initWithTraceRecorder:(id)arg1;

@end

