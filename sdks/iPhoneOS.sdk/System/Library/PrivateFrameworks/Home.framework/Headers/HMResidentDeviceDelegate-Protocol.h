//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMResidentDevice, NSString;

@protocol HMResidentDeviceDelegate <NSObject>

@optional
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateStatus:(NSUInteger)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateEnabled:(BOOL)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateCapabilities:(NSUInteger)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateName:(NSString *)arg2;
@end

