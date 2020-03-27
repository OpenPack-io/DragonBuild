//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TUSearchController;

__attribute__((visibility("hidden")))
@interface TUAutocompleteResultPartitioner : NSObject
{
    TUSearchController *_searchController;
    NSMutableArray *_normalResultsArray;
    NSMutableArray *_foundInMailResultsArray;
    NSMutableArray *_foundOnServersResultsArray;
}

+ (BOOL)sourceTypeIsFoundOnServers:(NSUInteger)arg1;
+ (BOOL)sourceTypeIsFoundInMail:(NSUInteger)arg1;
@property(retain, nonatomic) NSMutableArray *foundOnServersResultsArray; // @synthesize foundOnServersResultsArray=_foundOnServersResultsArray;
@property(retain, nonatomic) NSMutableArray *foundInMailResultsArray; // @synthesize foundInMailResultsArray=_foundInMailResultsArray;
@property(retain, nonatomic) NSMutableArray *normalResultsArray; // @synthesize normalResultsArray=_normalResultsArray;
@property __weak TUSearchController *searchController; // @synthesize searchController=_searchController;
// - (void).cxx_destruct;
- (void)addResult:(id)arg1;
- (id)init;
- (id)searchResults;

@end

