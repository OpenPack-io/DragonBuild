//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>


@class UINavigationController, WFVariableConfigurationViewController;

@interface WFVariableConfigurationView : UIInputView <UINavigationControllerDelegate>
{
    WFVariableConfigurationViewController *_viewController;
    UINavigationController *_navigationController;
}

@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) WFVariableConfigurationViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (double)preferredHeight;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithVariable:(id)arg1;

@end

