//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/BSPathProviding-Protocol.h>

@class NSURL;

@interface NTKSnapshotCachePathProvider : NSObject <BSPathProviding>
{
}

@property(readonly, nonatomic) NSURL *cachesPath;
@property(readonly, nonatomic) NSURL *libraryPath;
@property(readonly, nonatomic) NSURL *defaultPath;

@end

