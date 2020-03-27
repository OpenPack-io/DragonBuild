//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface WBSOneShotTimer : NSObject
{
    id /* CDUnknownBlockType */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_fireDate;
}

@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)invalidate;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;

@end

