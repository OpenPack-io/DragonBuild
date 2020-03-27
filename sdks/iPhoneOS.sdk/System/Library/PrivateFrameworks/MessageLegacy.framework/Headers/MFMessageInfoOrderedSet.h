//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessageInfo, MFSparseMutable64IndexSet, NSArray, NSMutableArray, NSMutableDictionary;

@interface MFMessageInfoOrderedSet : NSObject
{
    MFSparseMutable64IndexSet *_knownMessageIDs;
    NSMutableArray *_mutableMessageInfos;
    NSMutableDictionary *_duplicateMessageInfos;
    id /* CDUnknownBlockType */ _comparator;
    id /* CDUnknownBlockType */ _duplicatePreferenceComparator;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ duplicatePreferenceComparator; // @synthesize duplicatePreferenceComparator=_duplicatePreferenceComparator;
@property(copy, nonatomic) id /* CDUnknownBlockType */ comparator; // @synthesize comparator=_comparator;
- (void)enumerateUniqueMessageInfosWithOptions:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (id)debugDescription;
- (NSUInteger)_scanForMessageInfoSimilarTo:(id)arg1;
- (void)_invalidate;
- (id)_duplicateMessageInfosForMessageInfo:(id)arg1;
- (void)_removeDuplicatesForMessageInfo:(id)arg1;
- (void)_addMessageInfoToDuplicates:(id)arg1;
- (id)allDuplicatesOfMessageInfo:(id)arg1;
- (id)duplicatesOfMessageInfo:(id)arg1;
@property(readonly, nonatomic) MFMessageInfo *lastMessage;
@property(readonly, nonatomic) MFMessageInfo *firstMessage;
@property(readonly, nonatomic) NSArray *allMessageInfos;
@property(readonly, nonatomic) NSArray *uniqueMessageInfos;
@property(readonly, nonatomic) NSUInteger countWithDuplicates;
@property(readonly, nonatomic) NSUInteger count;
- (void)replaceMessageInfo:(id)arg1 withReplacement:(id)arg2 inPlace:(BOOL)arg3;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (id)messageInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (NSUInteger)indexOfMessageInfo:(id)arg1;
- (void)removeAllMessageInfos;
- (void)removeMessageInfosAtIndexes:(id)arg1;
- (NSUInteger)removeMessageInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)removeMessageInfo:(id)arg1;
- (NSUInteger)addMessageInfo:(id)arg1;
- (id)initWithComparator:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;

@end

