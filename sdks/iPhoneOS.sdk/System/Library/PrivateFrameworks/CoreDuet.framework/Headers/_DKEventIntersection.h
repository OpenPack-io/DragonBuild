//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface _DKEventIntersection : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_events;
}

+ (id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;
@property(readonly) NSArray *events; // @synthesize events=_events;
@property(readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3;

@end

