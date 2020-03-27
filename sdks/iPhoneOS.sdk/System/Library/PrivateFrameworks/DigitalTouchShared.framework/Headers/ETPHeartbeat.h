//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface ETPHeartbeat : PBCodable <NSCopying>
{
    float _beatsPerMinute;
    unsigned int _duration;
    float _heartbreakTime;
    float _normalizedCenterX;
    float _normalizedCenterY;
    float _rotation;
    struct {
        unsigned int beatsPerMinute:1;
        unsigned int duration:1;
        unsigned int heartbreakTime:1;
        unsigned int normalizedCenterX:1;
        unsigned int normalizedCenterY:1;
        unsigned int rotation:1;
    } _has;
}

@property(nonatomic) float heartbreakTime; // @synthesize heartbreakTime=_heartbreakTime;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float normalizedCenterY; // @synthesize normalizedCenterY=_normalizedCenterY;
@property(nonatomic) float normalizedCenterX; // @synthesize normalizedCenterX=_normalizedCenterX;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) float beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHeartbreakTime;
@property(nonatomic) BOOL hasRotation;
@property(nonatomic) BOOL hasNormalizedCenterY;
@property(nonatomic) BOOL hasNormalizedCenterX;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasBeatsPerMinute;

@end

