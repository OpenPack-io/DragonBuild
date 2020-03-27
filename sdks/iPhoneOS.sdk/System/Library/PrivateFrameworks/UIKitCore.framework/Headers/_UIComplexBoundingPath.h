//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBoundingPath.h>

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIComplexBoundingPath : _UIBoundingPath
{
    double _scale;
    long long _orientation;
    _UIBoundingPathBitmap *_bitmap;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)_imageRepresentation;
- (id)description;
- (CGRect)_rectTuckedAgainstEdge:(NSUInteger)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 againstPortraitEdge:(NSUInteger)arg2 fromPortraitPixelRect:(CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;
- (CGRect)_rectTuckedInCorner:(NSUInteger)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5;
- (CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 inPortaitCorner:(NSUInteger)arg2 fromPortraitPixelRect:(CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;
- (CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3;
- (CGRect)_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(CGRect)arg1 portraitAspectRatio:(double)arg2;
- (CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(NSUInteger)arg3 withOptions:(NSUInteger)arg4;
- (struct _UIIntegralRect)_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(NSUInteger)arg2 performCompleteTest:(BOOL)arg3;
- (struct _UIIntegralRect)_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(NSUInteger)arg2 performCompleteTest:(BOOL)arg3;
- (BOOL)isNonRectangular;
- (void)setCoordinateSpace:(id)arg1;
- (BOOL)validateForCoordinateSpace;
- (BOOL)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (id)initWithRectangularCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3;
- (id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

