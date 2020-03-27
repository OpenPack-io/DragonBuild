//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _activationStates;
    CDStruct_9f2792e4 _lifecycleStates;
    NSMutableArray *_appletsBytes;
    NSMutableArray *_cardAIDs;
    BOOL _pending;
    CDStruct_eab6c78c _has;
}

+ (Class)appletsBytesType;
+ (Class)cardAIDsType;
@property(retain, nonatomic) NSMutableArray *appletsBytes; // @synthesize appletsBytes=_appletsBytes;
@property(retain, nonatomic) NSMutableArray *cardAIDs; // @synthesize cardAIDs=_cardAIDs;
@property(nonatomic) BOOL pending; // @synthesize pending=_pending;
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
- (id)appletsBytesAtIndex:(NSUInteger)arg1;
- (NSUInteger)appletsBytesCount;
- (void)addAppletsBytes:(id)arg1;
- (void)clearAppletsBytes;
- (void)setActivationStates:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)activationStatesAtIndex:(NSUInteger)arg1;
- (void)addActivationStates:(unsigned int)arg1;
- (void)clearActivationStates;
@property(readonly, nonatomic) unsigned int activationStates;
@property(readonly, nonatomic) NSUInteger activationStatesCount;
- (void)setLifecycleStates:(unsigned int )arg1 count:(NSUInteger)arg2;
- (unsigned int)lifecycleStatesAtIndex:(NSUInteger)arg1;
- (void)addLifecycleStates:(unsigned int)arg1;
- (void)clearLifecycleStates;
@property(readonly, nonatomic) unsigned int lifecycleStates;
@property(readonly, nonatomic) NSUInteger lifecycleStatesCount;
- (id)cardAIDsAtIndex:(NSUInteger)arg1;
- (NSUInteger)cardAIDsCount;
- (void)addCardAIDs:(id)arg1;
- (void)clearCardAIDs;
@property(nonatomic) BOOL hasPending;
- (void)dealloc;

@end

