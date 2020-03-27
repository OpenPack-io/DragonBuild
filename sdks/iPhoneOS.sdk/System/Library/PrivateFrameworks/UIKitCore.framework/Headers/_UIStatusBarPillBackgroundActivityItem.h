//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem
{
    long long _previousType;
    _UIStatusBarPillView *_combinedView;
    CGSize _pillSize;
}

+ (BOOL)shouldKeepIconVisibleForActivityType:(long long)arg1;
+ (id)pillCombinedDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarPillView *combinedView; // @synthesize combinedView=_combinedView;
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(nonatomic) CGSize pillSize; // @synthesize pillSize=_pillSize;
// - (void).cxx_destruct;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_combinedView;
- (BOOL)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)imageForUpdate:(id)arg1;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;

@end

