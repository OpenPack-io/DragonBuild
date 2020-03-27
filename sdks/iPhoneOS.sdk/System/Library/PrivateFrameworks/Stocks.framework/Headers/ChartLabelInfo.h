//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ChartLabelInfo : NSObject
{
    NSString *_string;
    CGSize _size;
    double _position;
    BOOL _immutable;
}

@property(readonly, nonatomic) BOOL immutable; // @synthesize immutable=_immutable;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)retainStringAndSizeFromLabelInfo:(id)arg1;
- (void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2;
- (void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2;

@end

