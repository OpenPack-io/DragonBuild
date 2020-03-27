//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DLabelsMeshRenderer.h>

@class TSCH3DTextureAtlas, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DLabelsAtlasMeshRenderer : TSCH3DLabelsMeshRenderer
{
    TSCH3DTextureAtlas *mAtlas;
    TSUNoCopyDictionary *mExternalAttributeVariables;
}

- (void)renderWithMeshRenderLabelInfo:(id)arg1;
- (void)flushCache;
- (void)submitResourcesWithProcessor:(id)arg1;
- (void)p_submitExternalAttributesForIndex:(NSUInteger)arg1 processor:(id)arg2;
- (id)p_resourceForExternalLabelAttribute:(id)arg1 index:(NSUInteger)arg2 createIfAbsent:(BOOL)arg3;
- (NSUInteger)p_indexForExternalAttribute:(id)arg1;
- (id)p_texcoordResourceAtIndex:(NSUInteger)arg1 createIfAbsent:(BOOL)arg2;
- (id)p_vertexResourceAtIndex:(NSUInteger)arg1 createIfAbsent:(BOOL)arg2;
- (NSUInteger)p_resourceCount;
- (id)p_resourceAtIndex:(NSUInteger)arg1 childIndex:(NSUInteger)arg2 dimension:(NSUInteger)arg3 createIfAbsent:(BOOL)arg4;
- (void)beginResources:(id)arg1 samples:(float)arg2;
- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)dealloc;
- (id)init;

@end

