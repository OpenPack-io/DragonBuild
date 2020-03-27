//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface PXTilingScrollInfo : NSObject <NSCopying>
{
    BOOL _pagingEnabled;
    NSUInteger _axis;
    CGSize _interpageSpacing;
    CGPoint _pagingOrigin;
}

@property(nonatomic) CGPoint pagingOrigin; // @synthesize pagingOrigin=_pagingOrigin;
@property(nonatomic) CGSize interpageSpacing; // @synthesize interpageSpacing=_interpageSpacing;
@property(nonatomic, getter=isPagingEnabled) BOOL pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) NSUInteger axis; // @synthesize axis=_axis;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;

@end

