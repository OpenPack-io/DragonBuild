//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

@interface CAMZoomFactorLabel : UIView
{
    BOOL _showZoomFactorSymbol;
    BOOL _useLeadingZero;
    double _zoomFactor;
    NSString *_contentSizeCategory;
    UILabel *__label;
}

@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) BOOL useLeadingZero; // @synthesize useLeadingZero=_useLeadingZero;
@property(nonatomic) BOOL showZoomFactorSymbol; // @synthesize showZoomFactorSymbol=_showZoomFactorSymbol;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
// - (void).cxx_destruct;
- (void)_updateLabelText;
- (void)layoutSubviews;
- (UIEdgeInsets)_labelInsets;
- (CGSize)intrinsicContentSize;
@property(retain, nonatomic) UIColor *textColor;
- (id)description;
- (void)_updateFont;
- (id)initWithFrame:(CGRect)arg1;

@end

