//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>


@class NSString;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    NSString *_fileProviderIdentifier;
    NSString *_itemIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
+ (id)knownFileProviderIdentifiersSoFar;
@property(readonly, copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, copy) NSString *fileProviderIdentifier; // @synthesize fileProviderIdentifier=_fileProviderIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithFileProviderIdentifier:(id)arg1 itemIdentifier:(id)arg2;

@end

