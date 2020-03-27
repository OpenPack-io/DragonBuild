//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString;

@interface SFSearchResult (SafariSharedExtras) <WBSCompletionListItem>
+ (id)safari_sfSearchResultWithUniqueIdentifier;
@property(readonly, nonatomic) NSString *safari_loggingDescription;
- (id)_firstCardSectionOfClass:(Class)arg1 ofCard:(id)arg2 outIndex:(NSUInteger )arg3;
- (NSUInteger)safari_indexOfFirstInlineCardSectionOfClass:(Class)arg1;
- (id)safari_firstInlineCardSectionOfClass:(Class)arg1;
- (id)safari_firstCardSectionOfClass:(Class)arg1;
@property(readonly, nonatomic) NSUInteger engagementDestination;
@property(readonly, nonatomic) long long parsecQueryID;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@end

