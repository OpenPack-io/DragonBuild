//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UITableView;

@interface HKStickyHeaderFooterTableWrapperView : UIView
{
    UIView *_headerView;
    long long _headerBehavior;
    UIView *_footerView;
    long long _footerBehavior;
    UITableView *_tableView;
    NSArray *_headerConstraints;
    NSArray *_footerConstraints;
    NSLayoutConstraint *_headerPinningConstraint;
    NSLayoutConstraint *_footerPinningConstraint;
    CGSize _previousHeaderSize;
    CGSize _previousFooterSize;
}

@property(retain, nonatomic) NSLayoutConstraint *footerPinningConstraint; // @synthesize footerPinningConstraint=_footerPinningConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerPinningConstraint; // @synthesize headerPinningConstraint=_headerPinningConstraint;
@property(nonatomic) CGSize previousFooterSize; // @synthesize previousFooterSize=_previousFooterSize;
@property(nonatomic) CGSize previousHeaderSize; // @synthesize previousHeaderSize=_previousHeaderSize;
@property(retain, nonatomic) NSArray *footerConstraints; // @synthesize footerConstraints=_footerConstraints;
@property(retain, nonatomic) NSArray *headerConstraints; // @synthesize headerConstraints=_headerConstraints;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long footerBehavior; // @synthesize footerBehavior=_footerBehavior;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) long long headerBehavior; // @synthesize headerBehavior=_headerBehavior;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
// - (void).cxx_destruct;
- (void)_updatePinningConstraintConstantsForCurrentSafeArea;
- (id)_createFooterConstraintsForBehavior:(long long)arg1;
- (id)_createHeaderConstraintsForBehavior:(long long)arg1;
- (void)_updateFooterConstraintsWithPreviousBehavior:(long long)arg1;
- (void)_addFooterConstraintsForBehavior:(long long)arg1;
- (void)_updateHeaderConstraintsWithPreviousBehavior:(long long)arg1;
- (void)_addHeaderConstraintsForBehavior:(long long)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

