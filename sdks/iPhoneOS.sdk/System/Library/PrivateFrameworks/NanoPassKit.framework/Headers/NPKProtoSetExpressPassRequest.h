//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSData, NSString;

@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying>
{
    NSString *_applicationIdentifier;
    NSData *_expressPassInformation;
    NSString *_uniqueID;
    BOOL _cancelOutstandingRequests;
    BOOL _requestAuthorization;
    struct {
        unsigned int cancelOutstandingRequests:1;
        unsigned int requestAuthorization:1;
    } _has;
}

@property(retain, nonatomic) NSData *expressPassInformation; // @synthesize expressPassInformation=_expressPassInformation;
@property(nonatomic) BOOL requestAuthorization; // @synthesize requestAuthorization=_requestAuthorization;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) BOOL cancelOutstandingRequests; // @synthesize cancelOutstandingRequests=_cancelOutstandingRequests;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
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
@property(readonly, nonatomic) BOOL hasExpressPassInformation;
@property(nonatomic) BOOL hasRequestAuthorization;
@property(readonly, nonatomic) BOOL hasApplicationIdentifier;
@property(nonatomic) BOOL hasCancelOutstandingRequests;
@property(readonly, nonatomic) BOOL hasUniqueID;

@end

