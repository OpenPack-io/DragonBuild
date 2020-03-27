//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber;

@interface CEMPasscodeLockscreenSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowVoiceDialing;
    NSNumber *_payloadAllowAssistantWhileLocked;
    NSNumber *_payloadAllowLockScreenTodayView;
    NSNumber *_payloadAllowPassbookWhileLocked;
    NSNumber *_payloadAllowLockScreenNotificationsView;
    NSNumber *_payloadAllowLockScreenControlCenter;
    NSNumber *_payloadAllowLockScreenWiFiModification;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowVoiceDialing:(id)arg2 withAllowAssistantWhileLocked:(id)arg3 withAllowLockScreenTodayView:(id)arg4 withAllowPassbookWhileLocked:(id)arg5 withAllowLockScreenNotificationsView:(id)arg6 withAllowLockScreenControlCenter:(id)arg7 withAllowLockScreenWiFiModification:(id)arg8;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowLockScreenWiFiModification; // @synthesize payloadAllowLockScreenWiFiModification=_payloadAllowLockScreenWiFiModification;
@property(copy, nonatomic) NSNumber *payloadAllowLockScreenControlCenter; // @synthesize payloadAllowLockScreenControlCenter=_payloadAllowLockScreenControlCenter;
@property(copy, nonatomic) NSNumber *payloadAllowLockScreenNotificationsView; // @synthesize payloadAllowLockScreenNotificationsView=_payloadAllowLockScreenNotificationsView;
@property(copy, nonatomic) NSNumber *payloadAllowPassbookWhileLocked; // @synthesize payloadAllowPassbookWhileLocked=_payloadAllowPassbookWhileLocked;
@property(copy, nonatomic) NSNumber *payloadAllowLockScreenTodayView; // @synthesize payloadAllowLockScreenTodayView=_payloadAllowLockScreenTodayView;
@property(copy, nonatomic) NSNumber *payloadAllowAssistantWhileLocked; // @synthesize payloadAllowAssistantWhileLocked=_payloadAllowAssistantWhileLocked;
@property(copy, nonatomic) NSNumber *payloadAllowVoiceDialing; // @synthesize payloadAllowVoiceDialing=_payloadAllowVoiceDialing;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

