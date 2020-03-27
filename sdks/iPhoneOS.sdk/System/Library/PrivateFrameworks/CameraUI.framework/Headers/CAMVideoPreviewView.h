//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer;

@interface CAMVideoPreviewView : UIView
{
    BOOL _square;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    UIView *_previewLayerView;
    long long _previewViewAspectMode;
}

@property(nonatomic, getter=isSquare) BOOL square; // @synthesize square=_square;
@property(nonatomic) long long previewViewAspectMode; // @synthesize previewViewAspectMode=_previewViewAspectMode;
@property(readonly, nonatomic) UIView *previewLayerView; // @synthesize previewLayerView=_previewLayerView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (CGRect)_frameForSubviewsAccountForSquare:(BOOL)arg1;
- (void)_updateAspectModeForSublayers;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

