//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class OITSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormatCondition : NSObject <NSCopying>
{
    int _conditionType;
    double _conditionValue;
    OITSUCustomFormatData *_data;
}

@property(readonly, nonatomic) OITSUCustomFormatData *data; // @synthesize data=_data;
@property(readonly, nonatomic) double conditionValue; // @synthesize conditionValue=_conditionValue;
@property(readonly, nonatomic) int conditionType; // @synthesize conditionType=_conditionType;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (id)init;

@end

