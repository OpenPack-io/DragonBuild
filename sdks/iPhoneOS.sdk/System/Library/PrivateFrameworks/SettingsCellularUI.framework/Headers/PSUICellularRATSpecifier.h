//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, PSConfirmationSpecifier, PSListController, PSListItemsController;

__attribute__((visibility("hidden")))
@interface PSUICellularRATSpecifier : PSSpecifier
{
    PSListController *_hostController;
    PSSpecifier *_mobileDataGroup;
    int _RATSwitchKind;
    BOOL _3GOverrideTo4G;
    BOOL _LTEOverrideTo4G;
    BOOL _supports2G;
    BOOL _supports3G;
    BOOL _supports4G;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListItemsController *_RATModeDrilldownController;
    PSConfirmationSpecifier *_warning;
}

@property(retain, nonatomic) PSConfirmationSpecifier *warning; // @synthesize warning=_warning;
@property(nonatomic) __weak PSListItemsController *RATModeDrilldownController; // @synthesize RATModeDrilldownController=_RATModeDrilldownController;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
// - (void).cxx_destruct;
- (BOOL)shouldShowLTEOptions;
- (BOOL)shouldShowLegacyRATOptions;
- (id)getLTEService:(id)arg1;
- (NSUInteger)_getLTEService;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (BOOL)supportsVoLTE;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)reloadRATStatus:(id)arg1;
- (void)updateRATSpecifiers;
- (BOOL)_updateMobileDataGroupContentShowingRAT:(BOOL)arg1;
- (void)updateRATState;
- (id)getRATSwitchIsOn:(id)arg1;
- (BOOL)doesMatchMaxRAT:(long long)arg1;
- (id)getRATModeState:(id)arg1;
- (void)_setRATModeConfirmed:(int)arg1;
- (void)showVoLTECanCauseIssues;
- (void)acceptedRATSwitch:(id)arg1;
- (void)acceptedRATSwitchDuringCall:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (void)_setRATModeIgnoreCall:(int)arg1;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (BOOL)updateState;
- (id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5;

@end

