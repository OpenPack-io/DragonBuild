//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode
{
    BOOL _resetCleanAperture;
    NUImageTransformAffine *_transform;
    CDStruct_996ac03c _cropRect;
}

@property(readonly) BOOL resetCleanAperture; // @synthesize resetCleanAperture=_resetCleanAperture;
@property(retain) NUImageTransformAffine *transform; // @synthesize transform=_transform;
@property CDStruct_996ac03c cropRect; // @synthesize cropRect=_cropRect;
// - (void).cxx_destruct;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (id)_evaluateVideoProperties:(out id )arg1;
- (id)_evaluateImageGeometry:(out id )arg1;
- (id)debugQuickLookObject;
- (id)_evaluateImage:(out id )arg1;
- (BOOL)scaledCropOrigin:(CGPoint )arg1 error:(out id )arg2;
- (CGPoint)scaleCropOriginForOriginalVideoSize:(CGSize)arg1 originalCleanAperture:(CGRect)arg2 renderScale:(double)arg3 inputExtent:(CDStruct_996ac03c)arg4;
- (id)_transformWithError:(out id )arg1;
- (id)transformAffine;
- (id)resolvedNodeWithCachedInputs:(NSDictionary )arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id )arg4;
- (id)initWithSettings:(id)arg1 inputs:(NSDictionary )arg2;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2 resetCleanAperture:(BOOL)arg3 settings:(id)arg4;

@end

