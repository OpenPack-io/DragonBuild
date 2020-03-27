//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKDocumentBannerElement, NSArray, NSLayoutConstraint, UIImageView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasBannerController : NSObject
{
    IKDocumentBannerElement *_bannerElement;
    NSUInteger _vignetteType;
    UIView *_installedView;
    UIScrollView *_trackingScrollView;
    NSArray *_installedConstraints;
    UIImageView *_bannerImageView;
    UIImageView *_vignetteImageView;
    NSLayoutConstraint *_bannerImageViewHeightConstraint;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSLayoutConstraint *bannerImageViewHeightConstraint; // @synthesize bannerImageViewHeightConstraint=_bannerImageViewHeightConstraint;
@property(retain, nonatomic) UIImageView *vignetteImageView; // @synthesize vignetteImageView=_vignetteImageView;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) NSArray *installedConstraints; // @synthesize installedConstraints=_installedConstraints;
@property(nonatomic) __weak UIScrollView *trackingScrollView; // @synthesize trackingScrollView=_trackingScrollView;
@property(nonatomic) __weak UIView *installedView; // @synthesize installedView=_installedView;
@property(nonatomic) NSUInteger vignetteType; // @synthesize vignetteType=_vignetteType;
@property(readonly, nonatomic) IKDocumentBannerElement *bannerElement; // @synthesize bannerElement=_bannerElement;
// - (void).cxx_destruct;
- (void)_updateVignetteImage;
- (void)installBannerOnView:(id)arg1 anchoredToScrollView:(id)arg2;
- (void)_doAllSetup;
- (void)_configureBanner;
- (id)initWithBannerElement:(id)arg1;

@end

