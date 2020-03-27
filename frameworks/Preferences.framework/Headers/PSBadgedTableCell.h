//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell
{
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    long long _badgeInt;
}

+ (id)badgeNumberLabelTextColor;
+ (id)unreadBubbleImage;
+ (double)badgePadding;
+ (id)reuseIdentifierForClassAndType:(long long)arg1;
// - (void).cxx_destruct;
- (BOOL)_shouldUseRoundStyle;
- (void)badgeWithInteger:(long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)resetLocale;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

