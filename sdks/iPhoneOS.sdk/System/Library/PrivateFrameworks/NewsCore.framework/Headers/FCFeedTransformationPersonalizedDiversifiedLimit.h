//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCLimitAwareFeedTransforming-Protocol.h>

@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject <FCLimitAwareFeedTransforming>
{
    NSUInteger _limit;
    id <FCFeedPersonalizing> _feedPersonalizer;
}

+ (id)transformationWithPersonalizer:(id)arg1 limit:(NSUInteger)arg2;
+ (id)transformationWithPersonalizer:(id)arg1;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(nonatomic) NSUInteger limit; // @synthesize limit=_limit;
// - (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1 withRespectToLimit:(NSUInteger)arg2;
- (id)transformFeedItems:(id)arg1;

@end

