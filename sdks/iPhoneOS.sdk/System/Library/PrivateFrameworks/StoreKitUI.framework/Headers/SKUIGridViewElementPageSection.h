//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUICollectionDOMFeatureTargetting-Protocol.h>
#import <StoreKitUI/SKUIGridViewElementPageSectionConfigurationDataSource-Protocol.h>

@class IKColor, NSArray, SKUIGridViewElementPageSectionConfiguration, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGridViewElementPageSectionConfigurationDataSource, SKUICollectionDOMFeatureTargetting>
{
    IKColor *_backgroundColor;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    BOOL _editing;
    NSArray *_indexPathsForBackgroundItems;
    long long _lastNeedsMoreCount;
    NSArray *_viewElements;
}

// - (void).cxx_destruct;
- (void)_resetLayoutProperties;
- (void)_requestLayoutForCells;
- (void)_reloadViewElementProperties;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_containsOnlyShelfElements;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
- (void)_setContext:(id)arg1;
- (void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (UIEdgeInsets)sectionContentInset;
- (BOOL)requestLayoutWithReloadReason:(long long)arg1;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (id)indexPathsForBackgroundItems;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)collectionViewWillScrollToOffset:(CGPoint)arg1 visibleRange:(struct SKUIIndexPathRange)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)backgroundColorForSection;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

@end

