//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class BLTPBAppearance, NSData, NSString;

@interface BLTPBAction : PBCodable <NSCopying>
{
    int _activationMode;
    BLTPBAppearance *_appearance;
    int _behavior;
    NSData *_behaviorParameters;
    NSData *_behaviorParametersNulls;
    NSString *_identifier;
    NSString *_launchURL;
    struct {
        unsigned int behavior:1;
    } _has;
}

@property(retain, nonatomic) NSData *behaviorParametersNulls; // @synthesize behaviorParametersNulls=_behaviorParametersNulls;
@property(retain, nonatomic) NSData *behaviorParameters; // @synthesize behaviorParameters=_behaviorParameters;
@property(nonatomic) int behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) NSString *launchURL; // @synthesize launchURL=_launchURL;
@property(nonatomic) int activationMode; // @synthesize activationMode=_activationMode;
@property(retain, nonatomic) BLTPBAppearance *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) BOOL hasBehaviorParametersNulls;
@property(readonly, nonatomic) BOOL hasBehaviorParameters;
@property(nonatomic) BOOL hasBehavior;
@property(readonly, nonatomic) BOOL hasLaunchURL;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

