//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface TPStatusBarManager : NSObject
{
    NSString *_currentAbbreviatedStatusBarString;
    NSTimer *_callDurationTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *callDurationTimer; // @synthesize callDurationTimer=_callDurationTimer;
@property(copy, nonatomic) NSString *currentAbbreviatedStatusBarString; // @synthesize currentAbbreviatedStatusBarString=_currentAbbreviatedStatusBarString;
// - (void).cxx_destruct;
- (void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
- (void)updateCurrentAbbreviatedStatusBarString;
- (void)dealloc;
- (id)init;

@end

