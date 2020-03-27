//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NPKProtoStandalonePaymentCredential : PBCodable <NSCopying>
{
    NSString *_expiration;
    NSString *_longDescription;
    NSString *_sanitizedPrimaryAccountNumber;
}

@property(retain, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(retain, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *sanitizedPrimaryAccountNumber; // @synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber;
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
@property(readonly, nonatomic) BOOL hasLongDescription;
@property(readonly, nonatomic) BOOL hasExpiration;
@property(readonly, nonatomic) BOOL hasSanitizedPrimaryAccountNumber;

@end

