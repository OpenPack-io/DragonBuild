//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSDecimalNumber, NSNumber, NSSet, NSString;

@interface PKTransitAppletHistory : NSObject <NSSecureCoding>
{
    BOOL _blacklisted;
    long long _source;
    NSString *_serviceProvider;
    NSString *_currency;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSDate *_expirationDate;
    NSArray *_historyRecords;
    NSArray *_inStationDetails;
    NSSet *_enrouteTransitTypes;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSSet *enrouteTransitTypes; // @synthesize enrouteTransitTypes=_enrouteTransitTypes;
@property(copy, nonatomic) NSArray *inStationDetails; // @synthesize inStationDetails=_inStationDetails;
@property(copy, nonatomic) NSArray *historyRecords; // @synthesize historyRecords=_historyRecords;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSNumber *loyaltyBalance; // @synthesize loyaltyBalance=_loyaltyBalance;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic, getter=isBlacklisted) BOOL blacklisted; // @synthesize blacklisted=_blacklisted;
@property(copy, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(nonatomic) long long source; // @synthesize source=_source;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isInStation) BOOL inStation; // @dynamic inStation;
- (void)sanitizeValuesWithState:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 source:(long long)arg2;
- (id)init;
- (id)felicaHistory;

@end

