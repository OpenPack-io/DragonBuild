//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPresentationSizeObserverFactory-Protocol.h>

@protocol SVPlayerItemObserverFactory;

@interface SVVideoPresentationSizeObserverFactory : NSObject <SVVideoPresentationSizeObserverFactory>
{
    id <SVPlayerItemObserverFactory> _playerItemObserverFactory;
}

@property(readonly, nonatomic) id <SVPlayerItemObserverFactory> playerItemObserverFactory; // @synthesize playerItemObserverFactory=_playerItemObserverFactory;
// - (void).cxx_destruct;
- (id)createPresentationSizeObserverForVideo:(id)arg1;
- (id)initWithPlayerItemObserverFactory:(id)arg1;

@end

