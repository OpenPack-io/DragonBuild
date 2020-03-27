//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMLevelViewModelChangeObserver-Protocol.h>

@class CAMLevelCrosshair, CAMLevelViewModel;

@interface CAMLevelIndicatorView : UIView <CAMLevelViewModelChangeObserver>
{
    CAMLevelViewModel *_viewModel;
    CAMLevelCrosshair *__goalCrosshair;
    CAMLevelCrosshair *__userCrosshair;
}

@property(readonly, nonatomic) CAMLevelCrosshair *_userCrosshair; // @synthesize _userCrosshair=__userCrosshair;
@property(readonly, nonatomic) CAMLevelCrosshair *_goalCrosshair; // @synthesize _goalCrosshair=__goalCrosshair;
@property(readonly, nonatomic) CAMLevelViewModel *viewModel; // @synthesize viewModel=_viewModel;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didPublishChange:(NSUInteger)arg2 withContext:(void )arg3;
- (void)_updateCrosshairAlphasWithAlpha:(double)arg1 indicatorMode:(long long)arg2;
- (void)_updateCrosshairHighlightWithOffset:(UIOffset)arg1;
- (void)layoutSubviews;
- (void)_commonCAMLevelIndicatorViewInitializationWithViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

