//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSArray;

@interface PICurvesLUTFilter : CIFilter
{
    NSArray *_inputPointsR;
    NSArray *_inputPointsG;
    NSArray *_inputPointsB;
    NSArray *_inputPointsL;
}

+ (id)tableImageFromRed:(const float )arg1 green:(const float )arg2 blue:(const float )arg3 luminance:(const float )arg4;
+ (id)curvePointsFromDictionaries:(id)arg1;
+ (vector_f9ed6fc8)calculateCurveTable:(id)arg1;
@property(retain) NSArray *inputPointsL; // @synthesize inputPointsL=_inputPointsL;
@property(retain) NSArray *inputPointsB; // @synthesize inputPointsB=_inputPointsB;
@property(retain) NSArray *inputPointsG; // @synthesize inputPointsG=_inputPointsG;
@property(retain) NSArray *inputPointsR; // @synthesize inputPointsR=_inputPointsR;
// - (void).cxx_destruct;
- (id)outputImage;

@end

