//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIViewControllerContainerView : UIView
{
    UIViewController *_viewController;
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
// - (void).cxx_destruct;
- (void)_updateLayoutOfViewControllerView;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

