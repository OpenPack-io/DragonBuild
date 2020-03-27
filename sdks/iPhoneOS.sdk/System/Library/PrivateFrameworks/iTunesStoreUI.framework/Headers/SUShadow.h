//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIColor;

@interface SUShadow : NSObject <NSSecureCoding, NSCopying>
{
    UIColor *_color;
    CGSize _offset;
    double _opacity;
    double _radius;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) CGSize offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)applyToLayer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

