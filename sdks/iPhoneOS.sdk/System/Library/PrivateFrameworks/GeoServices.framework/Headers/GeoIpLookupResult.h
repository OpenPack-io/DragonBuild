//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GeoIpLookupResult : NSObject
{
    NSString *_ipAddress;
    CDStruct_2c43369c _latLong;
    NSString *_countryCode;
    NSString *_timeZone;
}

@property(readonly, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) CDStruct_c3b9c2ee latLong; // @synthesize latLong=_latLong;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
// - (void).cxx_destruct;
- (id)initWithGEOPDPlaceResponse:(id)arg1;

@end

