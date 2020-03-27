//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupEmitting-Protocol.h>

@class NSSet;
@protocol FCFeedGroupInsertionDescriptor;

@interface FCSpotlightFeedGroupEmitter : NSObject <FCFeedGroupEmitting>
{
    id <FCFeedGroupInsertionDescriptor> _insertionDescriptor;
}

+ (id)groupEmitterIdentifier;
+ (id)spotlightFeedTransformationWithContext:(id)arg1;
@property(readonly, copy, nonatomic) id <FCFeedGroupInsertionDescriptor> insertionDescriptor; // @synthesize insertionDescriptor=_insertionDescriptor;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldEmitContentInFavoritesOnlyMode;
@property(readonly, nonatomic) long long requiredForYouContentTypes;
@property(readonly, nonatomic) BOOL emitsSingletonGroups;
- (id)backingChannelTagIDWithConfiguration:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *emittableGroupTypes;
- (BOOL)wantsToInsertGroupInContext:(id)arg1;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (BOOL)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)initWithInsertionDescriptor:(id)arg1;

@end

