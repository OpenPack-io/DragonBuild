//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASettingSetValue.h>

@class NSString;

@interface SASettingSetNoiseManagement : SASettingSetValue
{
}

+ (id)setNoiseManagementWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setNoiseManagement;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *noiseManagementOption;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

