//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SBBluetoothController : NSObject
{
    NSMutableArray *_devices;
    BOOL _tetheringConnected;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (BOOL)tetheringConnected;
- (id)deviceForAudioRoute:(id)arg1;
- (void)updateBattery;
- (void)batteryChanged:(id)arg1;
- (void)connectionChanged:(id)arg1;
- (void)updateTetheringConnected;
- (void)removeDeviceNotification:(id)arg1;
- (void)addDeviceNotification:(id)arg1;
- (void)iapDeviceChanged:(id)arg1;
- (void)stopWatchingForDevices;
- (void)startWatchingForDevices;
- (void)noteDevicesChanged;
- (int)batteryLevel;
- (BOOL)canReportBatteryLevel;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)dealloc;

@end

