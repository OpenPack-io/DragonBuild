//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, SiriCoreCorrectionPronunciation;

@interface SiriCoreUserCorrectionsProfileEntry : PBCodable <NSCopying>
{
    unsigned int _alternativesCorrectionsCount;
    NSString *_correctedText;
    SiriCoreCorrectionPronunciation *_pronunciationData;
    unsigned int _spellingCorrectionsCount;
    unsigned int _tap2editCorrectionsCount;
    struct {
        unsigned int alternativesCorrectionsCount:1;
        unsigned int spellingCorrectionsCount:1;
        unsigned int tap2editCorrectionsCount:1;
    } _has;
}

@property(nonatomic) unsigned int alternativesCorrectionsCount; // @synthesize alternativesCorrectionsCount=_alternativesCorrectionsCount;
@property(nonatomic) unsigned int tap2editCorrectionsCount; // @synthesize tap2editCorrectionsCount=_tap2editCorrectionsCount;
@property(nonatomic) unsigned int spellingCorrectionsCount; // @synthesize spellingCorrectionsCount=_spellingCorrectionsCount;
@property(retain, nonatomic) SiriCoreCorrectionPronunciation *pronunciationData; // @synthesize pronunciationData=_pronunciationData;
@property(retain, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAlternativesCorrectionsCount;
@property(nonatomic) BOOL hasTap2editCorrectionsCount;
@property(nonatomic) BOOL hasSpellingCorrectionsCount;
@property(readonly, nonatomic) BOOL hasPronunciationData;
@property(readonly, nonatomic) BOOL hasCorrectedText;

@end

