//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, SASVSystemDialogActOutput;

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>
{
}

+ (id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowRequestCallback;
@property(copy, nonatomic) NSString *weightedPromptTargetDomain;
@property(copy, nonatomic) NSNumber *weightedPromptStrict;
@property(copy, nonatomic) NSArray *weightedPromptResponseTargets;
@property(copy, nonatomic) NSArray *weightedPromptAbortValues;
@property(retain, nonatomic) SASVSystemDialogActOutput *systemDialogActOutput;
@property(copy, nonatomic) NSString *nlInput;
@property(copy, nonatomic) NSArray *displayHintsAsJson;
@property(copy, nonatomic) NSString *disambiguationPromptTargetDomain;
@property(copy, nonatomic) NSArray *disambiguationPromptResponseTargets;
@property(copy, nonatomic) NSNumber *disambiguationPromptAmbiguityId;
@property(copy, nonatomic) NSArray *disambiguationPromptAbortValues;
@property(copy, nonatomic) NSArray *dictationPromptTargetNodes;
@property(copy, nonatomic) NSString *dictationPromptTargetDomain;
@property(copy, nonatomic) NSArray *dictationPromptAbortValues;
@property(copy, nonatomic) NSArray *conversationStateAttachments;
@property(copy, nonatomic) NSArray *applicationContextObjects;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

