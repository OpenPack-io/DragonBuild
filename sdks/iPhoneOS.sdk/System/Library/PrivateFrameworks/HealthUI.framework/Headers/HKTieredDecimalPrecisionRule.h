//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDecimalPrecisionRule-Protocol.h>

@interface HKTieredDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>
{
}

- (id)numberFormatter;
- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)maximumDecimalPrecision;
- (long long)minimumDecimalPrecision;

@end

