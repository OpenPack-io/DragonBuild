//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>

#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider-Protocol.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider>
{
    NSDictionary *_orderedDisplayItemPlacements;
}

+ (CGSize)smallPillSize;
+ (CGSize)pillSize;
+ (id)pillFont;
+ (id)expandedFont;
+ (id)timeFont;
+ (id)normalFont;
+ (double)expandedBaselineOffset;
+ (double)baselineOffset;
+ (NSDirectionalEdgeInsets)edgeInsets;
+ (double)regionSpacing;
+ (double)height;
+ (CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
+ (BOOL)wantsExpandedLeadingPlacements;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
// - (void).cxx_destruct;
- (id)_backgroundActivityDetailRemovalAnimation;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)updateDataForBackgroundActivity:(id)arg1;
- (void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double )arg3;
- (id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2;
- (void)itemCreated:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;

@end

