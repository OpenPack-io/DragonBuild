//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NULayoutContext-Protocol.h>

@class NSString, UITraitCollection;

@interface NULayoutContext : NSObject <NULayoutContext>
{
    UITraitCollection *_traitCollection;
    CGRect _bounds;
}

@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isLandscape) BOOL landscape;
- (id)initWithTraitCollection:(id)arg1 bounds:(CGRect)arg2;

@end

