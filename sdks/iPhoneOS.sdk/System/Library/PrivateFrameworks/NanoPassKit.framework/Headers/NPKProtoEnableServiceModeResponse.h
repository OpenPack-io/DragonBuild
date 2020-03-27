//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NPKProtoEnableServiceModeResponse : PBCodable <NSCopying>
{
    BOOL _pending;
    BOOL _unlockRequired;
    struct {
        unsigned int pending:1;
        unsigned int unlockRequired:1;
    } _has;
}

@property(nonatomic) BOOL unlockRequired; // @synthesize unlockRequired=_unlockRequired;
@property(nonatomic) BOOL pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasUnlockRequired;
@property(nonatomic) BOOL hasPending;

@end

