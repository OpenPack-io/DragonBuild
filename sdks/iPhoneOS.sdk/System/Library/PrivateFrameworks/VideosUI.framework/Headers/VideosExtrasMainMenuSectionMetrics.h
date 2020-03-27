//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFontDescriptor;
@protocol VideosExtrasMainMenuSectionMetricsDataSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasMainMenuSectionMetrics : NSObject
{
    double _fittingWidth;
    BOOL _needsUpdate;
    long long _itemCount;
    CGSize _calculatedSizes;
    id <VideosExtrasMainMenuSectionMetricsDataSource> _dataSource;
    UIFontDescriptor *_desiredFontDescriptor;
    UIFontDescriptor *_minimumFontDescriptor;
    double _desiredCellSpacing;
    double _minimumCellSpacing;
    double _desiredWidth;
    UIFontDescriptor *_fittingFontDescriptor;
    double _fittingCellSpacing;
    CGSize _totalFittingSize;
}

@property(readonly, nonatomic) CGSize totalFittingSize; // @synthesize totalFittingSize=_totalFittingSize;
@property(readonly, nonatomic) double fittingCellSpacing; // @synthesize fittingCellSpacing=_fittingCellSpacing;
@property(readonly, nonatomic) UIFontDescriptor *fittingFontDescriptor; // @synthesize fittingFontDescriptor=_fittingFontDescriptor;
@property(nonatomic) double desiredWidth; // @synthesize desiredWidth=_desiredWidth;
@property(nonatomic) double minimumCellSpacing; // @synthesize minimumCellSpacing=_minimumCellSpacing;
@property(nonatomic) double desiredCellSpacing; // @synthesize desiredCellSpacing=_desiredCellSpacing;
@property(retain, nonatomic) UIFontDescriptor *minimumFontDescriptor; // @synthesize minimumFontDescriptor=_minimumFontDescriptor;
@property(retain, nonatomic) UIFontDescriptor *desiredFontDescriptor; // @synthesize desiredFontDescriptor=_desiredFontDescriptor;
@property(nonatomic) __weak id <VideosExtrasMainMenuSectionMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (CGSize)_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(double)arg2 itemCount:(long long)arg3 itemSizes:(out CGSize )arg4;
- (void)_updateAllMetrics;
- (void)updateSizes;
- (CGSize)sizeForCellAtIndex:(long long)arg1;
- (void)setFittingWidth:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_recalculateSizes;
- (void)dealloc;

@end

