//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HAPAccessoryServerBrowserWiProxBTLE, NSData, NSNumber, NSString, NSUUID;

@protocol HAPAccessoryServerBrowserWiProxBTLEDelegate
- (void)accessoryServerBrowserBTLE:(HAPAccessoryServerBrowserWiProxBTLE *)arg1 didDiscoverHAPPeripheral:(NSUUID *)arg2 accessoryName:(NSString *)arg3 pairingIdentifier:(NSString *)arg4 advertisementFormat:(NSUInteger)arg5 statusFlags:(NSNumber *)arg6 stateNumber:(NSNumber *)arg7 category:(NSNumber *)arg8 configurationNumber:(NSNumber *)arg9 setupHash:(NSData *)arg10 encryptedPayload:(NSData *)arg11;
@end

