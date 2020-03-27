//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFFetchSecurityInformationRequest : DMFTaskRequest
{
    NSArray *_infoKeys;
}

+ (id)watchOSSecurityInfoKeys;
+ (id)tvOSSecurityInfoKeys;
+ (id)macOSSecurityInfoKeys;
+ (id)iOSSecurityInfoKeys;
+ (id)allPlatformSecurityInfoKeys;
+ (id)currentPlatformSecurityInfoKeys;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSArray *infoKeys; // @synthesize infoKeys=_infoKeys;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

