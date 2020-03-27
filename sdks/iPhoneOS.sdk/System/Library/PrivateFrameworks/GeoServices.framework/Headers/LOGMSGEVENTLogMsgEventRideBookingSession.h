//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, NSMutableArray, NSString, PBDataReader;

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOLatLng *_destinationBlurred;
    double _distanceToPickupInMeters;
    double _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSMutableArray *_intentResponseFailures;
    GEOLatLng *_originBlurred;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookingSessionId;
    NSString *_rideType;
    long long _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _endState;
    int _endView;
    unsigned int _numberOfAvailableExtensions;
    int _statusIssue;
    BOOL _comparedRideOptions;
    BOOL _exploredOtherOptions;
    BOOL _installedApp;
    BOOL _movedPickupLocation;
    BOOL _paymentIsApplePay;
    BOOL _showedSurgePricingAlert;
    BOOL _switchedApp;
    BOOL _unavailable;
    struct {
        unsigned int has_distanceToPickupInMeters:1;
        unsigned int has_durationOfSessionInSeconds:1;
        unsigned int has_timestamp:1;
        unsigned int has_endState:1;
        unsigned int has_endView:1;
        unsigned int has_numberOfAvailableExtensions:1;
        unsigned int has_statusIssue:1;
        unsigned int has_comparedRideOptions:1;
        unsigned int has_exploredOtherOptions:1;
        unsigned int has_installedApp:1;
        unsigned int has_movedPickupLocation:1;
        unsigned int has_paymentIsApplePay:1;
        unsigned int has_showedSurgePricingAlert:1;
        unsigned int has_switchedApp:1;
        unsigned int has_unavailable:1;
        unsigned int read_destinationBlurred:1;
        unsigned int read_errorMessages:1;
        unsigned int read_intentResponseFailures:1;
        unsigned int read_originBlurred:1;
        unsigned int read_rideAppId:1;
        unsigned int read_rideAppVersion:1;
        unsigned int read_rideBookingSessionId:1;
        unsigned int read_rideType:1;
        unsigned int wrote_destinationBlurred:1;
        unsigned int wrote_distanceToPickupInMeters:1;
        unsigned int wrote_durationOfSessionInSeconds:1;
        unsigned int wrote_errorMessages:1;
        unsigned int wrote_intentResponseFailures:1;
        unsigned int wrote_originBlurred:1;
        unsigned int wrote_rideAppId:1;
        unsigned int wrote_rideAppVersion:1;
        unsigned int wrote_rideBookingSessionId:1;
        unsigned int wrote_rideType:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_endState:1;
        unsigned int wrote_endView:1;
        unsigned int wrote_numberOfAvailableExtensions:1;
        unsigned int wrote_statusIssue:1;
        unsigned int wrote_comparedRideOptions:1;
        unsigned int wrote_exploredOtherOptions:1;
        unsigned int wrote_installedApp:1;
        unsigned int wrote_movedPickupLocation:1;
        unsigned int wrote_paymentIsApplePay:1;
        unsigned int wrote_showedSurgePricingAlert:1;
        unsigned int wrote_switchedApp:1;
        unsigned int wrote_unavailable:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)intentResponseFailureType;
+ (Class)errorMessageType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)intentResponseFailureAtIndex:(NSUInteger)arg1;
- (NSUInteger)intentResponseFailuresCount;
- (void)_addNoFlagsIntentResponseFailure:(id)arg1;
- (void)addIntentResponseFailure:(id)arg1;
- (void)clearIntentResponseFailures;
@property(retain, nonatomic) NSMutableArray *intentResponseFailures;
- (void)_readIntentResponseFailures;
- (int)StringAsStatusIssue:(id)arg1;
- (id)statusIssueAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusIssue;
@property(nonatomic) int statusIssue;
@property(nonatomic) BOOL hasComparedRideOptions;
@property(nonatomic) BOOL comparedRideOptions;
@property(retain, nonatomic) NSString *rideAppVersion;
@property(readonly, nonatomic) BOOL hasRideAppVersion;
- (void)_readRideAppVersion;
- (id)errorMessageAtIndex:(NSUInteger)arg1;
- (NSUInteger)errorMessagesCount;
- (void)_addNoFlagsErrorMessage:(id)arg1;
- (void)addErrorMessage:(id)arg1;
- (void)clearErrorMessages;
@property(retain, nonatomic) NSMutableArray *errorMessages;
- (void)_readErrorMessages;
@property(nonatomic) BOOL hasMovedPickupLocation;
@property(nonatomic) BOOL movedPickupLocation;
@property(nonatomic) BOOL hasUnavailable;
@property(nonatomic) BOOL unavailable;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) long long timestamp;
@property(nonatomic) BOOL hasInstalledApp;
@property(nonatomic) BOOL installedApp;
@property(nonatomic) BOOL hasDurationOfSessionInSeconds;
@property(nonatomic) double durationOfSessionInSeconds;
@property(nonatomic) BOOL hasShowedSurgePricingAlert;
@property(nonatomic) BOOL showedSurgePricingAlert;
@property(nonatomic) BOOL hasSwitchedApp;
@property(nonatomic) BOOL switchedApp;
@property(nonatomic) BOOL hasNumberOfAvailableExtensions;
@property(nonatomic) unsigned int numberOfAvailableExtensions;
@property(nonatomic) BOOL hasPaymentIsApplePay;
@property(nonatomic) BOOL paymentIsApplePay;
@property(nonatomic) BOOL hasDistanceToPickupInMeters;
@property(nonatomic) double distanceToPickupInMeters;
@property(retain, nonatomic) NSString *rideType;
@property(readonly, nonatomic) BOOL hasRideType;
- (void)_readRideType;
@property(nonatomic) BOOL hasExploredOtherOptions;
@property(nonatomic) BOOL exploredOtherOptions;
@property(retain, nonatomic) GEOLatLng *destinationBlurred;
@property(readonly, nonatomic) BOOL hasDestinationBlurred;
- (void)_readDestinationBlurred;
@property(retain, nonatomic) GEOLatLng *originBlurred;
@property(readonly, nonatomic) BOOL hasOriginBlurred;
- (void)_readOriginBlurred;
@property(retain, nonatomic) NSString *rideAppId;
@property(readonly, nonatomic) BOOL hasRideAppId;
- (void)_readRideAppId;
- (int)StringAsEndView:(id)arg1;
- (id)endViewAsString:(int)arg1;
@property(nonatomic) BOOL hasEndView;
@property(nonatomic) int endView;
- (int)StringAsEndState:(id)arg1;
- (id)endStateAsString:(int)arg1;
@property(nonatomic) BOOL hasEndState;
@property(nonatomic) int endState;
@property(retain, nonatomic) NSString *rideBookingSessionId;
@property(readonly, nonatomic) BOOL hasRideBookingSessionId;
- (void)_readRideBookingSessionId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

