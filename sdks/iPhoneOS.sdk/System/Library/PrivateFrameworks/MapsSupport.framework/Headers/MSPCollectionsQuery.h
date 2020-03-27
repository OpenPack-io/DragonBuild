//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NewMSPQuery.h>

@class MSPFavoritesContainer, NSArray;

@interface MSPCollectionsQuery : NewMSPQuery
{
    MSPFavoritesContainer *_itemContainer;
    NewMSPQuery *_itemQuery;
}

@property(retain, nonatomic) NewMSPQuery *itemQuery; // @synthesize itemQuery=_itemQuery;
@property(retain, nonatomic) MSPFavoritesContainer *itemContainer; // @synthesize itemContainer=_itemContainer;
// - (void).cxx_destruct;
- (void)queryContentsDidChange:(id)arg1 contentsVersion:(NSUInteger)arg2;
- (void)removeObjects:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)removeObject:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addOrUpdateObjects:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addOrUpdateObject:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setCachedContents:(id)arg1;
- (void)processContentsUsingBlock:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly) NSArray *contents;
- (id)subQueryFilteredWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3 filteredWithBlock:(id /* CDUnknownBlockType */)arg4;
- (id)initWithCollectionsContainer:(id)arg1 itemContainer:(id)arg2 delegate:(id)arg3;

@end

