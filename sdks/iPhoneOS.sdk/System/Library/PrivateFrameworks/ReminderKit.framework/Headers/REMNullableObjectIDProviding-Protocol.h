//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSUUID, REMObjectID;

@protocol REMNullableObjectIDProviding
+ (NSString *)cdEntityName;
+ (REMObjectID *)objectIDWithUUID:(NSUUID *)arg1;
+ (REMObjectID *)newObjectID;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@end

