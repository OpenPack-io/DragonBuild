//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface FMDFMIPSharedStateManager : NSObject
{
    NSURL *_fmipSharedFileStaticURL;
    NSObject<OS_dispatch_queue> *_stateManagerQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue; // @synthesize stateManagerQueue=_stateManagerQueue;
@property(retain) NSURL *fmipSharedFileStaticURL; // @synthesize fmipSharedFileStaticURL=_fmipSharedFileStaticURL;
// - (void).cxx_destruct;
- (id)_fmipSharedFileURL;
- (BOOL)_removeSharedInfo;
- (BOOL)_writeSharedInfo:(id)arg1;
- (id)_readSharedInfo;
- (NSUInteger)lostModeType;
- (BOOL)fmipActive;
- (void)recalculateLostMode;
- (void)setFMiPActive:(BOOL)arg1;
- (id)init;

@end

