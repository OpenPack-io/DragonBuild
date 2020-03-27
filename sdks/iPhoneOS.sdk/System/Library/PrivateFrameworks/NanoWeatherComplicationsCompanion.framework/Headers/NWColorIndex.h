//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface NWColorIndex : NSObject
{
    double _value;
    UIColor *_color;
}

+ (id)indexWithValue:(double)arg1 color:(id)arg2;
+ (id)zeroIndex;
+ (id)indexForValue:(double)arg1;
+ (id)colorForValue:(double)arg1;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithValue:(double)arg1 color:(id)arg2;

@end

