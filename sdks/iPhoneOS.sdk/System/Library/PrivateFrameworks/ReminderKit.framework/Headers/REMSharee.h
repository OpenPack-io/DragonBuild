//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMDAChangeTrackableModel-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>
#import <ReminderKit/_REMDAChangeTrackableModel-Protocol.h>

@class NSPersonNameComponents, NSString, REMObjectID;

@interface REMSharee : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>
{
    NSString *_displayName;
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickname;
    NSString *_address;
    long long _status;
    long long _accessLevel;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_listID;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)supportsSecureCoding;
+ (id /* CDUnknownBlockType */)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (id /* CDUnknownBlockType */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* CDUnknownBlockType */)rem_DA_fetchByObjectIDsBlock;
+ (id /* CDUnknownBlockType */)rem_DA_fetchByObjectIDBlock;
+ (BOOL)rem_DA_supportsLazyDelete;
+ (BOOL)rem_DA_supportsFetching;
@property(readonly, nonatomic) REMObjectID *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;
- (id)formattedName;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSPersonNameComponents *personNameComponents;
@property(readonly) NSUInteger hash;
- (BOOL)isEqualToSharee:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 personNameComponents:(id)arg4 address:(id)arg5 status:(long long)arg6 accessLevel:(long long)arg7;
- (id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 displayName:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 address:(id)arg7 status:(long long)arg8 accessLevel:(long long)arg9;
- (id)initShareeWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 displayName:(id)arg4 firstName:(id)arg5 middleName:(id)arg6 lastName:(id)arg7 namePrefix:(id)arg8 nameSuffix:(id)arg9 nickname:(id)arg10 address:(id)arg11 status:(long long)arg12 accessLevel:(long long)arg13;

@end

