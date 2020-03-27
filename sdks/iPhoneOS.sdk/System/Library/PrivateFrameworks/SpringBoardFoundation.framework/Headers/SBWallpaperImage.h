//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface SBWallpaperImage : UIImage
{
    NSData *_data;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFlatColor:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithImage:(id)arg1 wallpaperData:(id)arg2;
- (id)initWithCGImage:(CGImage )arg1 scale:(double)arg2 wallpaperData:(id)arg3;
- (id)initWithWallpaperData:(id)arg1;

@end

