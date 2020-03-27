//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKMedicalIDEditorMultilineStringCell.h>


@class NSString, UIButton, UIImage, UIView;

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell <UITextViewDelegate>
{
    UIView *_nameBottomSeparator;
    UIButton *_editPhotoButton;
    UIButton *_editPhotoLabelButton;
}

+ (BOOL)showsLabelAndValue;
@property(readonly, nonatomic) UIButton *editPhotoLabelButton; // @synthesize editPhotoLabelButton=_editPhotoLabelButton;
@property(readonly, nonatomic) UIButton *editPhotoButton; // @synthesize editPhotoButton=_editPhotoButton;
// - (void).cxx_destruct;
- (CGRect)_separatorFrame;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)_adjustEditPhotoButtonFontSizeIfNecessary;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
@property(retain, nonatomic) UIImage *photo;
@property(retain, nonatomic) NSString *name;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_largeTextLayoutSubviews;
- (void)_regularLayoutSubviews;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

