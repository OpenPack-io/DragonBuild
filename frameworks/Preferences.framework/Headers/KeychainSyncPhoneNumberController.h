//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSKeychainSyncViewController.h>

#import <Preferences/KeychainSyncPhoneSettingsFragmentDelegate-Protocol.h>
#import <Preferences/KeychainSyncViewController-Protocol.h>

@class KeychainSyncPhoneSettingsFragment, UILabel;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController>
{
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UILabel *_footerLabel;
}

// - (void).cxx_destruct;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)nextPressed;
- (void)controllerDone;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;

@end

