//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSTimeConverter : NSObject
{
    NSArray *_taiutc;
}

- (double)leapSecondForTAIDate:(id)arg1;
- (double)leapSecondForUTCDate:(id)arg1;
- (id)utcDateFromTAIDate:(id)arg1;
- (id)taiDateFromUTCDate:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithTAIUTCArray:(id)arg1;
- (id)init;

@end

