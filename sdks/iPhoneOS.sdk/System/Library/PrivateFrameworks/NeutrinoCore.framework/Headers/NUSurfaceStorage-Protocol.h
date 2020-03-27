//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageStorage-Protocol.h>

@class NURegion;

@protocol NUSurfaceStorage <NUImageStorage>
- (long long)writeTextureInRegion:(NURegion *)arg1 block:(BOOL (^)(NUGLTexture *))arg2;
- (long long)readTextureInRegion:(NURegion *)arg1 block:(BOOL (^)(NUGLTexture *))arg2;
- (long long)writeSurfaceInRegion:(NURegion *)arg1 block:(BOOL (^)(NUIOSurface *))arg2;
- (long long)readSurfaceInRegion:(NURegion *)arg1 block:(BOOL (^)(NUIOSurface *))arg2;
@end

