//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCloudQuota/_ICQFlowSpecification.h>

@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification
{
    NSDictionary *_serverDict;
    BOOL _needsWiFi;
    long long _offerType;
}

+ (id)sanitizedUpgradeFlowServerDict:(id)arg1;
+ (id)_upgradePageIdentifierForError:(id)arg1;
+ (id)upgradeFlowSpecificationSampleForLevel:(long long)arg1;
@property(nonatomic) BOOL needsWiFi; // @synthesize needsWiFi=_needsWiFi;
@property(nonatomic) long long offerType; // @synthesize offerType=_offerType;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *serverDict;
- (id)initWithServerDictionary:(id)arg1;
- (id)upgradePageForError:(id)arg1;
- (id)upgradeFailurePageForNetwork;
- (id)upgradeSuccessPageForWiFi;
- (id)upgradePageForSuccess:(BOOL)arg1;
- (id)upgradeFailurePage;
- (id)upgradeSuccessPage;

@end

