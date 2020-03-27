//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface WDSubtitleDateTableViewCell : UITableViewCell
{
    UILabel *_mainTextLabel;
    UILabel *_subtitleTextLabel;
    UILabel *_dateTextLabel;
    NSLayoutConstraint *_baselineConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *baselineConstraint; // @synthesize baselineConstraint=_baselineConstraint;
@property(retain, nonatomic) UILabel *dateTextLabel; // @synthesize dateTextLabel=_dateTextLabel;
@property(retain, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property(retain, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
// - (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

