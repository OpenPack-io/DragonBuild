//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPaymentProvisioningFlowControllerDelegate-Protocol.h>

@class NPKPaymentProvisioningFlowController, NPKTestAddPaymentPassRequestContext, PKAddPaymentPassRequestConfiguration;

@interface NPKPaymentProvisioningFlowTest : NSObject <NPKPaymentProvisioningFlowControllerDelegate>
{
    NPKPaymentProvisioningFlowController *_flowController;
    NPKTestAddPaymentPassRequestContext *_testContext;
    PKAddPaymentPassRequestConfiguration *_testConfiguration;
}

@property(retain, nonatomic) PKAddPaymentPassRequestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;
@property(retain, nonatomic) NPKTestAddPaymentPassRequestContext *testContext; // @synthesize testContext=_testContext;
@property(retain, nonatomic) NPKPaymentProvisioningFlowController *flowController; // @synthesize flowController=_flowController;
// - (void).cxx_destruct;
- (id)_haveUserChooseBetweenOptions:(id)arg1 prompt:(id)arg2;
- (id)_collectUserInputWithDescription:(id)arg1 defaultValue:(id)arg2;
- (id)_requestContext;
- (void)_handleGetIssuerApplicationAddRequestStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationCodeStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationFieldsStepWithContext:(id)arg1;
- (void)_handleIssuerVerificationChannelsStepWithContext:(id)arg1;
- (void)_handleProvisioningResultStepWithContext:(id)arg1;
- (void)_handleMoreInformationStepWithContext:(id)arg1;
- (void)_handleProvisioningProgressStepWithContext:(id)arg1;
- (void)_handleTermsAndConditionsStepWithContext:(id)arg1;
- (void)_handleProductDisambiguationStepWithContext:(id)arg1;
- (void)_handleManualEntryStepWithContext:(id)arg1;
- (void)_handleChooseCredentialsStepWithContext:(id)arg1;
- (void)_handleChooseProductStepWithContext:(id)arg1;
- (void)_handleChooseFlowStepWithContext:(id)arg1;
- (void)_handleWelcomeStepWithContext:(id)arg1;
- (void)_handlePreconditionsStep;
- (void)paymentProvisioningFlowController:(id)arg1 didEncounterError:(id)arg2 requestContext:(id)arg3;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(int)arg2 toStep:(int)arg3 withContext:(id)arg4;
- (void)startVerificationTestForPass:(id)arg1;
- (void)startInAppProvisioningTest;
- (void)startProvisioningTest;
- (id)init;

@end

