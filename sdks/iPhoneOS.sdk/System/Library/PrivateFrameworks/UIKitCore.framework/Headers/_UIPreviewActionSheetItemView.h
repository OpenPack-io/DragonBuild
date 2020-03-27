//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, UIPreviewAction;

__attribute__((visibility("hidden")))
@interface _UIPreviewActionSheetItemView : UIView
{
    BOOL _selected;
    UIPreviewAction *_action;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) UIPreviewAction *action; // @synthesize action=_action;
// - (void).cxx_destruct;
- (void)_contentSizeChanged:(id)arg1;
- (void)_updateConstraints;
- (void)_updateImageFromAction;
- (void)_updateTitleFromAction;
- (void)_updateLabelFont;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 action:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

