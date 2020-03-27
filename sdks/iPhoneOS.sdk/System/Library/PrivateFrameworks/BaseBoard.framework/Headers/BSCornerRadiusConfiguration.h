//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>

@class NSString;

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying>
{
    double _topLeft;
    double _bottomLeft;
    double _bottomRight;
    double _topRight;
}

@property(readonly, nonatomic) double topRight; // @synthesize topRight=_topRight;
@property(readonly, nonatomic) double bottomRight; // @synthesize bottomRight=_bottomRight;
@property(readonly, nonatomic) double bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(readonly, nonatomic) double topLeft; // @synthesize topLeft=_topLeft;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (BOOL)isEqualToCornerRadiusConfiguration:(id)arg1;
@property(readonly, nonatomic) BOOL isCongruent;
- (id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4;
- (id)initWithCornerRadius:(double)arg1;

@end

