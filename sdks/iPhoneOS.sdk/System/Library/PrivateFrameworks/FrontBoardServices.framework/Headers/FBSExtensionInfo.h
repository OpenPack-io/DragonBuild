//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSBundleInfo.h>

@class NSString;

@interface FBSExtensionInfo : FBSBundleInfo
{
    NSString *_typeIdentifier;
    NSString *_extensionIdentifier;
}

@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
// - (void).cxx_destruct;
- (id)_initWithPlugInKitProxy:(id)arg1;
- (id)_initWithBundleProxy:(id)arg1 url:(id)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;

@end

