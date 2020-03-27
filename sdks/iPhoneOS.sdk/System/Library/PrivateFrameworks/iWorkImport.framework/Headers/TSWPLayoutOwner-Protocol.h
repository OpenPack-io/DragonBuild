//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, TSUColor, TSULocale, TSWPLayoutManager, TSWPLayoutMetricsCache, TSWPStorage;
@protocol TSWPLayoutTarget, TSWPOffscreenColumn, TSWPStyleProvider, TSWPTextWrap, TSWPTopicNumberHints;

@protocol TSWPLayoutOwner <NSObject>
- (id <TSWPTextWrap>)textWrapper;
- (void)didLayoutChangingDirtyRanges;
- (void)layoutManager:(TSWPLayoutManager *)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(NSUInteger)arg3;
- (void)layoutManagerNeedsLayout:(TSWPLayoutManager *)arg1;
- (BOOL)caresAboutStorageChanges;

@optional
- (NSObject<TSWPTopicNumberHints> *)nextTargetTopicNumbersForTarget:(id <TSWPLayoutTarget>)arg1;
- (id <TSWPOffscreenColumn>)nextTargetFirstColumnForTarget:(id <TSWPLayoutTarget>)arg1;
- (NSObject<TSWPTopicNumberHints> *)previousTargetTopicNumbersForTarget:(id <TSWPLayoutTarget>)arg1;
- (id <TSWPOffscreenColumn>)previousTargetLastColumnForTarget:(id <TSWPLayoutTarget>)arg1;
- (TSWPLayoutMetricsCache *)metricsCacheForStorage:(TSWPStorage *)arg1;
- (void)didLayoutWithLayoutManager:(TSWPLayoutManager *)arg1;
- (TSUColor *)textColorOverride;
- (TSULocale *)locale;
- (BOOL)forceWesternLineBreaking;
- (id <TSWPStyleProvider>)styleProvider;
@end

