//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DevicePINKeypad, UIVisualEffectView;

@interface DevicePINKeypadContainerView : UIView
{
    DevicePINKeypad *_keypad;
    UIVisualEffectView *_backdropView;
    double _iPadKeypadHeight;
}

// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithKeypad:(id)arg1;

@end

