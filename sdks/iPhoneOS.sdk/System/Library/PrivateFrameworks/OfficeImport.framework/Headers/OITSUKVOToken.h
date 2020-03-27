//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUKVOToken : NSObject
{
    NSObject *_observer;
    NSObject *_target;
    NSString *_keyPath;
    void _context;
}

@property(readonly, nonatomic) void context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) NSObject *target; // @synthesize target=_target;
@property(readonly, nonatomic) NSObject *observer; // @synthesize observer=_observer;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 target:(id)arg2 keyPath:(id)arg3 context:(void )arg4;
- (id)init;

@end

