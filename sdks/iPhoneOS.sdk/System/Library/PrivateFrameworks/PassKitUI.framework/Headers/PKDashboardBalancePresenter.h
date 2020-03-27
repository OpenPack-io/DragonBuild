//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class PKDashboardBalanceView, UICollectionView;

@interface PKDashboardBalancePresenter : NSObject <PKDashboardItemPresenter>
{
    PKDashboardBalanceView *_sampleBalanceView;
    UICollectionView *_collectionView;
    long long _cellStyle;
}

@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
// - (void).cxx_destruct;
- (BOOL)_shouldInset;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)_updateMessageView:(id)arg1 withItem:(id)arg2;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_identifierForItem:(id)arg1;
- (id)collectionViewCellClasses;
- (Class)itemClass;
- (id)init;

@end

