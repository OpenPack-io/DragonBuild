//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>


@class NSArray, NSDictionary;
@protocol CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate;

@interface CAMFullscreenModeSelector : UIView <UIGestureRecognizerDelegate>
{
    id <CAMFullscreenModeSelectorDataSource> _dataSource;
    id <CAMFullscreenModeSelectorDelegate> _delegate;
    long long _selectedMode;
    NSArray *__modes;
    NSDictionary *__titleViewsByMode;
    UIView *__titleContainer;
    long long __state;
    double __touchBeganTime;
    long long __highlightedIndex;
    CGPoint __touchBeganPosition;
}

@property(nonatomic, setter=_setHighlightedIndex:) long long _highlightedIndex; // @synthesize _highlightedIndex=__highlightedIndex;
@property(nonatomic, setter=_setTouchBeganPosition:) CGPoint _touchBeganPosition; // @synthesize _touchBeganPosition=__touchBeganPosition;
@property(nonatomic, setter=_setTouchBeganTime:) double _touchBeganTime; // @synthesize _touchBeganTime=__touchBeganTime;
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(readonly, nonatomic) UIView *_titleContainer; // @synthesize _titleContainer=__titleContainer;
@property(retain, nonatomic, setter=_setItems:) NSDictionary *_titleViewsByMode; // @synthesize _titleViewsByMode=__titleViewsByMode;
@property(retain, nonatomic, setter=_setModes:) NSArray *_modes; // @synthesize _modes=__modes;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) id <CAMFullscreenModeSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <CAMFullscreenModeSelectorDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateAlpha;
- (void)_updateTitles;
- (id)_modeTitleForLegacyTitle:(id)arg1;
- (void)_touchSequenceEndedAtPoint:(CGPoint)arg1;
- (void)_touchSequenceChangedToPoint:(CGPoint)arg1;
- (void)_touchSequenceBeganAtPoint:(CGPoint)arg1;
- (void)handlePress:(id)arg1;
- (double)_titleYForIndex:(long long)arg1;
- (long long)_titleIndexForY:(double)arg1;
@property(readonly, nonatomic) double _titleIndexOffset;
- (void)_setSelectedMode:(long long)arg1 shouldNotify:(BOOL)arg2;
- (void)_selectModeAtIndex:(long long)arg1;
- (void)enterTappableState;
- (void)reloadData;
- (id)init;

@end

