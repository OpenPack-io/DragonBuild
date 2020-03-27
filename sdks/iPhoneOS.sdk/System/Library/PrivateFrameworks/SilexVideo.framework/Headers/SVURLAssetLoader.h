//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVURLAssetLoading-Protocol.h>

@class NSDictionary;
@protocol SVURLAssetFactory, SVVideoURLProviding;

@interface SVURLAssetLoader : NSObject <SVURLAssetLoading>
{
    id <SVURLAssetFactory> _URLAssetFactory;
    id <SVVideoURLProviding> _URLProvider;
    NSDictionary *_options;
}

@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <SVVideoURLProviding> URLProvider; // @synthesize URLProvider=_URLProvider;
@property(readonly, nonatomic) id <SVURLAssetFactory> URLAssetFactory; // @synthesize URLAssetFactory=_URLAssetFactory;
// - (void).cxx_destruct;
- (id /* CDUnknownBlockType */)URLAssetWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithURLAssetFactory:(id)arg1 URLProvider:(id)arg2 options:(id)arg3;

@end

