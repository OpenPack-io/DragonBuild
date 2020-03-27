//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSNumber, NSString, _MCDNowPlayingViewController;

@protocol MCDNowPlayingViewControllerDelegate <NSObject>

@optional
- (void)nowPlayingViewControllerMore:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowMore:(_MCDNowPlayingViewController *)arg1;
- (NSNumber *)nowPlayingViewControllerGetPlaybackRate:(_MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerChangePlaybackRate:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowAlbumLink:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsFuseSubscriber:(_MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerAddToLibrary:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowAddToLibrary:(_MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanRepeat:(_MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(_MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(_MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewController:(_MCDNowPlayingViewController *)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (BOOL)nowPlayingViewController:(_MCDNowPlayingViewController *)arg1 buttonShouldBeActive:(long long)arg2;
- (BOOL)nowPlayingViewController:(_MCDNowPlayingViewController *)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id )arg3 existingIdentifier:(NSString *)arg4 tinted:(out BOOL )arg5;
@end

