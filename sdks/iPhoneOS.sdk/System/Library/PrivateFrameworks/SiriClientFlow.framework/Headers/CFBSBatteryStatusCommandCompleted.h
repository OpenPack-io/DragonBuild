//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SiriClientFlow/SAServerBoundCommand-Protocol.h>

@class NSArray;

@interface CFBSBatteryStatusCommandCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)command;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *batteryStatuses;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

