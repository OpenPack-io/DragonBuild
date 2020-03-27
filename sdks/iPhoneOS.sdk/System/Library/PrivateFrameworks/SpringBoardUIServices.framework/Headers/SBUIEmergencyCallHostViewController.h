//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SpringBoardUIServices/SBUIEmergencyCallHostInterface-Protocol.h>

@class UIColor, _UIBackdropView;

@interface SBUIEmergencyCallHostViewController : _UIRemoteViewController <SBUIEmergencyCallHostInterface>
{
    _UIBackdropView *_blurView;
    UIColor *_tintColor;
    long long _backgroundStyle;
    double _blurRadius;
    BOOL _blursSelf;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (void)requestEmergencyCallControllerWithCompletion:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) BOOL blursSelf; // @synthesize blursSelf=_blursSelf;
// - (void).cxx_destruct;
- (void)_createAndAddBlurViewIfNecessary;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dismiss;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double )arg2;

@end

