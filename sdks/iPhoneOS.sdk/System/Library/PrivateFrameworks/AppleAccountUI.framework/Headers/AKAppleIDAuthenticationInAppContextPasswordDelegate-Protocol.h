//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKAppleIDAuthenticationInAppContext;

@protocol AKAppleIDAuthenticationInAppContextPasswordDelegate <NSObject>
- (void)context:(AKAppleIDAuthenticationInAppContext *)arg1 needsPasswordWithCompletion:(void (^)(NSString *, NSError *))arg2;
@end

