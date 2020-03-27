//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSUUID;

@interface PRBeaconDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    NSNumber *_major;
    NSNumber *_minor;
    NSUInteger _macAddress;
}

+ (BOOL)supportsSecureCoding;
@property NSUInteger macAddress; // @synthesize macAddress=_macAddress;
@property(readonly) NSNumber *minor; // @synthesize minor=_minor;
@property(readonly) NSNumber *major; // @synthesize major=_major;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3;
- (id)init;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3;
- (id)initWithUUID:(id)arg1 major:(unsigned short)arg2;
- (id)initWithUUID:(id)arg1;

@end

