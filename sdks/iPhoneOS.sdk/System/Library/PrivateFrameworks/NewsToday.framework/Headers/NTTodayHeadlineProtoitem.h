//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTTodayProtoitem-Protocol.h>

@class NSString, SFSearchResult;
@protocol FCHeadlineProviding;

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem>
{
    NSString *_identifier;
    id <FCHeadlineProviding> _headline;
    SFSearchResult *_searchResult;
}

@property(readonly, copy, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, copy, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 forLeadingCellAppearance:(BOOL)arg6 preferredDynamicSlotAllocation:(NSUInteger)arg7;
- (id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(BOOL)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 headline:(id)arg2 searchResult:(id)arg3;
- (id)init;

@end

