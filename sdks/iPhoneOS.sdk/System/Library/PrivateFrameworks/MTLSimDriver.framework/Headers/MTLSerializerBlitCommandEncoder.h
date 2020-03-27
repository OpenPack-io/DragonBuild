//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLSerializerCommandEncoder.h>

#import <MTLSimDriver/MTLBlitCommandEncoderSPI-Protocol.h>

__attribute__((visibility("hidden")))
@interface MTLSerializerBlitCommandEncoder : MTLSerializerCommandEncoder <MTLBlitCommandEncoderSPI>
{
}

- (void)resetTextureAccessCounters:(id)arg1 region:(CDStruct_caaed6bc)arg2 mipLevel:(NSUInteger)arg3 slice:(NSUInteger)arg4;
- (void)getTextureAccessCounters:(id)arg1 region:(CDStruct_caaed6bc)arg2 mipLevel:(NSUInteger)arg3 slice:(NSUInteger)arg4 resetCounters:(BOOL)arg5 countersBuffer:(id)arg6 countersBufferOffset:(NSUInteger)arg7;
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;
- (void)copyFromTexture:(id)arg1 sourceSlice:(NSUInteger)arg2 sourceLevel:(NSUInteger)arg3 toTexture:(id)arg4 destinationSlice:(NSUInteger)arg5 destinationLevel:(NSUInteger)arg6 sliceCount:(NSUInteger)arg7 levelCount:(NSUInteger)arg8;
- (NSUInteger)getType;
- (void)waitForFence:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)synchronizeTexture:(id)arg1 slice:(NSUInteger)arg2 level:(NSUInteger)arg3;
- (void)synchronizeResource:(id)arg1;
- (void)resetCommandsInBuffer:(id)arg1 withRange:(_NSRange)arg2;
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(_NSRange)arg2;
- (void)optimizeReset:(id)arg1 withRange:(_NSRange)arg2 withCommand:(unsigned int)arg3;
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(NSUInteger)arg2 level:(NSUInteger)arg3;
- (void)optimizeContentsForGPUAccess:(id)arg1;
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(NSUInteger)arg2 level:(NSUInteger)arg3;
- (void)optimizeContentsForCPUAccess:(id)arg1;
- (void)optimize:(id)arg1 slice:(NSUInteger)arg2 level:(NSUInteger)arg3 withCommand:(unsigned int)arg4;
- (void)optimize:(id)arg1 withCommand:(unsigned int)arg2;
- (void)generateMipmapsForTexture:(id)arg1;
- (void)fillBuffer:(id)arg1 range:(_NSRange)arg2 value:(unsigned char)arg3;
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(_NSRange)arg2 destination:(id)arg3 destinationIndex:(NSUInteger)arg4;
- (void)copyFromTexture:(id)arg1 sourceSlice:(NSUInteger)arg2 sourceLevel:(NSUInteger)arg3 sourceOrigin:(CDStruct_da2e99ad)arg4 sourceSize:(CDStruct_da2e99ad)arg5 toTexture:(id)arg6 destinationSlice:(NSUInteger)arg7 destinationLevel:(NSUInteger)arg8 destinationOrigin:(CDStruct_da2e99ad)arg9 options:(NSUInteger)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(NSUInteger)arg2 sourceLevel:(NSUInteger)arg3 sourceOrigin:(CDStruct_da2e99ad)arg4 sourceSize:(CDStruct_da2e99ad)arg5 toTexture:(id)arg6 destinationSlice:(NSUInteger)arg7 destinationLevel:(NSUInteger)arg8 destinationOrigin:(CDStruct_da2e99ad)arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(NSUInteger)arg2 sourceLevel:(NSUInteger)arg3 sourceOrigin:(CDStruct_da2e99ad)arg4 sourceSize:(CDStruct_da2e99ad)arg5 toBuffer:(id)arg6 destinationOffset:(NSUInteger)arg7 destinationBytesPerRow:(NSUInteger)arg8 destinationBytesPerImage:(NSUInteger)arg9 options:(NSUInteger)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(NSUInteger)arg2 sourceLevel:(NSUInteger)arg3 sourceOrigin:(CDStruct_da2e99ad)arg4 sourceSize:(CDStruct_da2e99ad)arg5 toBuffer:(id)arg6 destinationOffset:(NSUInteger)arg7 destinationBytesPerRow:(NSUInteger)arg8 destinationBytesPerImage:(NSUInteger)arg9;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(NSUInteger)arg2 toBuffer:(id)arg3 destinationOffset:(NSUInteger)arg4 size:(NSUInteger)arg5;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(NSUInteger)arg2 sourceBytesPerRow:(NSUInteger)arg3 sourceBytesPerImage:(NSUInteger)arg4 sourceSize:(CDStruct_da2e99ad)arg5 toTexture:(id)arg6 destinationSlice:(NSUInteger)arg7 destinationLevel:(NSUInteger)arg8 destinationOrigin:(CDStruct_da2e99ad)arg9 options:(NSUInteger)arg10;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(NSUInteger)arg2 sourceBytesPerRow:(NSUInteger)arg3 sourceBytesPerImage:(NSUInteger)arg4 sourceSize:(CDStruct_da2e99ad)arg5 toTexture:(id)arg6 destinationSlice:(NSUInteger)arg7 destinationLevel:(NSUInteger)arg8 destinationOrigin:(CDStruct_da2e99ad)arg9;
- (void)beginSegment:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;

@end

