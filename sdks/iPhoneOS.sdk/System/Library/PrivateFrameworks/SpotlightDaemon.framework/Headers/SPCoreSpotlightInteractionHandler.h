//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject
{
    CNContactStore *_contactStore;
}

@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (id)attributeForIntent:(id)arg1 direction:(long long)arg2;
- (id)interestingContactIdentifiersFromIntent:(id)arg1;

@end

