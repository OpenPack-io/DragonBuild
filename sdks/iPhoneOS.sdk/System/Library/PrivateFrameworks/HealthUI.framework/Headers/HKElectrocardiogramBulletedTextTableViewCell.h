//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UILabel;

@interface HKElectrocardiogramBulletedTextTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSMutableArray *_bodyFirstBaselineConstraints;
    NSLayoutConstraint *_detailLabelLastBaselineConstraint;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *detailLabelLastBaselineConstraint; // @synthesize detailLabelLastBaselineConstraint=_detailLabelLastBaselineConstraint;
@property(retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints; // @synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)_setupConstraints;
- (void)_setUpUI;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateLeadingDetailAttributedTextSize;
- (void)setDetailTextWithBullets:(id)arg1;
@property(readonly, nonatomic) NSString *detailText;
@property(retain, nonatomic) NSString *titleText;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

