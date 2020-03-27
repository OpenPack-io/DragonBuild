//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPassOwnershipToken : NSObject
{
    NSString *_ownershipToken;
    NSString *_ownershipTokenIdentifier;
}

+ (void)deleteAllLocalKeychainOwnershipTokens;
+ (void)queryKeychainForOwnershipTokens:(id /* CDUnknownBlockType */)arg1;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
// - (void).cxx_destruct;
- (id)_wrapperWithType:(NSUInteger)arg1 identifier:(id)arg2;
- (void)_readFromKeychain;
- (void)_writeToKeychain;
- (id)description;
- (void)deleteTokenFromLocalKeychain;
- (void)deleteTokenFromKeychain;
@property(copy, nonatomic) NSString *ownershipToken;
- (id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1;

@end

