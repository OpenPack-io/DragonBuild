//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject
{
    BOOL _active;
    double _compactHeight;
    double _expandedHeight;
    UIViewFloatAnimatableProperty *_resizeProgress;
}

@property(retain, nonatomic) UIViewFloatAnimatableProperty *resizeProgress; // @synthesize resizeProgress=_resizeProgress;
@property(nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(nonatomic) double compactHeight; // @synthesize compactHeight=_compactHeight;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
// - (void).cxx_destruct;

@end

