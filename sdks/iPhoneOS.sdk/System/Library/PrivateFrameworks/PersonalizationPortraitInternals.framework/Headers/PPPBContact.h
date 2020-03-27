//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString, PPPBDateComponents;

@interface PPPBContact : PBCodable <NSCopying>
{
    long long _createdAt;
    PPPBDateComponents *_birthday;
    int _displayNameOrder;
    NSMutableArray *_emailAddresses;
    NSString *_familyName;
    NSString *_givenName;
    NSString *_identifier;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickname;
    PPPBDateComponents *_nonGregorianBirthday;
    NSString *_organizationName;
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_postalAddresses;
    NSMutableArray *_socialProfiles;
    NSString *_sortingFamilyName;
    NSString *_sortingGivenName;
    struct {
        unsigned int createdAt:1;
        unsigned int displayNameOrder:1;
    } _has;
}

+ (Class)socialProfilesType;
+ (Class)postalAddressesType;
+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;
@property(nonatomic) long long createdAt; // @synthesize createdAt=_createdAt;
@property(retain, nonatomic) NSString *sortingFamilyName; // @synthesize sortingFamilyName=_sortingFamilyName;
@property(retain, nonatomic) NSString *sortingGivenName; // @synthesize sortingGivenName=_sortingGivenName;
@property(nonatomic) int displayNameOrder; // @synthesize displayNameOrder=_displayNameOrder;
@property(retain, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(retain, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(retain, nonatomic) NSMutableArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(retain, nonatomic) PPPBDateComponents *nonGregorianBirthday; // @synthesize nonGregorianBirthday=_nonGregorianBirthday;
@property(retain, nonatomic) PPPBDateComponents *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSMutableArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(retain, nonatomic) NSMutableArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) NSMutableArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCreatedAt;
@property(readonly, nonatomic) BOOL hasSortingFamilyName;
@property(readonly, nonatomic) BOOL hasSortingGivenName;
@property(nonatomic) BOOL hasDisplayNameOrder;
@property(readonly, nonatomic) BOOL hasNameSuffix;
@property(readonly, nonatomic) BOOL hasNamePrefix;
- (id)socialProfilesAtIndex:(NSUInteger)arg1;
- (NSUInteger)socialProfilesCount;
- (void)addSocialProfiles:(id)arg1;
- (void)clearSocialProfiles;
@property(readonly, nonatomic) BOOL hasNonGregorianBirthday;
@property(readonly, nonatomic) BOOL hasBirthday;
@property(readonly, nonatomic) BOOL hasOrganizationName;
- (id)postalAddressesAtIndex:(NSUInteger)arg1;
- (NSUInteger)postalAddressesCount;
- (void)addPostalAddresses:(id)arg1;
- (void)clearPostalAddresses;
- (id)emailAddressesAtIndex:(NSUInteger)arg1;
- (NSUInteger)emailAddressesCount;
- (void)addEmailAddresses:(id)arg1;
- (void)clearEmailAddresses;
- (id)phoneNumbersAtIndex:(NSUInteger)arg1;
- (NSUInteger)phoneNumbersCount;
- (void)addPhoneNumbers:(id)arg1;
- (void)clearPhoneNumbers;
@property(readonly, nonatomic) BOOL hasNickname;
@property(readonly, nonatomic) BOOL hasFamilyName;
@property(readonly, nonatomic) BOOL hasMiddleName;
@property(readonly, nonatomic) BOOL hasGivenName;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

