//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _TVHeaderColumnView : UIView
{
    NSArray *_labelViews;
    double _lineSpacing;
}

@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(copy, nonatomic) NSArray *labelViews; // @synthesize labelViews=_labelViews;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;

@end

