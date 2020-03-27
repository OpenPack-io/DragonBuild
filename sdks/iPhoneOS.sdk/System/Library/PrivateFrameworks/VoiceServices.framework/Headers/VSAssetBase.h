//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface VSAssetBase : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSNumber *_compatibilityVersion;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(copy, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(copy, nonatomic) NSNumber *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

