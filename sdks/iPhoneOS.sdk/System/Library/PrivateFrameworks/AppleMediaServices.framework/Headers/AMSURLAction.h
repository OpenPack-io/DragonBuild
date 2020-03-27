//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSAuthenticateResult, AMSDialogResult, NSDictionary, NSError, NSString, NSURL;

@interface AMSURLAction : NSObject
{
    long long _actionType;
    NSError *_error;
    NSString *_reason;
    NSURL *_redirectURL;
    AMSAuthenticateResult *_authenticateResult;
    AMSDialogResult *_dialogResult;
    NSDictionary *_updatedHeaders;
}

+ (id)redirectActionWithURL:(id)arg1;
+ (id)retryAction;
+ (id)proceedAction;
+ (id)actionWithError:(id)arg1;
@property(retain, nonatomic) NSDictionary *updatedHeaders; // @synthesize updatedHeaders=_updatedHeaders;
@property(retain, nonatomic) AMSDialogResult *dialogResult; // @synthesize dialogResult=_dialogResult;
@property(retain, nonatomic) AMSAuthenticateResult *authenticateResult; // @synthesize authenticateResult=_authenticateResult;
@property(readonly, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long actionType; // @synthesize actionType=_actionType;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1;

@end

