//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_mangledIDString;
}

+ (id)_containerIDFromSharedContainerID:(id)arg1 validate:(BOOL)arg2;
+ (id)_ownerNameFromSharedMangledIDString:(id)arg1 validate:(BOOL)arg2;
+ (id)_containerIDFromSharedMangledIDString:(id)arg1 validate:(BOOL)arg2;
+ (id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(BOOL)arg3;
+ (id)_privateUnmangledContainerID:(id)arg1 validate:(BOOL)arg2;
+ (id)_privateMangledContainerID:(id)arg1 validate:(BOOL)arg2;
+ (id)_mangledIDStringFromZoneName:(id)arg1 ownerName:(id)arg2 validate:(BOOL)arg3;
+ (BOOL)validateMangledIDString:(id)arg1;
+ (BOOL)validateOwnerName:(id)arg1;
+ (BOOL)validateContainerID:(id)arg1;
+ (id)sideCarMangledID;
+ (id)documentsMangledID;
+ (id)desktopMangledID;
+ (BOOL)supportsSecureCoding;
+ (id)cloudDocsMangledID;
@property(readonly, nonatomic) NSString *mangledIDString; // @synthesize mangledIDString=_mangledIDString;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *aliasTargetContainerString;
@property(readonly, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) NSString *appLibraryOrZoneName;
@property(readonly, nonatomic) BOOL isDocumentsMangledID;
@property(readonly, nonatomic) BOOL isDesktopMangledID;
@property(readonly, nonatomic) BOOL isBRTestMangledID;
@property(readonly, nonatomic) BOOL isPassbookMangledID;
@property(readonly, nonatomic) BOOL isCloudDocsMangledID;
@property(readonly, nonatomic) BOOL isPrivate;
@property(readonly, nonatomic) BOOL isShared;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMangledID:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAliasTargetContainerString:(id)arg1;
- (id)initWithMangledString:(id)arg1;
- (id)initWithAppLibraryName:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)initWithRecordZoneID:(id)arg1;

@end

