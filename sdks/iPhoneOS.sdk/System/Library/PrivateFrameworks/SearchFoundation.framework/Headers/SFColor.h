//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFColor-Protocol.h>

@class NSData, NSDictionary;

@interface SFColor : NSObject <SFColor, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int redComponent:1;
        unsigned int greenComponent:1;
        unsigned int blueComponent:1;
        unsigned int alphaComponent:1;
    } _has;
    double _redComponent;
    double _greenComponent;
    double _blueComponent;
    double _alphaComponent;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double alphaComponent; // @synthesize alphaComponent=_alphaComponent;
@property(nonatomic) double blueComponent; // @synthesize blueComponent=_blueComponent;
@property(nonatomic) double greenComponent; // @synthesize greenComponent=_greenComponent;
@property(nonatomic) double redComponent; // @synthesize redComponent=_redComponent;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasAlphaComponent;
- (BOOL)hasBlueComponent;
- (BOOL)hasGreenComponent;
- (BOOL)hasRedComponent;
- (id)initWithProtobuf:(id)arg1;

@end

