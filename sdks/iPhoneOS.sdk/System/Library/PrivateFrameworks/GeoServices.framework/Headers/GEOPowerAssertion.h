//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEOPowerAssertion : NSObject
{
    NSString *_identifier;
    double _timeout;
    unsigned int _assertion;
    long long _type;
}

// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 timeout:(double)arg3;

@end

