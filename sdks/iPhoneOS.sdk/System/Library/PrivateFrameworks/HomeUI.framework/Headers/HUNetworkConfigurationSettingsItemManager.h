//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFNetworkConfigurationGroupItem, HUNetworkConfigurationSettingsModule;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager
{
    HUNetworkConfigurationSettingsModule *_networkConfigurationSettingsModule;
}

@property(retain, nonatomic) HUNetworkConfigurationSettingsModule *networkConfigurationSettingsModule; // @synthesize networkConfigurationSettingsModule=_networkConfigurationSettingsModule;
// - (void).cxx_destruct;
@property(readonly, nonatomic) HFNetworkConfigurationGroupItem *sourceNetworkConfigurationGroupItem;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2;

@end

