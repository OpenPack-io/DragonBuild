//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand
{
}

+ (id)getRestrictedAppsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getRestrictedApps;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *executionEnvironment;
@property(copy, nonatomic) NSArray *appIds;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

