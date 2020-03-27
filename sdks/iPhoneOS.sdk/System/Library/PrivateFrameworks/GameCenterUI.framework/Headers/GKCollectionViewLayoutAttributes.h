//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class GKSectionMetrics, GKSupplementaryViewMetrics;
@protocol UICollectionViewDataSource;

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    BOOL _allSectionItemsVisible;
    BOOL _isPinned;
    BOOL _isPartOfGlobalPinningGroup;
    BOOL _doesAbutLeftOfCollectionView;
    double _unpinnedY;
    id <UICollectionViewDataSource> _dataSource;
    GKSectionMetrics *_sectionMetrics;
    GKSupplementaryViewMetrics *_supplementaryMetrics;
    NSUInteger _currentVisibleItemCount;
    NSUInteger _currentTotalItemCount;
    NSUInteger _maxTotalItemCount;
    double _leadingMargin;
    double _trailingMargin;
    NSUInteger _gridLayoutLocation;
}

@property(nonatomic) BOOL doesAbutLeftOfCollectionView; // @synthesize doesAbutLeftOfCollectionView=_doesAbutLeftOfCollectionView;
@property(nonatomic) NSUInteger gridLayoutLocation; // @synthesize gridLayoutLocation=_gridLayoutLocation;
@property(nonatomic) BOOL isPartOfGlobalPinningGroup; // @synthesize isPartOfGlobalPinningGroup=_isPartOfGlobalPinningGroup;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) NSUInteger maxTotalItemCount; // @synthesize maxTotalItemCount=_maxTotalItemCount;
@property(nonatomic) NSUInteger currentTotalItemCount; // @synthesize currentTotalItemCount=_currentTotalItemCount;
@property(nonatomic) NSUInteger currentVisibleItemCount; // @synthesize currentVisibleItemCount=_currentVisibleItemCount;
@property(retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics; // @synthesize supplementaryMetrics=_supplementaryMetrics;
@property(retain, nonatomic) GKSectionMetrics *sectionMetrics; // @synthesize sectionMetrics=_sectionMetrics;
@property(retain, nonatomic) id <UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double unpinnedY; // @synthesize unpinnedY=_unpinnedY;
@property(nonatomic) BOOL isPinned; // @synthesize isPinned=_isPinned;
@property(nonatomic) BOOL allSectionItemsVisible; // @synthesize allSectionItemsVisible=_allSectionItemsVisible;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

