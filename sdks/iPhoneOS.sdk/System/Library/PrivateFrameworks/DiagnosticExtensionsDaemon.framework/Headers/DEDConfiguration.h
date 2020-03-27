//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCListener;

@interface DEDConfiguration : NSObject
{
    NSXPCListener *_anonymousListener;
}

+ (id)sharedInstance;
@property(retain) NSXPCListener *anonymousListener; // @synthesize anonymousListener=_anonymousListener;
// - (void).cxx_destruct;
- (void)invalidateTestListeners;
- (id)sharedAnonymousListener;
- (id)dedDirectory;
- (id)identifier;
- (NSUInteger)connectionType;
- (id)classClusterAPIVersion;
- (id)machServiceName;
- (const char )loggingSubsystem;
- (id)uniqueDeviceSpecifier;
- (id)deviceEnclosureColor;
- (id)deviceColor;
- (id)platform;
- (id)deviceClass;
- (id)deviceProductType;
- (id)deviceModel;
- (id)deviceName;
- (id)errorDomain;

@end

