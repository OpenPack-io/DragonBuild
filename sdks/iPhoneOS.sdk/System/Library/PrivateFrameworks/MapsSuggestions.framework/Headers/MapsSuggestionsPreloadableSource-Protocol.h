//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class CLLocation;

@protocol MapsSuggestionsPreloadableSource <MapsSuggestionsSource>
- (BOOL)suggestionsEntriesAtLocation:(CLLocation *)arg1 period:(NSDateInterval )arg2 handler:(void (^)(NSArray , NSError *))arg3;
@end

