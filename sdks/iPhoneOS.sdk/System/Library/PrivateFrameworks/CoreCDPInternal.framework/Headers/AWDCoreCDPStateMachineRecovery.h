//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface AWDCoreCDPStateMachineRecovery : PBCodable <NSCopying>
{
    long long _errorCode;
    long long _secretType;
    NSUInteger _timestamp;
    NSString *_errorDomain;
    BOOL _userDidReset;
    struct {
        unsigned int errorCode:1;
        unsigned int secretType:1;
        unsigned int timestamp:1;
        unsigned int userDidReset:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) BOOL userDidReset; // @synthesize userDidReset=_userDidReset;
@property(nonatomic) long long secretType; // @synthesize secretType=_secretType;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasUserDidReset;
@property(nonatomic) BOOL hasSecretType;
@property(nonatomic) BOOL hasTimestamp;

@end

