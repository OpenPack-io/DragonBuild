//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DShadowsRenderer-Protocol.h>

@class NSArray, TSCH3DPyramidBlurFBOResource;

__attribute__((visibility("hidden")))
@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>
{
    NSArray *mPyramidResources;
    TSCH3DPyramidBlurFBOResource *mFinalShadowResource;
    tvec2_3b141483 mInitialSize;
    int mRequestedSize;
    float mTargetRadiusFactor;
}

- (id).cxx_construct;
- (id)shadowsFBOForContext:(id)arg1;
- (float)blurSlackForQuality:(float)arg1;
- (void)invalidate;
- (void)unprotectShadowInSession:(id)arg1;
- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(id /* CDUnknownBlockType */)arg3;
- (id)p_allResources;
- (void)p_setupResourcesForSize:(tvec2_3b141483)arg1;
- (void)dealloc;
- (id)initWithSize:(int)arg1 targetRadiusFactor:(float)arg2;

@end

