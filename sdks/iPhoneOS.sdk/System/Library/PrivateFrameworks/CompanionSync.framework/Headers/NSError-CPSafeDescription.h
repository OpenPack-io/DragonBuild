//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (CPSafeDescription)
+ (id)errorWithSYError:(long long)arg1 userInfo:(id)arg2;
+ (id)errorFromSYErrorInfo:(id)arg1;
@property(readonly, nonatomic) NSString *CPSafeDescription;
- (id)initWithSYError:(long long)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic, getter=isFromRequest) BOOL fromRequest;
@property(readonly, nonatomic) NSDictionary *persistentUserInfo;
@property(readonly, nonatomic) NSDate *messageSent;
@property(readonly, nonatomic) NSString *idsIdentifier;
@property(readonly, nonatomic) unsigned short messageID;
@end

