//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUiOSMemoryWarningFlushable-Protocol.h>

@class TSUImage;

__attribute__((visibility("hidden")))
@interface TSDImageFillCachedImage : NSObject <TSUiOSMemoryWarningFlushable>
{
    id /* CDUnknownBlockType */ mHandler;
    TSUImage *mCachedImage;
//     struct os_unfair_lock_s mLock;
}

+ (id)cachedImageWithHandler:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;
- (void)flush;
@property(readonly, nonatomic) TSUImage *image;
- (id)initWithHandler:(id /* CDUnknownBlockType */)arg1;

@end

