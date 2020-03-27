//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRDiffBase.h>

@class NRPBDevicePropertyDiff;
@protocol NSObject><NSCopying;

@interface NRDevicePropertyDiff : NRDiffBase
{
    id <NSObject><NSCopying> _value;
}

+ (id)unpackPropertyValue:(id)arg1;
+ (id)packPropertyValue:(id)arg1;
+ (id)enclosedClassTypes;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) id <NSObject><NSCopying> value; // @synthesize value=_value;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

