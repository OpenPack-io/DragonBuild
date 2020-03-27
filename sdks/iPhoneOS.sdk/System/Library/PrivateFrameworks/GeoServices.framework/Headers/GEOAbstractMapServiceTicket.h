//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

#import <GeoServices/GEOMapServiceTicket-Protocol.h>

@class GEOCategorySearchResultSection, GEODirectionIntent, GEOMapRegion, GEOPDMerchantLookupResult, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSString;

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <GEOMapServiceTicket>
{
    GEOMapRegion *_resultBoundingRegion;
    BOOL _chainResultSet;
    NSArray *_relatedSearchSuggestions;
    NSArray *_browseCategories;
    GEORelatedSearchSuggestion *_defaultRelatedSuggestion;
    NSString *_resultSectionHeader;
    int _searchResultType;
    NSString *_resultDisplayHeader;
    NSArray *_displayHeaderSubstitutes;
    BOOL _shouldEnableRedoSearch;
    GEOResolvedItem *_clientResolvedResult;
    GEODirectionIntent *_directionIntent;
    NSArray *_retainedSearchMetadata;
    NSArray *_searchResultSections;
    unsigned int _dymSuggestionVisibleTime;
    BOOL _showDymSuggestionCloseButton;
    GEOPDMerchantLookupResult *_merchantLookupResult;
    GEOCategorySearchResultSection *_categorySearchResultSection;
}

@property(readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection; // @synthesize categorySearchResultSection=_categorySearchResultSection;
@property(readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult; // @synthesize merchantLookupResult=_merchantLookupResult;
@property(readonly, nonatomic) NSArray *searchResultSections; // @synthesize searchResultSections=_searchResultSections;
@property(readonly, nonatomic) BOOL showDymSuggestionCloseButton; // @synthesize showDymSuggestionCloseButton=_showDymSuggestionCloseButton;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime; // @synthesize dymSuggestionVisibleTime=_dymSuggestionVisibleTime;
@property(readonly, nonatomic) BOOL shouldEnableRedoSearch; // @synthesize shouldEnableRedoSearch=_shouldEnableRedoSearch;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes; // @synthesize displayHeaderSubstitutes=_displayHeaderSubstitutes;
@property(readonly, nonatomic) NSString *resultDisplayHeader; // @synthesize resultDisplayHeader=_resultDisplayHeader;
@property(readonly, nonatomic) int searchResultType; // @synthesize searchResultType=_searchResultType;
@property(readonly, nonatomic) NSString *resultSectionHeader; // @synthesize resultSectionHeader=_resultSectionHeader;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion; // @synthesize defaultRelatedSuggestion=_defaultRelatedSuggestion;
@property(readonly, nonatomic) NSArray *browseCategories; // @synthesize browseCategories=_browseCategories;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions; // @synthesize relatedSearchSuggestions=_relatedSearchSuggestions;
@property(readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet; // @synthesize chainResultSet=_chainResultSet;
@property(readonly, nonatomic) GEOMapRegion *resultBoundingRegion; // @synthesize resultBoundingRegion=_resultBoundingRegion;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata; // @synthesize retainedSearchMetadata=_retainedSearchMetadata;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent; // @synthesize directionIntent=_directionIntent;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult; // @synthesize clientResolvedResult=_clientResolvedResult;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
- (void)applyToPlaceInfo:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithRefinedHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* CDUnknownBlockType */)arg4 queue:(id)arg5;
- (void)submitWithRefinedHandler:(id /* CDUnknownBlockType */)arg1 timeout:(long long)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(id /* CDUnknownBlockType */)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* CDUnknownBlockType */)arg4;
- (void)submitWithRefinedHandler:(id /* CDUnknownBlockType */)arg1 timeout:(long long)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3;
- (void)submitWithRefinedHandler:(id /* CDUnknownBlockType */)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* CDUnknownBlockType */)arg4 queue:(id)arg5;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 timeout:(long long)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3 queue:(id)arg4;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* CDUnknownBlockType */)arg4;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 timeout:(long long)arg2 networkActivity:(id /* CDUnknownBlockType */)arg3;
- (void)submitWithHandler:(id /* CDUnknownBlockType */)arg1 networkActivity:(id /* CDUnknownBlockType */)arg2;

@end

