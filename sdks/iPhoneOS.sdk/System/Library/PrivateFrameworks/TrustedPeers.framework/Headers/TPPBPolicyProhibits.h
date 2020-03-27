//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface TPPBPolicyProhibits : PBCodable <NSCopying>
{
    NSUInteger _policyVersion;
    NSString *_candidateCategory;
    NSString *_explanation;
    NSString *_sponsorCategory;
    NSString *_sponsorId;
    CDStruct_0e29c504 _has;
}

@property(retain, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(retain, nonatomic) NSString *candidateCategory; // @synthesize candidateCategory=_candidateCategory;
@property(retain, nonatomic) NSString *sponsorCategory; // @synthesize sponsorCategory=_sponsorCategory;
@property(retain, nonatomic) NSString *sponsorId; // @synthesize sponsorId=_sponsorId;
@property(nonatomic) NSUInteger policyVersion; // @synthesize policyVersion=_policyVersion;
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
@property(readonly, nonatomic) BOOL hasExplanation;
@property(readonly, nonatomic) BOOL hasCandidateCategory;
@property(readonly, nonatomic) BOOL hasSponsorCategory;
@property(readonly, nonatomic) BOOL hasSponsorId;
@property(nonatomic) BOOL hasPolicyVersion;

@end

