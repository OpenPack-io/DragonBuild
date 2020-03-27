//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsCommandEncoder.h>

#import <MetalTools/MTLFragmentRenderCommandEncoder-Protocol.h>

@interface MTLToolsFragmentRenderCommandEncoder : MTLToolsCommandEncoder <MTLFragmentRenderCommandEncoder>
{
}

- (void)setFragmentTexture:(id)arg1 atTextureIndex:(NSUInteger)arg2 samplerState:(id)arg3 atSamplerIndex:(NSUInteger)arg4;
- (void)drawTrianglesWithPositions:(const float )arg1 vertexCount:(NSUInteger)arg2 vertexVaryings:(const float )arg3 varyingCountPerVertex:(NSUInteger)arg4;
- (void)drawTrianglesWithPositions:(const float )arg1 vertexCount:(NSUInteger)arg2 vertexVaryings:(const float )arg3 varyingCountPerVertex:(NSUInteger)arg4 triangleIndices:(const char )arg5 triangleCount:(NSUInteger)arg6;
- (void)drawTrianglesWithPositions:(const float )arg1 vertexCount:(NSUInteger)arg2 triangleIndices:(const char )arg3 triangleCount:(NSUInteger)arg4;
- (void)setStencilStoreActionOptions:(NSUInteger)arg1;
- (void)setDepthStoreActionOptions:(NSUInteger)arg1;
- (void)setColorStoreActionOptions:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setStencilStoreAction:(NSUInteger)arg1;
- (void)setDepthStoreAction:(NSUInteger)arg1;
- (void)setColorStoreAction:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;
- (void)setStencilReferenceValue:(unsigned int)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setFragmentSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(_NSRange)arg4;
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setFragmentSamplerStates:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setFragmentSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentTextures:(const id )arg1 withRange:(_NSRange)arg2;
- (void)setFragmentTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(_NSRange)arg3;
- (void)setFragmentBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setFragmentBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setFragmentBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setScissorRect:(CDStruct_5f3a0cd7)arg1;
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;
- (void)setRenderPipelineState:(id)arg1;
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)acceptVisitor:(id)arg1;

@end

