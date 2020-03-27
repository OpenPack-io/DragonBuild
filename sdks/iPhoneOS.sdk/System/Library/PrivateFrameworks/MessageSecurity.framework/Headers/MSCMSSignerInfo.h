//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSAlgorithmIdentifier, MSCMSMutableAttributeArray, MSCMSSignedData, NSData, NSNumber;

@interface MSCMSSignerInfo : NSObject
{
    MSAlgorithmIdentifier *_signatureAlgorithm;
    struct __SecCertificate _signerCertificate;
    MSCMSMutableAttributeArray *_protectedAttributes;
    NSData *_signature;
    MSCMSMutableAttributeArray *_unprotectedAttributes;
    NSData *_LAContext;
    struct __SecKey _signerPrivKey;
    struct SignerInfo _encodedSignerInfo;
    NSData *_signerSerialNumber;
    NSData *_signerIssuerSequence;
    NSNumber *_version;
    MSCMSSignedData *_containingSignedData;
    MSAlgorithmIdentifier *_digestAlgorithm;
    struct SignerInfo_signedAttrs _signedAttrsStruct;
    struct SignerInfo_unsignedAttrs _unsignedAttrsStruct;
}

+ (id)decodeSignerInfo:(struct SignerInfo )arg1 certificates:(id)arg2 LAContext:(id)arg3 error:(id )arg4;
@property(retain) MSAlgorithmIdentifier *digestAlgorithm; // @synthesize digestAlgorithm=_digestAlgorithm;
@property __weak MSCMSSignedData *containingSignedData; // @synthesize containingSignedData=_containingSignedData;
@property(retain) NSNumber *version; // @synthesize version=_version;
@property struct SignerInfo_unsignedAttrs unsignedAttrsStruct; // @synthesize unsignedAttrsStruct=_unsignedAttrsStruct;
@property struct SignerInfo_signedAttrs signedAttrsStruct; // @synthesize signedAttrsStruct=_signedAttrsStruct;
@property(retain) NSData *signerIssuerSequence; // @synthesize signerIssuerSequence=_signerIssuerSequence;
@property(retain) NSData *signerSerialNumber; // @synthesize signerSerialNumber=_signerSerialNumber;
@property struct SignerInfo encodedSignerInfo; // @synthesize encodedSignerInfo=_encodedSignerInfo;
@property struct __SecKey signerPrivKey; // @synthesize signerPrivKey=_signerPrivKey;
@property(retain) NSData *LAContext; // @synthesize LAContext=_LAContext;
@property(retain) MSCMSMutableAttributeArray *unprotectedAttributes; // @synthesize unprotectedAttributes=_unprotectedAttributes;
@property(retain) NSData *signature; // @synthesize signature=_signature;
@property(retain) MSCMSMutableAttributeArray *protectedAttributes; // @synthesize protectedAttributes=_protectedAttributes;
@property struct __SecCertificate signerCertificate; // @synthesize signerCertificate=_signerCertificate;
@property(retain) MSAlgorithmIdentifier *signatureAlgorithm; // @synthesize signatureAlgorithm=_signatureAlgorithm;
// - (void).cxx_destruct;
- (BOOL)encodeSignerInfo:(struct SignerInfo )arg1 error:(id )arg2;
- (BOOL)sign:(id )arg1;
- (struct __SecTrust )createTrustObjectWithPolicies:(id)arg1 error:(id )arg2;
- (id)getAttributesWithType:(id)arg1;
- (BOOL)verifyTimestamps:(id )arg1;
- (BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id )arg3;
- (BOOL)verifyCountersignatures:(id )arg1;
- (BOOL)verifySignatureAndSignerWithPolicies:(id)arg1 verifyTime:(id)arg2 error:(id )arg3;
- (id)verifyTime:(id)arg1;
- (BOOL)verifySignature:(id )arg1;
- (id)calculateSignerInfoDigest:(id )arg1;
- (BOOL)verifyMessageDigestAttribute:(id)arg1 error:(id )arg2;
- (BOOL)verifyContentTypeAttribute:(id )arg1;
- (id)calculateSignedAttributesDigest:(id )arg1;
- (void)dealloc;
- (id)initWithEmail:(id)arg1 recipientsAlgorithmCapabilities:(id)arg2 LAContext:(id)arg3 error:(id )arg4;
- (id)initWithIdentity:(struct __SecIdentity )arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id )arg3;
- (id)initWithCertificate:(struct __SecCertificate )arg1 recipientsAlgorithmCapabilities:(id)arg2 error:(id )arg3;
- (id)initWithEmail:(id)arg1 signatureAlgorithm:(id)arg2 LAContext:(id)arg3 error:(id )arg4;
- (id)initWithIdentity:(struct __SecIdentity )arg1 signatureAlgorithm:(id)arg2 error:(id )arg3;
- (id)initWithCertificate:(struct __SecCertificate )arg1 signatureAlgorithm:(id)arg2 error:(id )arg3;
- (id)initWithEmail:(id)arg1 LAContext:(id)arg2 error:(id )arg3;
- (id)initWithIdentity:(struct __SecIdentity )arg1 error:(id )arg2;
- (id)initWithCertificate:(struct __SecCertificate )arg1 error:(id )arg2;

@end

