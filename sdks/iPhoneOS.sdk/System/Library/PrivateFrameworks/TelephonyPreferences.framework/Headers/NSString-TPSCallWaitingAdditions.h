//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TPSCallWaitingAdditions)
+ (id)tps_stringWithTPSCallWaitingState:(long long)arg1;
+ (id)tps_stringWithTPSEncryptedIdentityType:(long long)arg1;
+ (id)tps_ctStringWithTPSEncryptedIdentityType:(long long)arg1;
+ (id)tps_stringWithCTPhoneBookName:(int)arg1;
+ (id)tps_stringWithTPSCallingLineIdRestrictionState:(long long)arg1;
+ (id)tps_stringWithTPSCallForwardingServiceType:(long long)arg1;
@property(readonly, nonatomic) long long tps_encryptedIdentityType;
@end

