//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDiffableDataSourceSnapshotter.h>

@class UICollectionView;

@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter
{
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ supplementaryReuseIdentifierProvider;
@property(copy, nonatomic) id /* CDUnknownBlockType */ supplementaryConfigurationHandler;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(id /* CDUnknownBlockType */)arg2 cellConfigurationHandler:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) __weak UICollectionView *collectionView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ supplementaryViewProvider;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* CDUnknownBlockType */)arg2;

@end

