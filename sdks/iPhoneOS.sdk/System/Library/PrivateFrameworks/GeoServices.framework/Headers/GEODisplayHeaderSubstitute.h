//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDDisplayHeaderSubstitute, GEORelatedSearchSuggestion, NSString;

@interface GEODisplayHeaderSubstitute : NSObject
{
    GEOPDDisplayHeaderSubstitute *_displayHeaderSubstitute;
    GEORelatedSearchSuggestion *_relatedSearchSuggestion;
}

@property(retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
@property(retain, nonatomic) GEOPDDisplayHeaderSubstitute *displayHeaderSubstitute; // @synthesize displayHeaderSubstitute=_displayHeaderSubstitute;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *interpretedQuery;
@property(readonly, nonatomic) int substituteType;
- (id)initWithPDDisplayHeaderSubstitute:(id)arg1;

@end

