//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject
{
    NSDictionary *_dictionary;
    WLKPlayable *_playable;
}

@property(readonly, nonatomic) WLKPlayable *playable; // @synthesize playable=_playable;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

