//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface CTCarrierSpaceUsagePlanItemData : NSObject <NSSecureCoding>
{
    long long _units;
    NSString *_capacity;
    NSString *_maxDataBeforeThrottling;
    NSString *_thisDeviceDataUsed;
    NSString *_sharedDataUsed;
    NSString *_sharedPlanIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *sharedPlanIdentifier; // @synthesize sharedPlanIdentifier=_sharedPlanIdentifier;
@property(retain, nonatomic) NSString *sharedDataUsed; // @synthesize sharedDataUsed=_sharedDataUsed;
@property(retain, nonatomic) NSString *thisDeviceDataUsed; // @synthesize thisDeviceDataUsed=_thisDeviceDataUsed;
@property(retain, nonatomic) NSString *maxDataBeforeThrottling; // @synthesize maxDataBeforeThrottling=_maxDataBeforeThrottling;
@property(retain, nonatomic) NSString *capacity; // @synthesize capacity=_capacity;
@property(nonatomic) long long units; // @synthesize units=_units;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

