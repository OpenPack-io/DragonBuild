//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder
{
    NSArray *_items;
}

// - (void).cxx_destruct;
- (void)enumerateItemsWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateItemsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)itemAtIndex:(NSUInteger)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (id)universalEndDate;
- (id)universalStartDate;
- (NSUInteger)numberOfItems;
- (id)initWithItems:(id)arg1;

@end

