//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem
{
    NSMutableSet *_propStats;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *propStats; // @synthesize propStats=_propStats;
// - (void).cxx_destruct;
- (BOOL)hasPropertyError;
- (void)addPropStat:(id)arg1;
- (id)description;
- (id)init;

@end

