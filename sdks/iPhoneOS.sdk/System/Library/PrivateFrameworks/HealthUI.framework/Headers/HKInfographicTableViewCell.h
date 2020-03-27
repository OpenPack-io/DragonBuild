//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIView;

@interface HKInfographicTableViewCell : UITableViewCell
{
    BOOL hideSeparator;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIView *_separator;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (id)_valueFont;
- (id)_titleFont;
- (id)_labelWithFont:(id)arg1;
- (void)setSeparatorHidden:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

