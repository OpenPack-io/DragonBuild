//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASRecordingInfo : AceObject <SAAceSerializable>
{
}

+ (id)recordingInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)recordingInfo;
@property(nonatomic) BOOL zeroLatencyLaunch;
@property(nonatomic) BOOL ringerSwitchOff;
@property(copy, nonatomic) NSNumber *buttonUpTime;
@property(copy, nonatomic) NSNumber *buttonDowntime;
@property(copy, nonatomic) NSNumber *beamFormingStartTime;
@property(copy, nonatomic) NSString *alertType;
@property(copy, nonatomic) NSNumber *activationTime;
@property(copy, nonatomic) NSNumber *activationHapticAlertStartTime;
@property(copy, nonatomic) NSNumber *activationHapticAlertDuration;
@property(copy, nonatomic) NSNumber *activationAudioAlertStartTime;
@property(copy, nonatomic) NSNumber *activationAudioAlertDuration;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

