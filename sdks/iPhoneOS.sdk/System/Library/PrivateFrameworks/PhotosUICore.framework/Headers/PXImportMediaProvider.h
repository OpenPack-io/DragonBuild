//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMediaProvider.h>

@class NSMutableDictionary, PXImportImageCache, PXLoadingStatusManager;

@interface PXImportMediaProvider : PXMediaProvider
{
    BOOL _hasBeenIdle;
    unsigned short _thumbnailImageFormat;
    PXLoadingStatusManager *loadingStatusManager;
    long long _nextRequestID;
    NSMutableDictionary *_thumbnailRequestsByID;
    PXImportImageCache *_imageCache;
    long long _imageRequestsInflight;
    long long _lastRequestsInflight;
    NSMutableDictionary *_extensionPlaceholderCachesByRequestSize;
}

+ (void)unregisterPXImportMediaProviderNotificationsReceiver:(NSObject )arg1;
+ (void)registerPXImportMediaProviderNotificationsReceiver:(NSObject )arg1;
@property(nonatomic) BOOL hasBeenIdle; // @synthesize hasBeenIdle=_hasBeenIdle;
@property(retain, nonatomic) NSMutableDictionary *extensionPlaceholderCachesByRequestSize; // @synthesize extensionPlaceholderCachesByRequestSize=_extensionPlaceholderCachesByRequestSize;
@property(nonatomic) long long lastRequestsInflight; // @synthesize lastRequestsInflight=_lastRequestsInflight;
@property(nonatomic) long long imageRequestsInflight; // @synthesize imageRequestsInflight=_imageRequestsInflight;
@property(retain, nonatomic) PXImportImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSMutableDictionary *thumbnailRequestsByID; // @synthesize thumbnailRequestsByID=_thumbnailRequestsByID;
@property(readonly, nonatomic) unsigned short thumbnailImageFormat; // @synthesize thumbnailImageFormat=_thumbnailImageFormat;
@property(nonatomic) long long nextRequestID; // @synthesize nextRequestID=_nextRequestID;
@property(retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // @synthesize loadingStatusManager;
// - (void).cxx_destruct;
- (id)_placeholderForItem:(id)arg1 size:(NSUInteger)arg2;
@property(readonly, nonatomic) CGSize gridItemSize;
- (id)_placeholderExtensionForItem:(id)arg1;
- (id)_newPlaceholderImageForItemWithExtension:(id)arg1 size:(CGSize)arg2;
- (double)idleTimeOut;
- (void)performIdleProcessingIfNecessary;
- (id)cachedImageForModel:(id)arg1 atSize:(NSUInteger)arg2;
- (BOOL)thumbnailExistsForModel:(id)arg1;
- (BOOL)thumbnailExistsForModel:(id)arg1 atSize:(NSUInteger)arg2;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(NSUInteger)arg2 priority:(unsigned char)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (long long)imageOfSize:(NSUInteger)arg1 forModel:(id)arg2 localCacheOnly:(BOOL)arg3 priority:(unsigned char)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)cancelImageRequest:(long long)arg1;
- (void)enumerateAvailableThumbnailDataFormats:(id /* CDUnknownBlockType */)arg1;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec )arg4;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* CDUnknownBlockType */)arg3;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* CDUnknownBlockType */)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* CDUnknownBlockType */)arg3;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* CDUnknownBlockType */)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* CDUnknownBlockType */)arg5;
- (id)initWithImageFormat:(unsigned short)arg1;
- (void)sendMediaProviderThumbnailingBecameIdle;
- (void)ppt_sendMediaProviderDidProcessAsset:(id)arg1;

@end

