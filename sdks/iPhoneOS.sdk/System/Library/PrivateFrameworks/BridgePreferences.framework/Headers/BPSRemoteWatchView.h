//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class BPSWatchView, NSString, PBBridgeAssetsManager, UIImageView;

@interface BPSRemoteWatchView : UIView
{
    NSString *_advertisingName;
    PBBridgeAssetsManager *_assetManager;
    BPSWatchView *_watch;
    UIImageView *_watchScreen;
    NSUInteger _style;
}

@property(nonatomic) NSUInteger style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *watchScreen; // @synthesize watchScreen=_watchScreen;
@property(retain, nonatomic) BPSWatchView *watch; // @synthesize watch=_watch;
@property(retain, nonatomic) PBBridgeAssetsManager *assetManager; // @synthesize assetManager=_assetManager;
@property(copy, nonatomic) NSString *advertisingName; // @synthesize advertisingName=_advertisingName;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setAdvertisingName:(id)arg1 andStyle:(NSUInteger)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

