//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueLabel-Protocol.h>

@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel>
{
    NSString *_name;
    NSString *_shortName;
    NSString *_detail;
}

@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithLabel:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3;
- (id)init;

@end

