//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_endpointUID;
    NSString *_outputDeviceUID;
    float _volume;
    CDStruct_731552e5 _has;
}

@property(retain, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
@property(retain, nonatomic) NSString *endpointUID; // @synthesize endpointUID=_endpointUID;
@property(nonatomic) float volume; // @synthesize volume=_volume;
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
@property(readonly, nonatomic) BOOL hasOutputDeviceUID;
@property(readonly, nonatomic) BOOL hasEndpointUID;
@property(nonatomic) BOOL hasVolume;

@end

