//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBNamedProtobufMessage-Protocol.h>

@class NSData, NSString;

@interface _SFPBNamedProtobufMessage : PBCodable <_SFPBNamedProtobufMessage, NSSecureCoding>
{
    NSData *_protobufMessageData;
    NSString *_protobufMessageName;
}

@property(copy, nonatomic) NSString *protobufMessageName; // @synthesize protobufMessageName=_protobufMessageName;
@property(copy, nonatomic) NSData *protobufMessageData; // @synthesize protobufMessageData=_protobufMessageData;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end

