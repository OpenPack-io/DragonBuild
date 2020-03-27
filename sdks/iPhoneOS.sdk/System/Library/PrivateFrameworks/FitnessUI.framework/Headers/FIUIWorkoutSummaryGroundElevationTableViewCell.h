//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FIUIDividerView, NSString, UIFont, UILabel;

@interface FIUIWorkoutSummaryGroundElevationTableViewCell : UITableViewCell
{
    UIFont *_labelFont;
    UILabel *_titleLabel;
    UILabel *_minElevationLabel;
    UILabel *_maxElevationLabel;
    FIUIDividerView *_dividerView;
    NSString *_minElevation;
    NSString *_maxElevation;
}

+ (double)rowHeight;
// - (void).cxx_destruct;
- (void)setMaxElevationString:(id)arg1;
- (void)setMinElevationString:(id)arg1;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

