//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegSecureAccountWebViewController.h>

@protocol CNFRegViewAccountControllerDelegate;

@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController
{
    id <CNFRegViewAccountControllerDelegate> _delegate;
}

@property(nonatomic) id <CNFRegViewAccountControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)cancelTapped;
- (id)bagKey;
- (id)logName;
- (void)dealloc;

@end

