//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UIBackdropContentView : UIView
{
    BOOL _isForcingLayout;
}

- (void)didMoveToWindow;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1;
- (void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

