//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBPin-Protocol.h>

@class NSData, NSString, _SFPBColor, _SFPBLatLng;

@interface _SFPBPin : PBCodable <_SFPBPin, NSSecureCoding>
{
    int _pinBehavior;
    _SFPBLatLng *_location;
    _SFPBColor *_pinColor;
    NSString *_label;
    NSString *_resultID;
    NSData *_mapsData;
}

@property(nonatomic) int pinBehavior; // @synthesize pinBehavior=_pinBehavior;
@property(copy, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(copy, nonatomic) NSString *resultID; // @synthesize resultID=_resultID;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) _SFPBColor *pinColor; // @synthesize pinColor=_pinColor;
@property(retain, nonatomic) _SFPBLatLng *location; // @synthesize location=_location;
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

