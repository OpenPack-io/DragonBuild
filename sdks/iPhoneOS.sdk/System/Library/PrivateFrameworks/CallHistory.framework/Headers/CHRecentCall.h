//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CHHandle, CNContact, NSDate, NSMutableArray, NSNumber, NSSet, NSString, NSUUID, NSValue;
@protocol CHPhoneBookManagerProtocol, OS_dispatch_queue;

@interface CHRecentCall : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _read;
    BOOL _callerIdIsBlocked;
    BOOL _multiCall;
    BOOL _answered;
    BOOL _mobileOriginated;
    unsigned int _callerIdAvailability;
    unsigned int _callStatus;
    unsigned int _callCategory;
    unsigned int _callType;
    NSString *_callerNetworkName;
    long long _handleType;
    NSUUID *_localParticipantUUID;
    NSUUID *_outgoingLocalParticipantUUID;
    NSSet *_remoteParticipantHandles;
    long long _verificationStatus;
    CHHandle *_localParticipantHandle;
    NSString *_uniqueId;
    NSString *_serviceProvider;
    NSNumber *_bytesOfDataUsed;
    NSDate *_date;
    double _duration;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSNumber *_disconnectedCause;
    NSNumber *_filteredOutReason;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkSecondName;
    NSUInteger _unreadCount;
    NSString *_clientAddressBookRecordId;
    NSString *_contactIdentifier;
    long long _mediaType;
    long long _ttyType;
    NSNumber *_timeToEstablish;
    NSValue *_addressBookRecordRef;
    NSString *_addressBookRecordId;
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_devicePhoneId;
    NSString *_callerId;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_callerName;
    NSMutableArray *_callOccurrences;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    CNContact *_contactRef;
    NSString *_callerIdFormatted;
    id <CHPhoneBookManagerProtocol> _phoneBookManager;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned int)getCallTypeForCategory:(unsigned int)arg1 andServiceProvider:(id)arg2;
