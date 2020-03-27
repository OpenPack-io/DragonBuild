//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSString, NSURL;

@interface CalDAVUpdateOwnerItem : CoreDAVItem
{
    ICSDateValue *_dtstamp;
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSURL *_address;
    NSString *_emailAddress;
    NSString *_phoneNumber;
}

@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSURL *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) ICSDateValue *dtstamp; // @synthesize dtstamp=_dtstamp;
// - (void).cxx_destruct;
- (id)copyParseRules;
- (void)setPhoneNumberItem:(id)arg1;
- (void)setDtstampItem:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (void)setDisplayNameItem:(id)arg1;
- (void)setEmailAddressItem:(id)arg1;
- (void)setAddressItem:(id)arg1;
- (id)description;

@end

