//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible>
{
    unsigned short _sessionIdentifier;
    NSString *_assetUUID;
    NSDate *_creationDate;
    long long _captureOrientation;
    long long _captureDevice;
    void _previewImageSurface;
    CGSize _videoDimensions;
}

@property(readonly, nonatomic) void previewImageSurface; // @synthesize previewImageSurface=_previewImageSurface;
@property(readonly, nonatomic) CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) long long captureOrientation; // @synthesize captureOrientation=_captureOrientation;
@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property(readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property(readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property(readonly, nonatomic) NSString *irisStillImageUUID;
@property(readonly, nonatomic) CGSize finalExpectedPixelSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSDate *captureDate;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSUInteger mediaSubtypes;
@property(readonly, nonatomic) NSUInteger mediaType;
- (void)dealloc;
- (id)initWithAssetUUID:(id)arg1 captureSession:(unsigned short)arg2 creationDate:(id)arg3 captureOrientation:(long long)arg4 captureDevice:(long long)arg5 videoDimensions:(CGSize)arg6 previewImageSurface:(void )arg7;

@end

