//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSValue, UICollectionViewLayoutAttributes;
@protocol CKAvatarPickerLayoutDelegate;

@interface CKAvatarPickerLayout : UICollectionViewLayout
{
    BOOL _isInEditingMode;
    NSUInteger _layoutMode;
    id <CKAvatarPickerLayoutDelegate> _delegate;
    UICollectionViewLayoutAttributes *_titleSupplementaryAttr;
    NSArray *_attrCollection;
    NSArray *_supplementaryAttrCollection;
    NSArray *_cutoutAttrCollection;
    UICollectionViewLayoutAttributes *_leftShadowDecorationAttr;
    UICollectionViewLayoutAttributes *_rightShadowDecorationAttr;
    NSValue *_editingFrameValue;
}

@property(copy, nonatomic) NSValue *editingFrameValue; // @synthesize editingFrameValue=_editingFrameValue;
@property(nonatomic) BOOL isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *rightShadowDecorationAttr; // @synthesize rightShadowDecorationAttr=_rightShadowDecorationAttr;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *leftShadowDecorationAttr; // @synthesize leftShadowDecorationAttr=_leftShadowDecorationAttr;
@property(copy, nonatomic) NSArray *cutoutAttrCollection; // @synthesize cutoutAttrCollection=_cutoutAttrCollection;
@property(copy, nonatomic) NSArray *supplementaryAttrCollection; // @synthesize supplementaryAttrCollection=_supplementaryAttrCollection;
@property(copy, nonatomic) NSArray *attrCollection; // @synthesize attrCollection=_attrCollection;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *titleSupplementaryAttr; // @synthesize titleSupplementaryAttr=_titleSupplementaryAttr;
@property(nonatomic) __weak id <CKAvatarPickerLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSUInteger layoutMode; // @synthesize layoutMode=_layoutMode;
// - (void).cxx_destruct;
- (BOOL)_shouldShowContactNames;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (void)_setupBannerLayout;
- (void)_setupPancakeLayout;
- (double)_avatarBoundWidthLayoutMode:(NSUInteger)arg1;
- (double)_avatarBoundWidth;
- (NSUInteger)_itemCount;
- (BOOL)_canShowShadowClipping;
- (id)nameLayoutAttributesCollectionAtPoint:(CGPoint)arg1;
- (void)invalidateLayoutAndCache;
- (id)initWithLayoutMode:(NSUInteger)arg1;

@end

