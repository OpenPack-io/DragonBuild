//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface TVPMediaItemRollInfo : NSObject
{
    BOOL _skippable;
    NSUInteger _type;
    double _start;
    double _duration;
    NSNumber *_adamID;
}

@property(nonatomic, getter=isSkippable) BOOL skippable; // @synthesize skippable=_skippable;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double start; // @synthesize start=_start;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)_typeDescription;
- (id)description;
- (id)initWithType:(NSUInteger)arg1 start:(double)arg2 duration:(double)arg3;

@end

