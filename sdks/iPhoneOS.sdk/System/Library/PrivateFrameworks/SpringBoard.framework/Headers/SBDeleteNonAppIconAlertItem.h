//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, SBIcon;

@interface SBDeleteNonAppIconAlertItem : SBAlertItem
{
    SBIcon *_icon;
    NSString *_iconLocation;
}

// - (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)didActivate;
- (id)icon;
- (id)initWithIcon:(id)arg1 location:(id)arg2;

@end

