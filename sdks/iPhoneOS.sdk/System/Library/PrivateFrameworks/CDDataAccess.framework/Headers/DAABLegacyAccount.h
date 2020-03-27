//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CDDataAccess/DAContactsAccount-Protocol.h>

@interface DAABLegacyAccount : NSObject <DAContactsAccount>
{
    void _account;
}

@property(readonly, nonatomic) void account; // @synthesize account=_account;
- (void)markForDeletion;
- (void)updateSaveRequest:(id)arg1;
- (BOOL)isAccount;
- (BOOL)isContainer;
- (BOOL)isGroup;
- (BOOL)isContact;
- (id)externalIdentifier;
- (id)identifier;
- (int)legacyIdentifier;
- (void)dealloc;
- (id)initWithABAccout:(void )arg1;

@end

