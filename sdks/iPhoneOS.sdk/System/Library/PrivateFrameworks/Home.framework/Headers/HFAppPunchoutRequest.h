//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL;

@interface HFAppPunchoutRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_bundleID;
    NSURL *_payloadURL;
    NSURL *_storeURL;
}

+ (id)_openApplicationService;
+ (BOOL)supportsSecureCoding;
+ (id)handleRequest:(id)arg1;
+ (BOOL)canHandleBundleID:(id)arg1;
@property(readonly, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(readonly, nonatomic) NSURL *payloadURL; // @synthesize payloadURL=_payloadURL;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 payloadURL:(id)arg3 storeURL:(id)arg4;

@end

