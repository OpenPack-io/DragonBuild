//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class DEDExtensionIdentifier, NSDate, NSDictionary, NSString;

@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding>
{
    BOOL _scheduled;
    NSString *_activityString;
    NSString *_bugSessionIdentifier;
    DEDExtensionIdentifier *_dedIdentifier;
    NSDate *_triggerDate;
    double _gracePeriod;
    NSDictionary *_parameters;
}

+ (id)activityStringForBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2;
+ (void)checkIn;
+ (id)allInfo;
+ (id)archivedClasses;
+ (double)recommendedGracePeriodForDate:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)log;
@property BOOL scheduled; // @synthesize scheduled=_scheduled;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) double gracePeriod; // @synthesize gracePeriod=_gracePeriod;
@property(retain, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(readonly) DEDExtensionIdentifier *dedIdentifier; // @synthesize dedIdentifier=_dedIdentifier;
@property(readonly) NSString *bugSessionIdentifier; // @synthesize bugSessionIdentifier=_bugSessionIdentifier;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *activityString; // @synthesize activityString=_activityString;
- (BOOL)isOverdue;
- (void)unschedule;
- (void)run;
- (void)schedule;
- (id)criteria;
- (void)removeFromStore;
- (void)addToStore;
- (id)initWithBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 runOnDate:(id)arg3 withGracePeriod:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

