//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSString, SSAccount;

@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest
{
    SSAccount *_iTunesAccount;
    NSString *_inviteCode;
}

@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
// - (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (BOOL)isUserInitiated;

@end

