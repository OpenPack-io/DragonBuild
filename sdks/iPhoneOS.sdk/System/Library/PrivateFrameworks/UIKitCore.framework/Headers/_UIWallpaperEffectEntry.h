//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry
{
    UIColor *_backgroundColor;
}

@property(retain) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// - (void).cxx_destruct;
- (BOOL)isSameTypeOfEffect:(id)arg1;
- (BOOL)canTransitionToEffect:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (void)addEffectToView:(id)arg1;

@end

