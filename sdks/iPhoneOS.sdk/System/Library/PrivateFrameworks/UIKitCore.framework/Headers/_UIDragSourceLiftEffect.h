//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect>
{
    NSMapTable *_liftOperationByContext;
}

// - (void).cxx_destruct;
- (void)_setInteractionEffectsLifted:(BOOL)arg1 withOperation:(id)arg2;
- (void)_uninstallInteractionPlattersForOperation:(id)arg1;
- (void)_installInteractionPlattersForOperation:(id)arg1;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2;
- (id)init;

@end

