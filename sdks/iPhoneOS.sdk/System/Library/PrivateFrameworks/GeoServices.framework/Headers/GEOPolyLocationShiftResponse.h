//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _parameters;
    double _radius;
    int _status;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) double radius;
- (void)setParameters:(double )arg1 count:(NSUInteger)arg2;
- (double)parametersAtIndex:(NSUInteger)arg1;
- (void)addParameters:(double)arg1;
- (void)clearParameters;
@property(readonly, nonatomic) double parameters;
@property(readonly, nonatomic) NSUInteger parametersCount;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) int status;
- (void)dealloc;

@end

