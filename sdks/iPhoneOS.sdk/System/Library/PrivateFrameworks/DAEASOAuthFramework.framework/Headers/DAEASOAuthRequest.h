//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DAEASOAuthRequest : NSObject
{
}

+ (id)authCodeFromURLRequest:(id)arg1;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 resource:(id)arg6;

@end

