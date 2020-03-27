//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitTotalPixelCountImageSizePolicy : IPAImageSizePolicy
{
    long long _totalPixelCount;
}

- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)transformScaleForSize:(CGSize)arg1;
- (CGSize)transformSize:(CGSize)arg1;
- (CGSize)_transformSize:(CGSize)arg1 scale:(double )arg2;
- (BOOL)isBestFitPolicy;
- (id)initWithTotalPixelCount:(long long)arg1;

@end

