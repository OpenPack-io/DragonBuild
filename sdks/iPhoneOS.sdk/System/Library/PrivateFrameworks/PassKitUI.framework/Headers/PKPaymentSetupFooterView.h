//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableFooterView.h>

@class UIButton, UILabel;

@interface PKPaymentSetupFooterView : PKTableFooterView
{
    UIButton *_continueButton;
    UIButton *_skipCardButton;
    UILabel *_notificationText;
    BOOL _isBuddyiPad;
    BOOL _forceShowSetupLaterButton;
    long long _context;
    UIButton *_manualEntryButton;
    UIButton *_setupLaterButton;
}

@property(retain, nonatomic) UIButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;
@property(retain, nonatomic) UIButton *manualEntryButton; // @synthesize manualEntryButton=_manualEntryButton;
@property(nonatomic) BOOL forceShowSetupLaterButton; // @synthesize forceShowSetupLaterButton=_forceShowSetupLaterButton;
@property(nonatomic) long long context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)_createSetupLaterButton;
- (void)setButtonsEnabled:(BOOL)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2;
- (CGSize)_sizeForLabel:(id)arg1 maxText:(id)arg2 constrainedToSize:(CGSize)arg3;
@property(retain, nonatomic) UIButton *skipCardButton;
@property(retain, nonatomic) UILabel *notificationText;
- (id)initWithFrame:(CGRect)arg1 context:(long long)arg2;

@end

