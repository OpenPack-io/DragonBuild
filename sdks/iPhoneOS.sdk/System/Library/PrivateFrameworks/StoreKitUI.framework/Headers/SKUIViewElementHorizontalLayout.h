//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKUIViewElementHorizontalLayout : NSObject
{
    double _elementSpacing;
    double _layoutWidth;
    long long _maximumElementsPerLine;
    long long _maximumLines;
}

@property(nonatomic) long long maximumLines; // @synthesize maximumLines=_maximumLines;
@property(nonatomic) long long maximumElementsPerLine; // @synthesize maximumElementsPerLine=_maximumElementsPerLine;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) double elementSpacing; // @synthesize elementSpacing=_elementSpacing;
- (id)layoutViewElements:(id)arg1 usingSizingBlock:(id /* CDUnknownBlockType */)arg2;

@end

