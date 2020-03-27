//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface AFPeerInfo : NSObject <NSSecureCoding>
{
    BOOL _isDeviceOwnedByCurrentUser;
    NSString *_idsIdentifier;
    NSString *_idsFirstRoutableInternetDestination;
    NSString *_rapportEffectiveIdentifier;
    NSString *_mediaSystemIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(copy, nonatomic) NSString *rapportEffectiveIdentifier; // @synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier;
@property(copy, nonatomic) NSString *idsFirstRoutableInternetDestination; // @synthesize idsFirstRoutableInternetDestination=_idsFirstRoutableInternetDestination;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic, setter=setDeviceOwnedByCurrentUser:) BOOL isDeviceOwnedByCurrentUser; // @synthesize isDeviceOwnedByCurrentUser=_isDeviceOwnedByCurrentUser;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)_init;

@end

