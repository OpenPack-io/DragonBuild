//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIView;

@interface HUCalendarScrubberCollectionViewCell : UICollectionViewCell
{
    BOOL _enabled;
    NSString *_dayOfWeekString;
    NSString *_dateString;
    UIView *_circleView;
    UILabel *_dateLabel;
    UILabel *_dayMonthLabel;
}

@property(retain, nonatomic) UILabel *dayMonthLabel; // @synthesize dayMonthLabel=_dayMonthLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(copy, nonatomic) NSString *dayOfWeekString; // @synthesize dayOfWeekString=_dayOfWeekString;
// - (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

