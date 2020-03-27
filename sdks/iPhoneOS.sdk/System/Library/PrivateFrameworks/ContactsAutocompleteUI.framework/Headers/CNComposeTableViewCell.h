//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUITableViewContainerCell.h>

#import <ContactsAutocompleteUI/NUIContainerViewDelegate-Protocol.h>

@class CNComposeRecipient, NUIContainerStackView, UIColor, UILabel;

@interface CNComposeTableViewCell : NUITableViewContainerCell <NUIContainerViewDelegate>
{
    CNComposeRecipient *_recipient;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIColor *_labelColor;
    double _trailingButtonMidlineInsetFromLayoutMargin;
    double _trailingButtonWidth;
    NUIContainerStackView *_labelViewStack;
}

+ (id)axCappedSymbolConfigurationIsBold:(BOOL)arg1;
+ (id)axCappedFontWithTextStyle:(id)arg1 bold:(BOOL)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (double)additionalSeparatorInset;
+ (Class)containerViewClass;
+ (id)identifier;
@property(retain, nonatomic) NUIContainerStackView *labelViewStack; // @synthesize labelViewStack=_labelViewStack;
@property(readonly, nonatomic) double trailingButtonWidth; // @synthesize trailingButtonWidth=_trailingButtonWidth;
@property(nonatomic) double trailingButtonMidlineInsetFromLayoutMargin; // @synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CNComposeRecipient *recipient; // @synthesize recipient=_recipient;
// - (void).cxx_destruct;
- (void)labelsChangedWidth:(double)arg1;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)layoutMarginsDidChange;
- (void)settrailingButtonMidlineInsetFromLayoutMargin:(double)arg1;
- (id)labelWithTextStyle:(id)arg1;
- (id)titleTextStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

