//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIImage, UIImageView;

@interface _SBSUIOrientedImageView : SBFTouchPassThroughView
{
    UIImageView *_imageView;
    UIImage *_portraitImage;
    UIImage *_landscapeImage;
}

@property(retain, nonatomic) UIImage *landscapeImage; // @synthesize landscapeImage=_landscapeImage;
@property(retain, nonatomic) UIImage *portraitImage; // @synthesize portraitImage=_portraitImage;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

