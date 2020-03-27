//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVStackTemplateController.h>

@class CAGradientLayer, NSArray, UIView, UIViewController;
@protocol VUIProductUberBackgroundInterface;

__attribute__((visibility("hidden")))
@interface VUIProductShowcaseViewController : _TVStackTemplateController
{
    BOOL _lightStatusBar;
    UIViewController<VUIProductUberBackgroundInterface> *_productBanner;
    UIView *_navBarGradientView;
    CAGradientLayer *_gradientLayer;
    NSArray *_navBarButtons;
    UIView *_transitionBackgroundView;
}

@property(retain, nonatomic) UIView *transitionBackgroundView; // @synthesize transitionBackgroundView=_transitionBackgroundView;
@property(retain, nonatomic) NSArray *navBarButtons; // @synthesize navBarButtons=_navBarButtons;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *navBarGradientView; // @synthesize navBarGradientView=_navBarGradientView;
@property(retain, nonatomic) UIViewController<VUIProductUberBackgroundInterface> *productBanner; // @synthesize productBanner=_productBanner;
@property(nonatomic) BOOL lightStatusBar; // @synthesize lightStatusBar=_lightStatusBar;
// - (void).cxx_destruct;
- (id)_gradientLayer;
- (void)_configureNavigationBarGradient;
- (void)_configureTransitionBackgroundView;
- (void)_configureBannerView:(id)arg1;
- (void)_setupProductBanner;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)configureAppearanceTransition;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)_overrideLargeTitleDisplayMode;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateWithViewElement:(id)arg1;

@end

