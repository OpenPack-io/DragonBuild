//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol MTLTextureLayout <NSObject>
@property(readonly) CDStruct_492b6082 watermark;
@property(readonly) CDStruct_14f26992 copyGranularity;
@property(readonly) NSUInteger alignment;
@property(readonly) NSUInteger size;
- (void)finalizeTextureMemory:(void )arg1;
- (void)copyFromTextureMemory:(const void )arg1 textureSlice:(NSUInteger)arg2 textureLevel:(NSUInteger)arg3 textureRegion:(CDStruct_1e3be3a8)arg4 toLinearBytes:(void )arg5 linearOffset:(NSUInteger)arg6 linearBytesPerRow:(NSUInteger)arg7 linearBytesPerImage:(NSUInteger)arg8;
- (void)copyFromLinearBytes:(const void )arg1 linearOffset:(NSUInteger)arg2 linearBytesPerRow:(NSUInteger)arg3 linearBytesPerImage:(NSUInteger)arg4 toTextureMemory:(void )arg5 textureSlice:(NSUInteger)arg6 textureLevel:(NSUInteger)arg7 textureRegion:(CDStruct_1e3be3a8)arg8;

@optional
- (void)initializeTextureMemory:(void )arg1;
@end

