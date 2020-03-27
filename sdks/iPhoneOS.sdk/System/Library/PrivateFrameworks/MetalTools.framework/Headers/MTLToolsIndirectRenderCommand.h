//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLIndirectRenderCommandSPI-Protocol.h>

@interface MTLToolsIndirectRenderCommand : MTLToolsObject <MTLIndirectRenderCommandSPI>
{
}

- (void)setFragmentBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setVertexBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void )getVertexBufferAtIndex:(NSUInteger)arg1;
- (void )getFragmentBufferAtIndex:(NSUInteger)arg1;
- (NSUInteger)getCommandType;
- (id)getTessellationFactorArguments;
- (id)drawPatchesArguments;
- (id)drawIndexedPatchesArguments;
- (id)drawIndexedArguments;
- (id)drawArguments;
- (NSUInteger)getPipelineStateUniqueIdentifier;
- (void)reset;
- (void)drawIndexedPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(NSUInteger)arg7 instanceCount:(NSUInteger)arg8 baseInstance:(NSUInteger)arg9 tessellationFactorBuffer:(id)arg10 tessellationFactorBufferOffset:(NSUInteger)arg11 tessellationFactorBufferInstanceStride:(NSUInteger)arg12;
- (void)drawPatches:(NSUInteger)arg1 patchStart:(NSUInteger)arg2 patchCount:(NSUInteger)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseInstance:(NSUInteger)arg7 tessellationFactorBuffer:(id)arg8 tessellationFactorBufferOffset:(NSUInteger)arg9 tessellationFactorBufferInstanceStride:(NSUInteger)arg10;
- (void)setRenderPipelineState:(id)arg1;
- (void)drawIndexedPrimitives:(NSUInteger)arg1 indexCount:(NSUInteger)arg2 indexType:(NSUInteger)arg3 indexBuffer:(id)arg4 indexBufferOffset:(NSUInteger)arg5 instanceCount:(NSUInteger)arg6 baseVertex:(long long)arg7 baseInstance:(NSUInteger)arg8;
- (void)drawPrimitives:(NSUInteger)arg1 vertexStart:(NSUInteger)arg2 vertexCount:(NSUInteger)arg3 instanceCount:(NSUInteger)arg4 baseInstance:(NSUInteger)arg5;
- (void)acceptVisitor:(id)arg1;

@end

