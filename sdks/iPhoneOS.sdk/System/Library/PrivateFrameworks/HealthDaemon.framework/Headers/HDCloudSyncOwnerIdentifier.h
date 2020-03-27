//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSUUID;

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying>
{
    NSString *_deviceIdentifier;
    NSUUID *_databaseIdentifier;
    NSString *_ownerDifferentiator;
    NSString *_ownerIdentifierString;
}

+ (id)_databaseUUIDForProfile:(id)arg1 error:(id )arg2;
+ (void)ownerIdentifierForSyncContainer:(id)arg1 profile:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *cloudKitIdentifier;
@property(readonly, nonatomic) NSString *string;
- (id)initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;

@end

