//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SYStateProvider : NSObject
{
    unsigned int _type;
    NSUInteger _handle;
    id _state;
//     struct os_unfair_lock_s _lock;
    id /* CDUnknownBlockType */ _encoder;
}

+ (id)stateProviderWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
@property(copy, nonatomic) id /* CDUnknownBlockType */ encoder; // @synthesize encoder=_encoder;
// - (void).cxx_destruct;
- (id)_encodedState;
- (void)updateState:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 typeName:(id)arg3;
- (id)init;

@end

