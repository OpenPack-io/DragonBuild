//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/ATVHighSecurityAccountSendCode.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode
{
    NSString *_hsaCode;
}

+ (Class)responseClass;
// - (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3;

@end

