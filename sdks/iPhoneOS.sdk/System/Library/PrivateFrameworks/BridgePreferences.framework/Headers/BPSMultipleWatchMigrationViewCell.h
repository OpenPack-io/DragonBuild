//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BPSCheckMarkView, BPSRemoveMigrationWatchView, UILabel;

@interface BPSMultipleWatchMigrationViewCell : UITableViewCell
{
    BPSRemoveMigrationWatchView *_watchView;
    BPSCheckMarkView *_checkmarkView;
    UILabel *_deviceDetailLabel;
}

@property(retain, nonatomic) UILabel *deviceDetailLabel; // @synthesize deviceDetailLabel=_deviceDetailLabel;
@property(retain, nonatomic) BPSCheckMarkView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) BPSRemoveMigrationWatchView *watchView; // @synthesize watchView=_watchView;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

