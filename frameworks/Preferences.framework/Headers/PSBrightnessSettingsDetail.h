//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsDetail-Protocol.h>

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>
{
}

+ (BOOL)autoBrightnessEnabled;
+ (void)setAutoBrightnessEnabled:(BOOL)arg1;
+ (BOOL)deviceSupportsAutoBrightness;
+ (void)endObservingExternalBrightnessChanges;
+ (void)beginObservingExternalBrightnessChanges:(CDUnknownBlockType)arg1 changedAction:(CDUnknownBlockType)arg2;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)setValue:(double)arg1;
+ (void)incrementBrightnessValue:(double)arg1;
+ (double)incrementedBrightnessValue:(double)arg1;
+ (double)currentValue;
+ (id)iconImage;
+ (id)preferencesURL;

@end

