//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController
{
}

+ (BOOL)settingEnabled;
- (BOOL)isNumericPIN;
- (BOOL)simplePIN;
// - (struct __CFString )blockedStateKey;
// - (struct __CFString )blockTimeIntervalKey;
// - (struct __CFString )failedAttemptsKey;
// - (struct __CFString )defaultsID;
- (id)pinInstructionsPromptFont;
- (BOOL)pinIsAcceptable:(id)arg1 outError:(id )arg2;
- (void)setPIN:(id)arg1;
- (id)stringsBundle;
- (BOOL)validatePIN:(id)arg1;
- (int)pinLength;
- (id)title;
- (id)pinInstructionsPrompt;
- (id)init;

@end

