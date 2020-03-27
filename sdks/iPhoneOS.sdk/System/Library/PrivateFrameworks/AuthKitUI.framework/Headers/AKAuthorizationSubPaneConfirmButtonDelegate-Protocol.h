//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKAuthorizationPresentationContext, AKAuthorizationSubPaneConfirmButton;

@protocol AKAuthorizationSubPaneConfirmButtonDelegate <NSObject>
- (AKAuthorizationPresentationContext *)presentationContext;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subpaneConfirmButtonDidFailBiometry:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(AKAuthorizationSubPaneConfirmButton *)arg1;

@optional
- (BOOL)validateReadyForAuthorization;
@end

