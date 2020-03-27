//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessory.h>

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeContainedObject-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFRoomContextProviding-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>

@class HFServiceNameComponents, HMResidentDevice, HMRoom, NSArray, NSDate, NSSet, NSString;

@interface HMAccessory (HFDebugging) <HFStateDumpBuildable, HFFavoritable, HFHomeContainedObject, HFRoomContextProviding, HFReorderableHomeKitObject>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateIsFavorite:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hf_shouldShowInFavorites;
- (BOOL)hf_anyServiceIsFavorite;
@property(readonly, nonatomic) BOOL hf_hasSetFavorite;
@property(readonly, nonatomic) BOOL hf_isFavorite;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
- (void)_pushSymptomUpdate;
@property(readonly, nonatomic) BOOL hf_fakeNetworkNotShareableSymptom;
@property(readonly, nonatomic) BOOL hf_fakeNetworkProfileInstallSymptom;
@property(readonly, nonatomic) BOOL hf_fakeNetworkProfileFixSymptom;
@property(readonly, nonatomic) BOOL hf_fake8021xNetworkSymptom;
@property(readonly, nonatomic) BOOL hf_fakeVPNProfileExpired;
@property(nonatomic) BOOL hf_fakeWiFiMismatchSymptom;
@property(readonly, nonatomic) BOOL hf_fakeShouldDisplayManualFixOption;
@property(readonly, nonatomic) BOOL hf_fakeITunesSymptom;
@property(readonly, nonatomic) BOOL hf_fakeICloudSymptom;
@property(readonly, nonatomic) BOOL hf_fakeHomeKitSymptom;
@property(readonly, nonatomic) BOOL hf_fakeGeneralFixSymptom;
@property(readonly, nonatomic) BOOL hf_fakeHardwareFixSymptom;
@property(readonly, nonatomic) BOOL hf_fakeInternetFixSymptom;
@property(readonly, nonatomic) BOOL hf_fakeWiFiPerformanceSymptom;
@property(readonly, nonatomic) BOOL hf_fakeWiFiSymptom;
@property(readonly, nonatomic) BOOL hf_fakeUnreachableError;
- (BOOL)hf_shouldDisplayManualFixOptionForSymptom:(long long)arg1;
- (BOOL)hf_shouldShowSoftwareUpdateInfo;
- (id)hf_identifyHomePod;
@property(readonly, nonatomic) BOOL hf_needsSoftwareUpdateToSupportBeingAddedToMediaSystem;
@property(readonly, nonatomic) NSUInteger hf_mediaAccessControlCapabilities;
- (BOOL)hf_supportsMultiUserLanguage:(id)arg1;
@property(readonly, nonatomic) BOOL hf_isSpeaker;
@property(readonly, nonatomic) BOOL hf_isDumbSpeaker;
@property(readonly, nonatomic) BOOL hf_isAirPortExpressSpeaker;
@property(readonly, nonatomic) BOOL hf_isAppleTV;
@property(readonly, nonatomic) BOOL hf_isHomePod;
@property(readonly, nonatomic) BOOL hf_isMediaAccessory;
@property(readonly, nonatomic) BOOL hf_needsReprovisioningCheck;
@property(readonly, nonatomic) NSArray *hf_networkConfigurationProfiles;
@property(readonly, nonatomic) NSArray *hf_networkRouterProfiles;
@property(readonly, nonatomic) HMAccessory *hf_owningBridgeAccessory;
@property(readonly, nonatomic) NSArray *hf_bridgedAccessories;
@property(readonly, nonatomic) NSSet *hf_servicesBehindBridge;
@property(readonly, nonatomic) NSSet *hf_programmableSwitchNamespaceServices;
- (id)hf_serviceOfType:(id)arg1;
@property(readonly, nonatomic) NSUInteger hf_numberOfProgrammableSwitches;
@property(readonly, nonatomic) long long hf_appPunchOutReason;
@property(readonly, copy, nonatomic) NSSet *hf_displayNamesForVisibleTiles;
@property(readonly, copy, nonatomic) NSSet *hf_componentServices;
- (id)hf_primaryService;
@property(readonly, copy, nonatomic) NSSet *hf_visibleServices;
@property(readonly, copy, nonatomic) NSSet *hf_standardServices;
@property(readonly, nonatomic) HMResidentDevice *hf_linkedResidentDevice;
- (id)hf_setShowAsIndividualServices:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hf_showAsIndividualServices;
@property(readonly, nonatomic) BOOL hf_showAsAccessoryTile;
@property(readonly, nonatomic) BOOL hf_shouldSeparateAccessoryName;
@property(readonly, nonatomic) BOOL hf_isNonServiceBasedAccessory;
@property(readonly, nonatomic) BOOL hf_isVisibleAccessory;
@property(readonly, nonatomic) BOOL hf_isMultiServiceAccessory;
@property(readonly, nonatomic) BOOL hf_isSingleServiceAccessory;
@property(readonly, nonatomic) BOOL hf_areAllServicesInGroups;
@property(readonly, nonatomic) BOOL hf_isRemoteControl;
@property(readonly, nonatomic) BOOL hf_isProgrammableSwitch;
@property(readonly, nonatomic) BOOL hf_isPowerStrip;
@property(readonly, nonatomic) BOOL hf_isNotificationSupportedCamera;
@property(readonly, nonatomic) BOOL hf_isNetworkRouterSatellite;
@property(readonly, nonatomic) BOOL hf_isNetworkRouter;
@property(readonly, nonatomic) BOOL hf_isTelevision;
@property(readonly, nonatomic) BOOL hf_isCamera;
@property(readonly, nonatomic) BOOL hf_isVisibleAsBridgedAccessory;
@property(readonly, nonatomic) BOOL hf_isVisibleAsBridge;
@property(readonly, nonatomic) BOOL hf_isBridge;
@property(readonly, nonatomic) BOOL hf_requiresFirmwareUpdate;
- (id)accessories;
- (BOOL)hf_isValidObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
- (id)hf_updateDateAdded:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
@end

