//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSBiometricsDisableTask : AMSTask
{
    ACAccount *_account;
}

@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)arg1;

@end

