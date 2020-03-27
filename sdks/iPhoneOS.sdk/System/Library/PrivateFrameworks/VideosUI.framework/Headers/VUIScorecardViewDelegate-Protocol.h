//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIImage, VUIScorecardView;

@protocol VUIScorecardViewDelegate <NSObject>
- (double)maximumWidthForScorecardView:(VUIScorecardView *)arg1;
- (NSString *)scoreValue:(VUIScorecardView *)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)numberOfScoreValuesForScorecardView:(VUIScorecardView *)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(VUIScorecardView *)arg1;
- (long long)styleForScorecardView:(VUIScorecardView *)arg1;

@optional
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (UIImage *)backgroundImageForScorecardViewMaterial:(VUIScorecardView *)arg1;
@end

