//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _requiresAuthentication;
    NSString *_message;
    NSData *_encryptionPublicKeyData;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(copy, nonatomic) NSData *encryptionPublicKeyData; // @synthesize encryptionPublicKeyData=_encryptionPublicKeyData;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqualToPKNFCPayload:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithNFCDictionary:(id)arg1;

@end

