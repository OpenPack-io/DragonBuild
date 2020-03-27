//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKCredentialRequestProtocol-Protocol.h>

@class NSString, NSUUID;

@interface AKCredentialRequest : NSObject <AKCredentialRequestProtocol>
{
    NSString *_altDSID;
    NSString *_userIdentifier;
    NSUUID *_requestIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

