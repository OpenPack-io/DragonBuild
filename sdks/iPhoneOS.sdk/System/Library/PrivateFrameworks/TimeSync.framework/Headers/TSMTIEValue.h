//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSMTIEValue : NSObject
{
    double _observationInterval;
    double _mtie;
}

@property(readonly, nonatomic) double mtie; // @synthesize mtie=_mtie;
@property(readonly, nonatomic) double observationInterval; // @synthesize observationInterval=_observationInterval;
- (id)description;
- (id)initWithObservationInterval:(double)arg1 andMTIE:(double)arg2;

@end

