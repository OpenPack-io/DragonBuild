//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder
{
    unsigned int _unknownStoreActions;
    MTLRenderPassDescriptor *_descriptor;
}

@property(readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)description;
- (id)formattedDescription:(NSUInteger)arg1;
- (void)endEncoding;
- (void)setStencilStoreActionOptions:(NSUInteger)arg1;
- (void)setDepthStoreActionOptions:(NSUInteger)arg1;
- (void)setColorStoreActionOptions:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setStencilStoreAction:(NSUInteger)arg1;
- (void)setDepthStoreAction:(NSUInteger)arg1;
- (void)setColorStoreAction:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 )arg1 capacity:(NSUInteger)arg2;
- (void)dealloc;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;

@end

