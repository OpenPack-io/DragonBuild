//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/STGroupFetchedResultsControllerDelegate-Protocol.h>
#import <ScreenTimeUI/STRootViewModelCoordinator-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString, STAdminPersistenceController, STGroupFetchedResultsController, STRootViewModel;
@protocol STContentPrivacyViewModelCoordinator, STTimeAllowancesViewModelCoordinator, STUsageDetailsViewModelCoordinator;

@interface STRootViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator>
{
    BOOL _hasAlreadyEnteredPINForSession;
    BOOL _isLocalUser;
    NSObject<STUsageDetailsViewModelCoordinator> *_usageDetailsCoordinator;
    NSObject<STTimeAllowancesViewModelCoordinator> *_timeAllowancesCoordinator;
    NSObject<STContentPrivacyViewModelCoordinator> *_contentPrivacyCoordinator;
    STAdminPersistenceController *_persistenceController;
    STRootViewModel *_viewModel;
    STGroupFetchedResultsController *_fetchedResultsController;
    NSMutableDictionary *_coordinatorsByChildDSID;
    NSNumber *_userDSID;
    NSString *_deviceIdentifier;
    NSNumber *_usageReportType;
    long long _usageContext;
    NSString *_userName;
}

+ (id)loadViewModelFromManagedObjectContext:(id)arg1 isLocalUser:(BOOL)arg2 userDSID:(id)arg3 error:(id )arg4;
+ (id)keyPathsForValuesAffectingPasscodeEnabled;
+ (id)keyPathsForValuesAffectingUsageDetailsCoordinator;
@property(nonatomic) BOOL isLocalUser; // @synthesize isLocalUser=_isLocalUser;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly) long long usageContext; // @synthesize usageContext=_usageContext;
@property(readonly, copy) NSNumber *usageReportType; // @synthesize usageReportType=_usageReportType;
@property(readonly, copy) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSNumber *userDSID; // @synthesize userDSID=_userDSID;
@property(retain, nonatomic) NSMutableDictionary *coordinatorsByChildDSID; // @synthesize coordinatorsByChildDSID=_coordinatorsByChildDSID;
@property(retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) STRootViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly) STAdminPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
@property(nonatomic) BOOL hasAlreadyEnteredPINForSession; // @synthesize hasAlreadyEnteredPINForSession=_hasAlreadyEnteredPINForSession;
// - (void).cxx_destruct;
- (id)organizationIdentifierForManagement;
- (id)organizationIdentifierForUsage;
- (void)loadViewModelWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)loadViewModelRightNow;
- (void)saveViewModel:(id)arg1;
- (void)enableScreenTimeWithPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setShareWebUsageEnabled:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_setPIN:(id)arg1 recoveryAltDSID:(id)arg2 shouldSetRecoveryAppleID:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)setPIN:(id)arg1 recoveryAltDSID:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setPIN:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)validatePIN:(id)arg1;
@property(readonly, nonatomic, getter=isPasscodeEnabled) BOOL passcodeEnabled;
@property(nonatomic) BOOL hasShownMiniBuddy;
@property(readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator; // @synthesize contentPrivacyCoordinator=_contentPrivacyCoordinator;
@property(readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator; // @synthesize timeAllowancesCoordinator=_timeAllowancesCoordinator;
@property(readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator; // @synthesize usageDetailsCoordinator=_usageDetailsCoordinator;
- (id)coordinatorForChild:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3;
- (void)_passcodeSessionHasEnded:(id)arg1;
- (void)_registerForWillResignActiveNotifications;
- (void)groupResultsControllerDidChangeContents:(id)arg1;
- (void)_registerForPersistentStoreNotifications;
- (id)init;
- (id)initWithUserDSID:(id)arg1 deviceIdentifier:(id)arg2 usageReportType:(id)arg3 usageContext:(long long)arg4;

@end

