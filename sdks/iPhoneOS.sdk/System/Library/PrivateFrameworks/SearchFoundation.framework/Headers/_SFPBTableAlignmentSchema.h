//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBTableAlignmentSchema-Protocol.h>

@class NSArray, NSData, _SFPBStringDictionary;

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding>
{
    NSArray *_tableColumnAlignments;
    _SFPBStringDictionary *_metadata;
}

@property(retain, nonatomic) _SFPBStringDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSArray *tableColumnAlignments; // @synthesize tableColumnAlignments=_tableColumnAlignments;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tableColumnAlignmentAtIndex:(NSUInteger)arg1;
- (NSUInteger)tableColumnAlignmentCount;
- (void)addTableColumnAlignment:(id)arg1;
- (void)clearTableColumnAlignment;
- (void)setTableColumnAlignment:(id)arg1;
- (id)initWithFacade:(id)arg1;

@end

