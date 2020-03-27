//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>

@class PKPassGroupView, UIImageView;

@interface PKDashboardPassGroupItemPresenter : NSObject <PKDashboardItemPresenter>
{
    PKPassGroupView *_groupView;
    UIImageView *_snapshotView;
}

// - (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (Class)itemClass;
- (id)initWithPassGroupView:(id)arg1;

@end

