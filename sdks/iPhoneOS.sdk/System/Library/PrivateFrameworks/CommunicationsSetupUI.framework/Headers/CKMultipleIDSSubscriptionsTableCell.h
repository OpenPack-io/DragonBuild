//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface CKMultipleIDSSubscriptionsTableCell : PSTableCell
{
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_centeredNameLabel;
}

+ (long long)cellStyle;
@property(retain, nonatomic) UILabel *centeredNameLabel; // @synthesize centeredNameLabel=_centeredNameLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
// - (void).cxx_destruct;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (BOOL)canBeChecked;
- (BOOL)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

