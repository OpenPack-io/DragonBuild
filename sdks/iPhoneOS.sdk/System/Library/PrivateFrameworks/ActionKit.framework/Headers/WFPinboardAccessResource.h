//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@interface WFPinboardAccessResource : WFAccessResource
{
}

+ (id)pinboardToken;
+ (id)pinboardPassword;
+ (id)pinboardUsername;
- (void)logOut;
- (BOOL)canLogOut;
- (id)username;
- (id)resourceName;
- (NSUInteger)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)icon;
- (id)name;

@end

