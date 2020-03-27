//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGContactSharingTransformer : NSObject <PMLTransformerProtocol>
{
    struct {
        NSUInteger s[2];
    } _rng;
    NSString *_targetMapping;
    NSString *_language;
}

@property(retain) NSString *language; // @synthesize language=_language;
@property(retain) NSString *targetMapping; // @synthesize targetMapping=_targetMapping;
// - (void).cxx_destruct;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContactSharingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)initWithTargetMapping:(id)arg1 language:(id)arg2;

@end

