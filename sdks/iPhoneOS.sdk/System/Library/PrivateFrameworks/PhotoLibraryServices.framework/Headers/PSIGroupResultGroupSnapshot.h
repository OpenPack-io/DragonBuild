//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSIDateFilter;

@interface PSIGroupResultGroupSnapshot : NSObject
{
    NSMutableArray *_tokens;
    NSMutableArray *_matchRanges;
    short _category;
    NSString *_contentString;
    NSString *_normalizedString;
    NSString *_lookupIdentifier;
    NSArray *_groupRanges;
    PSIDateFilter *_dateFilter;
    NSArray *_datedTokens;
    NSUInteger _groupId;
    NSUInteger _owningGroupId;
}

@property(readonly, nonatomic) NSUInteger owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(readonly, nonatomic) NSUInteger groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) short category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *datedTokens; // @synthesize datedTokens=_datedTokens;
@property(readonly, copy, nonatomic) PSIDateFilter *dateFilter; // @synthesize dateFilter=_dateFilter;
@property(readonly, nonatomic) NSArray *groupRanges; // @synthesize groupRanges=_groupRanges;
@property(readonly, copy, nonatomic) NSString *lookupIdentifier; // @synthesize lookupIdentifier=_lookupIdentifier;
@property(readonly, copy, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_normalizedString;
@property(readonly, copy, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(readonly, nonatomic) NSArray *matchRanges; // @synthesize matchRanges=_matchRanges;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
// - (void).cxx_destruct;
- (BOOL)isDateFilterFromImplicitToken;
- (BOOL)isDateFilterPartiallyFromFullSearchText;
- (BOOL)isDateFilterFromFullSearchText;
- (void)addMatchRange:(id)arg1;
- (void)addToken:(id)arg1;
- (id)initWithContentString:(id)arg1 lookupIdentifier:(id)arg2 category:(short)arg3;
- (id)initWithDateFilter:(id)arg1 datedTokens:(id)arg2;
- (id)initWithGroup:(id)arg1 token:(id)arg2;
- (id)initWithContentString:(id)arg1 normalizedString:(id)arg2 token:(id)arg3 category:(short)arg4 lookupIdentifier:(id)arg5 dateFilter:(id)arg6 groupId:(NSUInteger)arg7 owningGroupId:(NSUInteger)arg8 groupRanges:(id)arg9 datedTokens:(id)arg10;

@end

