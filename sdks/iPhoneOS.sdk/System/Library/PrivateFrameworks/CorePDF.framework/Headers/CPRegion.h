//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPChunk.h>

__attribute__((visibility("hidden")))
@interface CPRegion : CPChunk
{
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (id)link;
- (void)setLink:(id)arg1;
- (void)setOrder:(int)arg1;
- (int)order;
- (void)setNextRegion:(id)arg1;
- (id)nextRegion;
- (BOOL)isIndivisible;
- (BOOL)isRotated;
- (BOOL)isZone;
- (void)setIsCompoundShape:(BOOL)arg1;
- (BOOL)isCompoundShape;
- (BOOL)isGraphicalRegion;
- (void)setIsTextRegion:(BOOL)arg1;
- (BOOL)isBodyZone;
- (BOOL)isTableCellRegion;
- (BOOL)isRowRegion;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isShapeRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isImageRegion;
- (BOOL)isBoxRegion;
- (BOOL)isTextRegion;
- (void)accept:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;

@end

