//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSOnboardingUtil : NSObject
{
}

+ (id)viewControllerForMediaType:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
+ (BOOL)shouldShowOnboarding;
+ (void)presentIfNeededFromViewController:(id)arg1 mediaTypes:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (void)markAsShown;

@end

