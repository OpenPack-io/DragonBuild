//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface CSLockScreenBiometricFailureSettings : PTSettings
{
    BOOL _jiggleLock;
    BOOL _vibrate;
    BOOL _showPasscode;
    BOOL _waitUntilButtonUp;
}

+ (id)settingsControllerModule;
@property(nonatomic) BOOL waitUntilButtonUp; // @synthesize waitUntilButtonUp=_waitUntilButtonUp;
@property(nonatomic) BOOL showPasscode; // @synthesize showPasscode=_showPasscode;
@property(nonatomic) BOOL vibrate; // @synthesize vibrate=_vibrate;
@property(nonatomic) BOOL jiggleLock; // @synthesize jiggleLock=_jiggleLock;
- (void)setDefaultValues;

@end

