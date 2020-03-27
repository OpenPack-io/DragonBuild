//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOTrafficPath;

__attribute__((visibility("hidden")))
@interface GEOTrafficTrafficColor : PBCodable <NSCopying>
{
    GEOTrafficPath *_path;
    int _color;
    struct {
        unsigned int has_color:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
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
- (int)StringAsColor:(id)arg1;
- (id)colorAsString:(int)arg1;
@property(nonatomic) BOOL hasColor;
@property(nonatomic) int color;
@property(retain, nonatomic) GEOTrafficPath *path;
@property(readonly, nonatomic) BOOL hasPath;

@end

