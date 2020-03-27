//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMessageInfo, MFMessageInfoOrderedSet, NSArray;

@interface MFMessageCollectionInfo : NSObject
{
    MFMessageInfoOrderedSet *_messageInfoSet;
    long long _messageCollectionHash;
}

+ (NSUInteger)stateForMessages:(id)arg1;
@property(readonly, nonatomic) long long messageCollectionHash; // @synthesize messageCollectionHash=_messageCollectionHash;
// - (void).cxx_destruct;
@property(copy, nonatomic) id /* CDUnknownBlockType */ duplicatePreferenceComparator;
@property(readonly, nonatomic) NSUInteger state;
- (void)mergeWithCollection:(id)arg1;
@property(readonly, nonatomic) MFMessageInfo *visibleMessageInfo;
- (id)duplicatesOfMessageInfo:(id)arg1;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (id)messageInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (NSUInteger)indexOfMessageInfo:(id)arg1;
- (NSUInteger)removeMessageInfo:(id)arg1;
- (NSUInteger)addMessageInfo:(id)arg1;
@property(readonly, nonatomic) NSArray *allMessageInfos;
@property(readonly, nonatomic) NSArray *uniqueMessageInfos;
@property(readonly, nonatomic) NSUInteger messageCountWithDuplicates;
@property(readonly, nonatomic) NSUInteger messagesCount;
@property(readonly, nonatomic) MFMessageInfo *lastMessage;
@property(readonly, nonatomic) MFMessageInfo *firstMessage;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)debugDescription;
- (id)initWithHash:(long long)arg1 comparator:(id /* CDUnknownBlockType */)arg2;

@end

