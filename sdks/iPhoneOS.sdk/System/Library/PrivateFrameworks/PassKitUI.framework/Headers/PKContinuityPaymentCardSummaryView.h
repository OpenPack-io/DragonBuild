//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIImageView, UILabel;

@interface PKContinuityPaymentCardSummaryView : UIView
{
    UIImageView *_alertView;
    UILabel *_descriptionView;
    UILabel *_subtitleView;
    NSLayoutConstraint *_textToTrailingConstraint;
    NSLayoutConstraint *_textToAlertConstraint;
    NSMutableArray *_singleLineConstraints;
    NSMutableArray *_subtitleConstraints;
    BOOL _subtitleDescribesError;
    BOOL _showsAlert;
    NSString *_cardDescription;
    NSString *_subtitle;
    UIImageView *_thumbnailView;
}

@property(nonatomic) BOOL showsAlert; // @synthesize showsAlert=_showsAlert;
@property(readonly, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) BOOL subtitleDescribesError; // @synthesize subtitleDescribesError=_subtitleDescribesError;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *cardDescription; // @synthesize cardDescription=_cardDescription;
// - (void).cxx_destruct;
- (void)updateConstraints;
- (void)_prepareImageAndValueConstraints;
- (id)_formatTextForString:(id)arg1 alerting:(BOOL)arg2;
- (void)_createLabels;
- (void)_createSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

