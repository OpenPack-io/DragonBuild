//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPSize;

__attribute__((visibility("hidden")))
@interface LPVideoPlayButtonStyle : NSObject
{
    LPSize *_size;
    LPSize *_backgroundSize;
    double _disabledOpacity;
}

@property(nonatomic) double disabledOpacity; // @synthesize disabledOpacity=_disabledOpacity;
@property(retain, nonatomic) LPSize *backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property(retain, nonatomic) LPSize *size; // @synthesize size=_size;
// - (void).cxx_destruct;
- (id)init;

@end