+ (id)serviceProviderForCallType:(unsigned int)arg1;
+ (unsigned int)categoryForCallType:(unsigned int)arg1;
+ (unsigned int)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2;
+ (long long)ttyTypeForCallCategory:(unsigned int)arg1;
+ (long long)mediaTypeForCallCategory:(unsigned int)arg1;
+ (id)callCategoryAsString:(unsigned int)arg1;
+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (id)callHandleTypeAsString:(long long)arg1;
+ (id)callTTYTypeAsString:(long long)arg1;
+ (id)callMediaTypeAsString:(long long)arg1;
+ (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id )arg2;
+ (id)unarchivedObjectClasses;
+ (id)predicateForCallsWithAnyUniqueIDs:(id)arg1;
+ (id)predicateForCallsWithUniqueID:(id)arg1;
+ (id)predicateForCallsWithAnyTTYTypes:(id)arg1;
+ (id)predicateForCallsWithTTYType:(long long)arg1;
+ (id)predicateForCallsWithStatusRead:(BOOL)arg1;
+ (id)predicateForCallsWithStatusOriginated:(BOOL)arg1;
+ (id)predicateForCallsWithStatusAnswered:(BOOL)arg1;
+ (id)predicateForCallsWithStatus:(unsigned int)arg1;
+ (id)predicateForCallsWithAnyServiceProviders:(id)arg1;
+ (id)predicateForCallsWithServiceProvider:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandleNormalizedValues:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandleValues:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandleTypes:(id)arg1;
+ (id)predicateForCallsWithAnyRemoteParticipantHandles:(id)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandleNormalizedValue:(id)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandleValue:(id)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandleType:(long long)arg1;
+ (id)predicateForCallsWithRemoteParticipantHandle:(id)arg1;
+ (id)predicateForCallsWithRemoteParticipantCount:(long long)arg1;
+ (id)predicateForCallsWithAnyMediaTypes:(id)arg1;
+ (id)predicateForCallsWithMediaType:(long long)arg1;
+ (id)predicateForCallsWithCategory:(unsigned int)arg1;
+ (id)predicateForCallsBetweenStartDate:(id)arg1 endDate:(id)arg2;
@property BOOL mobileOriginated; // @synthesize mobileOriginated=_mobileOriginated;
@property BOOL answered; // @synthesize answered=_answered;
@property(retain) id <CHPhoneBookManagerProtocol> phoneBookManager; // @synthesize phoneBookManager=_phoneBookManager;
@property(copy, nonatomic, getter=callerIdForDisplay) NSString *callerIdFormatted; // @synthesize callerIdFormatted=_callerIdFormatted;
@property(copy, nonatomic) CNContact *contactRef; // @synthesize contactRef=_contactRef;
@property BOOL multiCall; // @synthesize multiCall=_multiCall;
@property(copy, nonatomic) NSString *callerIdLocation; // @synthesize callerIdLocation=_callerIdLocation;
@property(copy, nonatomic) NSString *callerIdLabel; // @synthesize callerIdLabel=_callerIdLabel;
@property(retain, nonatomic) NSMutableArray *callOccurrences; // @synthesize callOccurrences=_callOccurrences;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) NSString *callerId; // @synthesize callerId=_callerId;
@property(copy) NSString *devicePhoneId; // @synthesize devicePhoneId=_devicePhoneId;
@property(nonatomic) unsigned int callType; // @synthesize callType=_callType;
@property(nonatomic) unsigned int callCategory; // @synthesize callCategory=_callCategory;
@property(copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // @synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId;
@property(copy, nonatomic) NSString *addressBookRecordId; // @synthesize addressBookRecordId=_addressBookRecordId;
@property(copy) NSValue *addressBookRecordRef; // @synthesize addressBookRecordRef=_addressBookRecordRef;
@property(copy, nonatomic) NSNumber *timeToEstablish; // @synthesize timeToEstablish=_timeToEstablish;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy) NSString *clientAddressBookRecordId; // @synthesize clientAddressBookRecordId=_clientAddressBookRecordId;
@property NSUInteger unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy) NSString *callerNetworkSecondName; // @synthesize callerNetworkSecondName=_callerNetworkSecondName;
@property(copy) NSString *callerNetworkFirstName; // @synthesize callerNetworkFirstName=_callerNetworkFirstName;
@property BOOL callerIdIsBlocked; // @synthesize callerIdIsBlocked=_callerIdIsBlocked;
@property(copy) NSNumber *filteredOutReason; // @synthesize filteredOutReason=_filteredOutReason;
@property(copy) NSNumber *disconnectedCause; // @synthesize disconnectedCause=_disconnectedCause;
@property(copy) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(copy) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSNumber *bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property(copy, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(nonatomic) unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) CHHandle *localParticipantHandle; // @synthesize localParticipantHandle=_localParticipantHandle;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)executeSyncWithResult:(id /* CDUnknownBlockType */)arg1;
- (void)executeSync:(id /* CDUnknownBlockType */)arg1;
- (void)execute:(id /* CDUnknownBlockType */)arg1;
- (void)fixCallTypeInfo;
- (void)updateTTYAndMediaType;
- (id)callOccurrencesAsStringSync;
- (id)description;
- (id)descriptionInDepth;
- (BOOL)representsCallAtDate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)callerIdSubStringForDisplay;
- (id)callerIdLocationSync;
- (id)callerIdLabelSync;
- (id)callerIdForDisplaySync;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)callerNameSync;
@property(copy, nonatomic) NSString *callerNetworkName; // @synthesize callerNetworkName=_callerNetworkName;
@property(nonatomic) unsigned int callerIdAvailability; // @synthesize callerIdAvailability=_callerIdAvailability;
- (BOOL)callerIdIsEmailAddress;
- (BOOL)callerIdIsEmailAddressSync;
@property(nonatomic) long long handleType; // @synthesize handleType=_handleType;
- (long long)handleTypeSync;
- (id)addressBookRecordRefSync;
- (id)addressBookRecordIdSync;
- (id)contactRefSync;
- (id)contactIdentifierSync;
- (void)fetchAndSetFullContactSync;
- (void)fetchAndSetContactIdentifierSync;
@property(nonatomic) BOOL read; // @synthesize read=_read;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSUUID *outgoingLocalParticipantUUID; // @synthesize outgoingLocalParticipantUUID=_outgoingLocalParticipantUUID;
@property(retain, nonatomic) NSUUID *localParticipantUUID; // @synthesize localParticipantUUID=_localParticipantUUID;
- (void)createOccurrenceArraySync;
- (id)callOccurrencesSync;
- (NSUInteger)numberOfOccurrences;
- (NSUInteger)numberOfOccurrencesSync;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (BOOL)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (BOOL)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (BOOL)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (BOOL)canCoalesceRemoteParticipantHandlesFromCall:(id)arg1;
- (BOOL)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (BOOL)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (void)addressBookChanged;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)init;
- (id)archivedDataWithError:(id )arg1;

@end

