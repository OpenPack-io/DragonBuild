//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface FCPair : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    id mFirst;
    id mSecond;
}

+ (id)pair;
+ (id)pairWithPair:(id)arg1;
+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
// - (void).cxx_destruct;
- (void)p_SetSecond:(id)arg1;
- (void)p_SetFirst:(id)arg1;
- (id)second;
- (id)first;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPair:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

