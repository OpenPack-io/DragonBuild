//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CUIStyleEffectConfiguration : NSObject <NSCopying>
{
    long long _state;
    long long _presentationState;
    long long _value;
    NSUInteger _dimension1;
    NSString *_appearanceName;
    BOOL _useSimplifiedEffect;
    BOOL _foregroundColorShouldTintEffects;
    double _brightnessMultiplier;
    double _effectScale;
    NSUInteger _colorTemperature;
}

@property(nonatomic) double effectScale; // @synthesize effectScale=_effectScale;
@property(nonatomic) NSUInteger colorTemperature; // @synthesize colorTemperature=_colorTemperature;
@property(nonatomic) double brightnessMultiplier; // @synthesize brightnessMultiplier=_brightnessMultiplier;
@property(nonatomic) BOOL foregroundColorShouldTintEffects; // @synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects;
@property(nonatomic) BOOL useSimplifiedEffect; // @synthesize useSimplifiedEffect=_useSimplifiedEffect;
@property(copy, nonatomic) NSString *appearanceName; // @synthesize appearanceName=_appearanceName;
@property(nonatomic) NSUInteger dimension1; // @synthesize dimension1=_dimension1;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (BOOL)shouldRespectOutputBlending;
- (BOOL)shouldIgnoreForegroundColor;
- (void)dealloc;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;

@end

