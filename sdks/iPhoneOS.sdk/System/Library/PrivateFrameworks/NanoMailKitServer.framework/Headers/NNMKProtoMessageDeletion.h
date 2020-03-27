//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NNMKProtoMessageDeletion : PBCodable <NSCopying>
{
    unsigned int _deletionState;
    NSString *_messageId;
    struct {
        unsigned int deletionState:1;
    } _has;
}

@property(nonatomic) unsigned int deletionState; // @synthesize deletionState=_deletionState;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
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
@property(nonatomic) BOOL hasDeletionState;
@property(readonly, nonatomic) BOOL hasMessageId;

@end

