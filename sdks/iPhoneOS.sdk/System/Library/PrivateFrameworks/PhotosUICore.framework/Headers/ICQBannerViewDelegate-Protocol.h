//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICQBannerView, NSDictionary, UIViewController;

@protocol ICQBannerViewDelegate <NSObject>

@optional
- (void)bannerView:(ICQBannerView *)arg1 action:(long long)arg2 parameters:(NSDictionary *)arg3 dismiss:(BOOL)arg4;
- (BOOL)bannerView:(ICQBannerView *)arg1 performAction:(long long)arg2 parameters:(NSDictionary *)arg3;
- (UIViewController *)presentingViewControllerForBannerView:(ICQBannerView *)arg1;
@end

