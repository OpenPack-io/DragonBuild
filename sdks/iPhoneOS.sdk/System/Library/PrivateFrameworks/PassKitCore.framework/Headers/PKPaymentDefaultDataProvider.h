//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentDataProvider-Protocol.h>
#import <PassKitCore/PKPaymentServiceDelegate-Protocol.h>

@class NSHashTable, NSLock, NSString, PKOSVersionRequirement, PKPaymentService, PKPaymentWebService, PKSecureElement;
@protocol OS_dispatch_queue, PKPaymentDataProviderDelegate;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider>
{
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    NSHashTable *_delegates;
    NSLock *_delegateLock;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id <PKPaymentDataProviderDelegate> _delegate;
    PKPaymentWebService *_paymentWebService;
}

@property(readonly, nonatomic) PKPaymentWebService *paymentWebService; // @synthesize paymentWebService=_paymentWebService;
@property(nonatomic) __weak id <PKPaymentDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (BOOL)supportsLowPowerExpressMode;
- (BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (BOOL)supportsInAppPaymentsForPass:(id)arg1;
- (BOOL)supportsNotificationsForPass:(id)arg1;
- (BOOL)supportsMessagesForPass:(id)arg1;
- (BOOL)supportsTransactionsForPass:(id)arg1;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setCommutePlanReminderInterval:(double)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)commutePlanReminderIntervalForCommutePlan:(id)arg1 pass:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)mapsMerchantsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)installmentPlanTransactionsForPassUniqueIdentifier:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)installmentPlansWithTransactionReferenceIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(NSUInteger)arg2 answer:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)cashbackByPeriodFromPassUniqueIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(NSUInteger)arg5 type:(long long)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)transactionWithReferenceIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)transactionWithServiceIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)transactionCountByPeriodForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 calendar:(id)arg4 calendarUnit:(NSUInteger)arg5 includePurchaseTotal:(BOOL)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)pendingTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)approvedTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(NSUInteger)arg3 withBackingData:(NSUInteger)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(id /* CDUnknownBlockType */)arg8;
- (void)transactionsForPaymentPassWithuniqueIdentifier:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(NSUInteger)arg3 withBackingData:(NSUInteger)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(id /* CDUnknownBlockType */)arg8;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(NSUInteger)arg3 withBackingData:(NSUInteger)arg4 limit:(long long)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withMapsIdentifier:(NSUInteger)arg2 withTransactionSource:(NSUInteger)arg3 withBackingData:(NSUInteger)arg4 limit:(long long)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 withTransactionSource:(NSUInteger)arg3 withBackingData:(NSUInteger)arg4 limit:(long long)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 limit:(long long)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(id /* CDUnknownBlockType */)arg8;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(NSUInteger)arg2 withBackingData:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)passUpgradeWithRequest:(id)arg1 pass:(id)arg2 visibleViewController:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
- (void)setPaymentHandoffDisabled:(BOOL)arg1;
@property(readonly, nonatomic) PKOSVersionRequirement *deviceVersion;
@property(readonly, nonatomic) NSString *deviceClass;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) BOOL isPaymentHandoffDisabled;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL secureElementIsProductionSigned;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (id)expressPassesInformation;
@property(readonly, nonatomic) BOOL isDeviceInRestrictedMode;
- (void)_accessDelegatesWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (long long)apiVersion;
- (void)dealloc;
- (id)initWithPaymentService:(id)arg1 secureElement:(id)arg2;
- (id)init;

@end

