//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSLocale, NSString;

@interface EMTResult : NSObject <NSCopying>
{
    BOOL _lowConfidence;
    float _confidence;
    NSLocale *_locale;
    NSArray *_tokens;
    NSString *_metaInfo;
}

@property(readonly, nonatomic) NSString *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(readonly, nonatomic) BOOL lowConfidence; // @synthesize lowConfidence=_lowConfidence;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(BOOL)arg4 metaInfo:(id)arg5;

@end

