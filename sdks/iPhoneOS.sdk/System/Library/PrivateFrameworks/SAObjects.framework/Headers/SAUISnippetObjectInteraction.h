//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippetInteraction.h>

@class SADomainObject;

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction
{
}

+ (id)snippetObjectInteractionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snippetObjectInteraction;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SADomainObject *object;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

