//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceClientState.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray, NSNumber, NSString, SACalendar, SAUserState;

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>
{
}

+ (id)dynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dynamiteClientState;
+ (id)uniqueObjectIdentifier;
+ (id)syncKey;
+ (id)persistencePolicy;
+ (id)deliveryDeadline;
@property(copy, nonatomic) NSString *xpAbCookie;
@property(copy, nonatomic) NSString *userToken;
@property(copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property(copy, nonatomic) NSString *status;
@property(copy, nonatomic) NSArray *inContextUsersStates;
@property(copy, nonatomic) NSNumber *iCloudMusicLibraryToggle;
@property(retain, nonatomic) SACalendar *expirationDate;
@property(retain, nonatomic) SAUserState *defaultUserState;
@property(nonatomic) BOOL ageVerificationRequired;
@property(nonatomic) BOOL activeTvUser;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

