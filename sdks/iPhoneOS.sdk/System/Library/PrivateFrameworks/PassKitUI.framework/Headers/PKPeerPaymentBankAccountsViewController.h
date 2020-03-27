//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>

@class PKBankAccountInformation, PKPeerPaymentAccount;

@interface PKPeerPaymentBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate>
{
    PKBankAccountInformation *_bankInformation;
    PKPeerPaymentAccount *_account;
    long long _detailViewStyle;
}

// - (void).cxx_destruct;
- (void)_doneButtonPressed:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldMapSection:(NSUInteger)arg1;
- (void)viewWillLayoutSubviews;
- (id)initWithPeerPaymentAccount:(id)arg1 detailViewStyle:(long long)arg2;

@end

