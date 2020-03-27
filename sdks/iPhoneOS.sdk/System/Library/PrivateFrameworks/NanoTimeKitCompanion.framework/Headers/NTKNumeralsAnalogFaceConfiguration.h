//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice;

@interface NTKNumeralsAnalogFaceConfiguration : NSObject
{
    BOOL _areAllComplicationsOff;
    NSUInteger _faceColor;
    NSUInteger _colorSchemeUnits;
    NSUInteger _selectedStyle;
    long long _utilitySlot;
    CLKDevice *_device;
}

@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long utilitySlot; // @synthesize utilitySlot=_utilitySlot;
@property(readonly, nonatomic) BOOL areAllComplicationsOff; // @synthesize areAllComplicationsOff=_areAllComplicationsOff;
@property(readonly, nonatomic) NSUInteger selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(readonly, nonatomic) NSUInteger colorSchemeUnits; // @synthesize colorSchemeUnits=_colorSchemeUnits;
@property(readonly, nonatomic) NSUInteger faceColor; // @synthesize faceColor=_faceColor;
// - (void).cxx_destruct;
- (id)initWithFaceColor:(NSUInteger)arg1 colorSchemeUnits:(NSUInteger)arg2 areAllComplicationsOff:(BOOL)arg3 utilitySlot:(long long)arg4 selectedStyle:(NSUInteger)arg5 forDevice:(id)arg6;

@end

