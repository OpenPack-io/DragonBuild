//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface MTCallerSuppliedFields : NSObject
{
    NSArray *_eventData;
    NSDictionary *_cachedMergedFields;
}

@property(retain, nonatomic) NSDictionary *cachedMergedFields; // @synthesize cachedMergedFields=_cachedMergedFields;
@property(retain, nonatomic) NSArray *eventData; // @synthesize eventData=_eventData;
// - (void).cxx_destruct;
- (id)mergedFields;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForCallerSuppliedField:(id)arg1;
- (id)initWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;
- (id)initWithEventData:(id)arg1;

@end

