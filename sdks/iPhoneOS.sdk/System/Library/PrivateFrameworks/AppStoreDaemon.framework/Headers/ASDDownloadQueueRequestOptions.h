//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class ASDJobManifest;

@interface ASDDownloadQueueRequestOptions : ASDRequestOptions
{
    ASDJobManifest *_manifest;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) ASDJobManifest *manifest; // @synthesize manifest=_manifest;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithManifest:(id)arg1;

@end

