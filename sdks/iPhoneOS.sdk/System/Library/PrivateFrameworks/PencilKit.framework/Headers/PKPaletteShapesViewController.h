//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>


@class NSArray;
@protocol PKPaletteShapesViewControllerDelegate;

@interface PKPaletteShapesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <PKPaletteShapesViewControllerDelegate> _delegate;
    NSArray *_shapes;
}

@property(retain, nonatomic) NSArray *shapes; // @synthesize shapes=_shapes;
@property(nonatomic) __weak id <PKPaletteShapesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)preferredContentSize;
- (void)loadView;

@end

