//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _UIActionSlider;

@protocol _UIActionSliderDelegate <NSObject>

@optional
- (void)actionSliderDidCancelSlide:(_UIActionSlider *)arg1;
- (void)actionSliderDidCompleteSlide:(_UIActionSlider *)arg1;
- (void)actionSlider:(_UIActionSlider *)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(_UIActionSlider *)arg1;
@end

