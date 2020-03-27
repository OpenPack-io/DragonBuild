//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase
{
    NSNumber *_statusPasswordExists;
    NSNumber *_statusChangePending;
    NSNumber *_statusAllowOroms;
}

+ (id)buildRequiredOnly;
+ (id)buildWithPasswordExists:(id)arg1 withChangePending:(id)arg2 withAllowOroms:(id)arg3;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSNumber *statusAllowOroms; // @synthesize statusAllowOroms=_statusAllowOroms;
@property(copy, nonatomic) NSNumber *statusChangePending; // @synthesize statusChangePending=_statusChangePending;
@property(copy, nonatomic) NSNumber *statusPasswordExists; // @synthesize statusPasswordExists=_statusPasswordExists;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

