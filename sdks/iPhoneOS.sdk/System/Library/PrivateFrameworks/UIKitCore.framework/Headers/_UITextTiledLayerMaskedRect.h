//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextTiledLayerMaskedRect : NSObject
{
    double _alpha;
    CGRect _boundingRect;
}

+ (id)rect:(CGRect)arg1 alpha:(double)arg2;
+ (id)ghostedRect:(CGRect)arg1;
@property(readonly, nonatomic) CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
- (id)description;
- (id)initWithRect:(CGRect)arg1 alpha:(double)arg2;

@end

