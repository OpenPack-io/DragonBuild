//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIMotionEffectEvent.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent
{
    CGPoint _focusPosition;
}

@property(readonly, nonatomic) CGPoint focusPosition; // @synthesize focusPosition=_focusPosition;
- (double)velocityRelativeToPreviousEvent:(id)arg1;
- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1 focusPosition:(CGPoint)arg2;

@end

