//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIApplicationRotationFollowingWindow.h"

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow
{
    UIAlertController *_alertController;
}

// - (void).cxx_destruct;
@property(readonly, retain, nonatomic) UIAlertController *alertController;
- (void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (id)_presentationViewController;
- (id)initWithWindowScene:(id)arg1;
- (id)init;

@end

