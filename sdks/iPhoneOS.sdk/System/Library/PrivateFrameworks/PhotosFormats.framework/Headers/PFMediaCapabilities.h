//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PFMediaCapabilities : NSObject
{
    NSDictionary *_capabilitiesInformation;
}

+ (id)stringForSupport:(long long)arg1;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg1;
+ (id)legacyCapabilities;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)arg1;
+ (id)capabilitiesForCurrentDevice;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (void)setRecordSlomoConfiguration:(id)arg1;
+ (id)recordSlomoConfigurationWithValidValues:(id)arg1;
+ (void)setRecordVideoConfiguration:(id)arg1;
+ (id)recordVideoConfigurationWithValidValues:(id)arg1;
+ (BOOL)setNewFormatsConfiguration:(long long)arg1 fromSource:(long long)arg2;
+ (long long)newFormatsConfiguration;
@property(retain) NSDictionary *capabilitiesInformation; // @synthesize capabilitiesInformation=_capabilitiesInformation;
// - (void).cxx_destruct;
- (id)description;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (long long)userDefaultsPeerOverrideValue;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2;
- (id)opaqueRepresentation;
- (BOOL)supportsTranscodeChoice;
- (long long)supportForAVAsset:(id)arg1;
- (long long)supportForFormatDescription:(struct opaqueCMFormatDescription )arg1;
- (long long)supportForAdjustmentBaseResources;
- (long long)supportForAssetBundleVersion:(id)arg1;
- (long long)supportForLivePhotoVersion:(id)arg1;
- (long long)supportForContainerTypeIdentifier:(id)arg1;
- (long long)supportForCodec:(unsigned int)arg1;
- (id)initWithOpaqueRepresentation:(id)arg1;

@end

