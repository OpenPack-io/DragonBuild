//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/ENCypher-Protocol.h>

@class IDSDeviceIdentity, IDSMPConversationGroup, NSArray, NSString;

@interface IDSConversationGroupCypher : NSObject <ENCypher>
{
    IDSMPConversationGroup *_conversationGroup;
    NSArray *_participants;
    IDSDeviceIdentity *_deviceIdentity;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) IDSDeviceIdentity *deviceIdentity; // @synthesize deviceIdentity=_deviceIdentity;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) IDSMPConversationGroup *conversationGroup; // @synthesize conversationGroup=_conversationGroup;
// - (void).cxx_destruct;
- (id)_memberList;
- (id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id )arg5;
- (id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id )arg3 error:(id )arg4;
- (id)initWithConversationGroup:(id)arg1 deviceIdentity:(id)arg2 participants:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;

@end

