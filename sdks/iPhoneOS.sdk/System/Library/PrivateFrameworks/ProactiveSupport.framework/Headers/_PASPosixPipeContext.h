//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface _PASPosixPipeContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_readChannel;
    NSFileHandle *_writeHandle;
    BOOL _stop;
}

// - (void).cxx_destruct;
- (void)startReadWithHandler:(id /* CDUnknownBlockType */)arg1;
- (int)setupWithSubprocessFd:(int)arg1 fileActions:(void )arg2 queue:(id)arg3 group:(id)arg4 readErrno:(int )arg5;

@end

