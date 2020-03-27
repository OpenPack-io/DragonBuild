//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>
{
    NSMutableArray *_categories;
    NSString *_view;
}

+ (Class)categoriesType;
@property(retain, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *view; // @synthesize view=_view;
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
- (id)categoriesAtIndex:(NSUInteger)arg1;
- (NSUInteger)categoriesCount;
- (void)addCategories:(id)arg1;
- (void)clearCategories;
@property(readonly, nonatomic) BOOL hasView;

@end

