//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntry.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry
{
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
// - (void).cxx_destruct;
- (id)entryImage;
- (void)_drawContentInRect:(CGRect)arg1;
- (CGSize)_calculatedContentSize;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithImage:(id)arg1;

@end

