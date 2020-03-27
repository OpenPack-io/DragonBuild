//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSUISubscriptionContextMenusFactory-Protocol.h>

@class PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory>
{
    BOOL _popViewControllerOnPlanRemoval;
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
    PSSpecifier *_groupSpecifier;
}

@property(nonatomic) BOOL popViewControllerOnPlanRemoval; // @synthesize popViewControllerOnPlanRemoval=_popViewControllerOnPlanRemoval;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
// - (void).cxx_destruct;
- (id)createLowDataModeSubgroup;
- (id)createCellularPlanManager;
- (id)createCellularPlanManagerCache;
- (id)createDataCache;
- (id)createCarrierBundleCache;
- (id)createSimStatusCache;
- (id)createSimSubgroup;
- (id)createNetworkSettingsSubgroup;
- (id)createMyNumberSubgroup;
- (id)createNetworkSelectionSubgroup;
- (id)createCarrierSpaceSubgroup;
- (id)createCallingSubgroup;
- (BOOL)shouldPopViewControllerOnPlanRemoval;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(BOOL)arg4;

@end

