//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding>
{
    NSString *_suffix;
    NSString *_customClientId;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *customClientId; // @synthesize customClientId=_customClientId;
@property(readonly, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChangeTrackingClientId:(id)arg1;
- (id)clientIdWithBundleId:(id)arg1;
- (id)clientId;
@property(readonly, nonatomic) BOOL hasCustomClientId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuffix:(id)arg1;
- (id)initWithCustomClientId:(id)arg1;

@end

