//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSString, NTPBIssueData;

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying>
{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSData *_feedViewExposureId;
    NSString *_groupFeedId;
    int _groupType;
    NSString *_iadQtoken;
    NTPBIssueData *_issueData;
    int _paidSubscriptionConversionPointExposureLocation;
    int _paidSubscriptionConversionPointExposurePresentationReason;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_purchaseId;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    NSData *_subscriptionPurchaseSessionId;
    int _userAction;
    BOOL _arrivedFromAd;
    BOOL _subscriptionOnlyArticlePreview;
    struct {
        unsigned int groupType:1;
        unsigned int paidSubscriptionConversionPointExposureLocation:1;
        unsigned int paidSubscriptionConversionPointExposurePresentationReason:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int userAction:1;
        unsigned int arrivedFromAd:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(retain, nonatomic) NSString *groupFeedId; // @synthesize groupFeedId=_groupFeedId;
@property(retain, nonatomic) NSString *purchaseId; // @synthesize purchaseId=_purchaseId;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSData *subscriptionPurchaseSessionId; // @synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId;
@property(retain, nonatomic) NSString *iadQtoken; // @synthesize iadQtoken=_iadQtoken;
@property(nonatomic) BOOL arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property(nonatomic) BOOL subscriptionOnlyArticlePreview; // @synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIssueData;
@property(readonly, nonatomic) BOOL hasParentFeedId;
@property(readonly, nonatomic) BOOL hasGroupFeedId;
@property(readonly, nonatomic) BOOL hasPurchaseId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) BOOL hasFeedViewExposureId;
@property(readonly, nonatomic) BOOL hasSubscriptionPurchaseSessionId;
@property(readonly, nonatomic) BOOL hasIadQtoken;
@property(nonatomic) BOOL hasArrivedFromAd;
@property(nonatomic) BOOL hasSubscriptionOnlyArticlePreview;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property(readonly, nonatomic) BOOL hasArticleId;
@property(readonly, nonatomic) BOOL hasSectionId;
@property(nonatomic) BOOL hasPaidSubscriptionConversionPointExposurePresentationReason;
@property(nonatomic) int paidSubscriptionConversionPointExposurePresentationReason; // @synthesize paidSubscriptionConversionPointExposurePresentationReason=_paidSubscriptionConversionPointExposurePresentationReason;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1;
@property(nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation;
@property(nonatomic) int paidSubscriptionConversionPointExposureLocation; // @synthesize paidSubscriptionConversionPointExposureLocation=_paidSubscriptionConversionPointExposureLocation;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(nonatomic) BOOL hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property(nonatomic) int paidSubscriptionConversionPointType; // @synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType;

@end

