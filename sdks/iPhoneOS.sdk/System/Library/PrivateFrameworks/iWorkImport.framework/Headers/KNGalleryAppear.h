//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import <iWorkImport/KNBuildBasicContentAnimator-Protocol.h>

__attribute__((visibility("hidden")))
@interface KNGalleryAppear : KNAnimationEffect <KNBuildBasicContentAnimator>
{
}

+ (long long)rendererTypeForAnimationContext:(id)arg1;
+ (id)thumbnailImageNameForType:(long long)arg1;
+ (id)defaultAttributes;
+ (id)localizedMenuString:(long long)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (long long)animationCategory;
+ (id)animationName;
- (void)addAnimationsTo:(id)arg1 context:(id)arg2;

@end

