//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsContacts, MapsSuggestionsRoutine, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MapsSuggestionsLocationUpdater, MapsSuggestionsNetworkRequester, MapsSuggestionsRoutineRequester, MapsSuggestionsShortcutStorage, MapsSuggestionsShortcutSuggestor, MapsSuggestionsStrategy;

@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject>
{
    BOOL _hasTracker;
    id <MapsSuggestionsStrategy> _strategy;
    long long _managerStyle;
    id <MapsSuggestionsLocationUpdater> _locationUpdater;
    NSMutableArray *_sourceClasses;
    NSMutableSet _includePreFilters;
    NSMutableSet _includePostFilters;
    NSMutableArray _includeImprovers;
    NSMutableArray _includeDedupers;
    NSMutableSet _excludePreFilters;
    NSMutableSet _excludePostFilters;
    NSMutableArray _excludeImprovers;
    NSMutableArray _excludeDedupers;
    NSMutableDictionary _titleFormatters;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    id <MapsSuggestionsRoutineRequester> _routineRequester;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsContacts *_contacts;
    id <MapsSuggestionsShortcutStorage> _shortcutStorage;
    id <MapsSuggestionsShortcutSuggestor> _shortcutSuggestor;
}

+ (id)simpleStrategy;
+ (id)forEveryone;
+ (id)forTests;
+ (id)forSimulator;
+ (id)_forPhone;
+ (id)forDevice;
+ (id)currentEngine;
@property(retain, nonatomic) id <MapsSuggestionsShortcutSuggestor> shortcutSuggestor; // @synthesize shortcutSuggestor=_shortcutSuggestor;
@property(retain, nonatomic) id <MapsSuggestionsShortcutStorage> shortcutStorage; // @synthesize shortcutStorage=_shortcutStorage;
@property(retain, nonatomic) MapsSuggestionsContacts *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) MapsSuggestionsRoutine *routine; // @synthesize routine=_routine;
@property(retain, nonatomic) id <MapsSuggestionsRoutineRequester> routineRequester; // @synthesize routineRequester=_routineRequester;
@property(retain, nonatomic) id <MapsSuggestionsNetworkRequester> networkRequester; // @synthesize networkRequester=_networkRequester;
@property(retain, nonatomic) NSMutableDictionary *titleFormatters; // @synthesize titleFormatters=_titleFormatters;
@property(retain, nonatomic) NSMutableArray *excludeDedupers; // @synthesize excludeDedupers=_excludeDedupers;
@property(retain, nonatomic) NSMutableArray *excludeImprovers; // @synthesize excludeImprovers=_excludeImprovers;
@property(retain, nonatomic) NSMutableSet *excludePostFilters; // @synthesize excludePostFilters=_excludePostFilters;
@property(retain, nonatomic) NSMutableSet *excludePreFilters; // @synthesize excludePreFilters=_excludePreFilters;
@property(retain, nonatomic) NSMutableArray *includeDedupers; // @synthesize includeDedupers=_includeDedupers;
@property(retain, nonatomic) NSMutableArray *includeImprovers; // @synthesize includeImprovers=_includeImprovers;
@property(retain, nonatomic) NSMutableSet *includePostFilters; // @synthesize includePostFilters=_includePostFilters;
@property(retain, nonatomic) NSMutableSet *includePreFilters; // @synthesize includePreFilters=_includePreFilters;
@property(retain, nonatomic) NSMutableArray *sourceClasses; // @synthesize sourceClasses=_sourceClasses;
@property(nonatomic) BOOL hasTracker; // @synthesize hasTracker=_hasTracker;
@property(retain, nonatomic) id <MapsSuggestionsLocationUpdater> locationUpdater; // @synthesize locationUpdater=_locationUpdater;
@property(nonatomic) long long managerStyle; // @synthesize managerStyle=_managerStyle;
@property(retain, nonatomic) id <MapsSuggestionsStrategy> strategy; // @synthesize strategy=_strategy;
// - (void).cxx_destruct;
- (id)withManagerStyle:(long long)arg1;
- (id)buildWithoutStoring;
- (id)build;
- (id)withTitleFormatter:(id)arg1 forType:(long long)arg2;
- (id)withSourceClasses:(id)arg1;
- (id)withoutDedupers:(id)arg1;
- (id)withDedupers:(id)arg1;
- (id)withoutImprovers:(id)arg1;
- (id)withImprovers:(id)arg1;
- (id)withPostFilters:(NSSet )arg1;
- (id)withPreFilters:(NSSet )arg1;
- (id)withFavorites;
- (id)withoutTracker;
- (id)withLocationUpdater:(id)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;

@end

