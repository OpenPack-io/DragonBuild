//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, _TVCollectionView;

@protocol _TVCollectionViewDelegate <UICollectionViewDelegate>

@optional
- (BOOL)collectionViewCanBecomeFocused:(_TVCollectionView *)arg1;
- (void)collectionView:(_TVCollectionView *)arg1 didReceiveLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(_TVCollectionView *)arg1 shouldHandleLongPressForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(_TVCollectionView *)arg1 didReceivePhysicalPlayForItemAtIndexPath:(NSIndexPath *)arg2;
@end

