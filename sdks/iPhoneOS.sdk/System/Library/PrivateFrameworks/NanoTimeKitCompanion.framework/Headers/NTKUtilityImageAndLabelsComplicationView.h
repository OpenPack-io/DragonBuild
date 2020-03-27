//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_firstLabel;
    NTKColoringLabel *_secondLabel;
}

@property(retain, nonatomic) NTKColoringLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) NTKColoringLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_updateWithImageProvider:(id)arg1;
- (void)_setSecondLabelText:(id)arg1;
- (void)_setLabelAttributedText:(id)arg1;
- (void)_setLabelText:(id)arg1;
- (void)_setLabelTextProvider:(id)arg1;
- (BOOL)_isViewVisible:(id)arg1;
- (double)_gapBetweenView:(id)arg1 nextView:(id)arg2;
- (void)_layoutSubviewsHorizontally:(id)arg1;
- (double)_widthThatFits;
- (void)_updateFirstLabelMaxSize;
- (BOOL)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

