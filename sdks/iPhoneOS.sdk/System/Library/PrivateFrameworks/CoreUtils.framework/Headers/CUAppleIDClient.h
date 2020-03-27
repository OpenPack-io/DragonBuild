//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface CUAppleIDClient : NSObject
{
    struct __SecCertificate _myCertificate;
    struct __SecIdentity _myIdentity;
    struct __SecKey _mySecretKey;
    NSData *_myValidationData;
    struct __SecCertificate _peerCertificate;
    struct __SecKey _peerPublicKey;
    BOOL _peerSignatureVerified;
    NSDictionary *_peerValidationDict;
    BOOL _peerValidated;
    int _securityLevel;
    NSString *_myAppleID;
    CUAppleIDClient *_myInfoClient;
    NSString *_peerAppleID;
    NSArray *_peerAppleIDs;
    NSData *_peerCertificateData;
    NSData *_peerValidationData;
    NSData *_myCertificateData;
    NSData *_mySecretKeyData;
    NSString *_mySecretKeyType;
}

@property(copy, nonatomic) NSString *mySecretKeyType; // @synthesize mySecretKeyType=_mySecretKeyType;
@property(copy, nonatomic) NSData *mySecretKeyData; // @synthesize mySecretKeyData=_mySecretKeyData;
@property(copy, nonatomic) NSData *myCertificateData; // @synthesize myCertificateData=_myCertificateData;
@property(copy, nonatomic) NSData *peerValidationData; // @synthesize peerValidationData=_peerValidationData;
@property(copy, nonatomic) NSData *peerCertificateData; // @synthesize peerCertificateData=_peerCertificateData;
@property(copy, nonatomic) NSArray *peerAppleIDs; // @synthesize peerAppleIDs=_peerAppleIDs;
@property(copy, nonatomic) NSString *peerAppleID; // @synthesize peerAppleID=_peerAppleID;
@property(retain, nonatomic) CUAppleIDClient *myInfoClient; // @synthesize myInfoClient=_myInfoClient;
@property(copy, nonatomic) NSString *myAppleID; // @synthesize myAppleID=_myAppleID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) int securityLevel;
- (struct __SecKey )_getPeerPublicKeyAndReturnError:(id )arg1;
- (struct __SecCertificate )_getPeerCertificateAndReturnError:(id )arg1;
- (id)copyMyValidationDataAndReturnError:(id )arg1;
- (struct __SecKey )_getMySecretKeyAndReturnError:(id )arg1;
- (struct __SecIdentity )_getMyIdentityAndReturnError:(id )arg1;
- (id)copyMyCertificateDataAndReturnError:(id )arg1;
- (struct __SecCertificate )_getMyCertificateAndReturnError:(id )arg1;
- (id)copyMyAppleIDAndReturnError:(id )arg1;
- (BOOL)verifyBytes:(const void )arg1 verifyLength:(NSUInteger)arg2 signatureBytes:(const void )arg3 signatureLength:(NSUInteger)arg4 error:(id )arg5;
- (BOOL)verifyData:(id)arg1 signature:(id)arg2 error:(id )arg3;
- (BOOL)_validatePeerHashes:(id)arg1;
- (BOOL)validatePeerWithFlags:(unsigned int)arg1 error:(id )arg2;
- (id)signBytes:(const void )arg1 length:(NSUInteger)arg2 error:(id )arg3;
- (id)signData:(id)arg1 error:(id )arg2;
- (void)dealloc;

@end

