//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, PXGTextureProvider;
@protocol NSCopying;

@protocol PXGTextureProviderDelegate
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(PXGTextureProvider *)arg1;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(PXGTextureProvider *)arg1;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePayload:(id <NSCopying>)arg2 forRequestID:(int)arg3;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvidePixelBuffer:(struct __CVBuffer )arg2 orientationTransform:(CGAffineTransform)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideImageData:(NSData *)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(NSUInteger)arg4 contentsRect:(CGRect)arg5 forRequestID:(int)arg6;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideCGImage:(CGImage )arg2 orientation:(unsigned int)arg3 forRequestID:(int)arg4;
- (void)textureProvider:(PXGTextureProvider *)arg1 didProvideNothingForRequestID:(int)arg2;
@end

