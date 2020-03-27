//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDAppMetadata-Protocol.h>

@class MIStoreMetadata, NSData, NSNumber, NSString, NSURL;

@interface ASDAppReviewAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>
{
    BOOL _beta;
    BOOL _hasMessagesExtension;
    BOOL _launchProhibited;
    NSURL *_artworkURL;
    NSString *_bundleID;
    NSNumber *_externalVersionIdentifier;
    NSNumber *_initialODRSize;
    NSNumber *_itemID;
    NSString *_itemName;
    NSURL *_messagesArtworkURL;
    NSData *_packageDPInfo;
    NSData *_packageSINF;
    NSURL *_packageURL;
    MIStoreMetadata *_storeMetadata;
    NSString *_variantID;
    NSString *_vendorName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property(copy, nonatomic) MIStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
@property(copy, nonatomic) NSData *packageSINF; // @synthesize packageSINF=_packageSINF;
@property(copy, nonatomic) NSData *packageDPInfo; // @synthesize packageDPInfo=_packageDPInfo;
@property(copy, nonatomic) NSURL *messagesArtworkURL; // @synthesize messagesArtworkURL=_messagesArtworkURL;
@property(nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property(nonatomic) BOOL hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic, getter=isBeta) BOOL beta; // @synthesize beta=_beta;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) long long metadataType;
- (id)initWithStoreMetadata:(id)arg1;

@end

