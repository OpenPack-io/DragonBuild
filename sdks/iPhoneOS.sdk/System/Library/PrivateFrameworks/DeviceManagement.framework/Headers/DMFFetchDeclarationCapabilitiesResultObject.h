//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject
{
    NSArray *_supportedCommands;
    NSArray *_supportedAssets;
    NSArray *_supportedConfigurations;
    NSArray *_supportedEvents;
    NSArray *_supportedActivations;
    NSArray *_supportedPredicates;
    NSArray *_supportedMessages;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *supportedMessages; // @synthesize supportedMessages=_supportedMessages;
@property(copy, nonatomic) NSArray *supportedPredicates; // @synthesize supportedPredicates=_supportedPredicates;
@property(copy, nonatomic) NSArray *supportedActivations; // @synthesize supportedActivations=_supportedActivations;
@property(copy, nonatomic) NSArray *supportedEvents; // @synthesize supportedEvents=_supportedEvents;
@property(copy, nonatomic) NSArray *supportedConfigurations; // @synthesize supportedConfigurations=_supportedConfigurations;
@property(copy, nonatomic) NSArray *supportedAssets; // @synthesize supportedAssets=_supportedAssets;
@property(copy, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

