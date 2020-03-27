//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUOnce, UIImage;

__attribute__((visibility("hidden")))
@interface TSUImage : NSObject
{
    CGImage mCachedSliceableImage;
    struct __CFDictionary mImageSlices;
    TSUOnce *mImageSlicesOnce;
    id mCachedSystemImage;
    TSUOnce *mCachedImageOnce;
}

+ (id)imageWithCGImage:(CGImage )arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageWithCGImage:(CGImage )arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)allocWithZone:(_NSZone )arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (id)noisePatternWithWidth:(NSUInteger)arg1 height:(NSUInteger)arg2 factor:(double)arg3;
- (void)drawInRect:(CGRect)arg1 context:(CGContext )arg2 stretchingCenterWidthBy:(double)arg3;
- (CGImage )CGImageForContentsScale:(double)arg1;
- (id)stretchedImageOfSize:(CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;
- (id)PNGRepresentation;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)TIFFRepresentation;
- (BOOL)isEmpty;
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) CGImage CGImage;
- (CGImage )CGImageForSize:(CGSize)arg1;
- (void)dealloc;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) CGSize size;
- (id)initWithImageSourceRef:(CGImageSource )arg1;
- (id)initWithCGImage:(CGImage )arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithCGImage:(CGImage )arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;
@property(readonly, nonatomic) UIImage *UIImage;
- (id)initWithUIImage:(id)arg1;
- (id)compositedImageWithColor:(id)arg1 alpha:(double)arg2 blendMode:(int)arg3;
- (CGImage )CGImageForSize:(CGSize)arg1 inContext:(CGContext )arg2 orContentsScaleProvider:(id)arg3;

@end

