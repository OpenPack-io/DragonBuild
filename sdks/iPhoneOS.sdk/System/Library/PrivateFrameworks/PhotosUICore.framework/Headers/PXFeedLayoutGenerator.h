//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXFeedLayoutGeneratorScanState;

@interface PXFeedLayoutGenerator : NSObject
{
    long long _cacheTailLocation;
    long long _cacheHeadLocation;
    struct PXTileInfo _cachedTileInfo[20];
    id _cachedBatchID[20];
    BOOL _scannedBatchHasCaption;
    BOOL _shouldStop;
    long long _tileCount;
    id /* CDUnknownBlockType */ _tileImageSizeBlock;
    id /* CDUnknownBlockType */ _tileMinimumSizeBlock;
    id /* CDUnknownBlockType */ _tileHasCaptionBlock;
    id /* CDUnknownBlockType */ _tileCaptionSizeBlock;
    id /* CDUnknownBlockType */ _tileHasLikesBlock;
    id /* CDUnknownBlockType */ _tileLikesSizeBlock;
    id /* CDUnknownBlockType */ _tileCommentCountBlock;
    id /* CDUnknownBlockType */ _tileCommentSizeBlock;
    id /* CDUnknownBlockType */ _tileBatchIDBlock;
    long long _numberOfMagneticGuidelines;
    double _roundingScale;
    id /* CDUnknownBlockType */ _parsedFrameBlock;
    long long _scanLocation;
    id _scannedBatchID;
    long long _scanSpecialSequenceCount;
    CGSize _interTileSpacing;
    CGSize _noCaptionSpacing;
    UIEdgeInsets _captionPadding;
}

@property(nonatomic) BOOL shouldStop; // @synthesize shouldStop=_shouldStop;
@property(nonatomic) long long scanSpecialSequenceCount; // @synthesize scanSpecialSequenceCount=_scanSpecialSequenceCount;
@property(nonatomic) BOOL scannedBatchHasCaption; // @synthesize scannedBatchHasCaption=_scannedBatchHasCaption;
@property(retain, nonatomic) id scannedBatchID; // @synthesize scannedBatchID=_scannedBatchID;
@property(nonatomic) long long scanLocation; // @synthesize scanLocation=_scanLocation;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedFrameBlock; // @synthesize parsedFrameBlock=_parsedFrameBlock;
@property(nonatomic) double roundingScale; // @synthesize roundingScale=_roundingScale;
@property(nonatomic) long long numberOfMagneticGuidelines; // @synthesize numberOfMagneticGuidelines=_numberOfMagneticGuidelines;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileBatchIDBlock; // @synthesize tileBatchIDBlock=_tileBatchIDBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileCommentSizeBlock; // @synthesize tileCommentSizeBlock=_tileCommentSizeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileCommentCountBlock; // @synthesize tileCommentCountBlock=_tileCommentCountBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileLikesSizeBlock; // @synthesize tileLikesSizeBlock=_tileLikesSizeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileHasLikesBlock; // @synthesize tileHasLikesBlock=_tileHasLikesBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileCaptionSizeBlock; // @synthesize tileCaptionSizeBlock=_tileCaptionSizeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileHasCaptionBlock; // @synthesize tileHasCaptionBlock=_tileHasCaptionBlock;
@property(nonatomic) CGSize noCaptionSpacing; // @synthesize noCaptionSpacing=_noCaptionSpacing;
@property(nonatomic) UIEdgeInsets captionPadding; // @synthesize captionPadding=_captionPadding;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileMinimumSizeBlock; // @synthesize tileMinimumSizeBlock=_tileMinimumSizeBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ tileImageSizeBlock; // @synthesize tileImageSizeBlock=_tileImageSizeBlock;
@property(nonatomic) CGSize interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) long long tileCount; // @synthesize tileCount=_tileCount;
// - (void).cxx_destruct;
- (double)valueByRounding:(double)arg1 usingMagneticGuidelines:(BOOL)arg2;
- (void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forCommentAtIndex:(long long)arg3;
- (void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forLikesAtIndex:(long long)arg3;
- (void)parsedFrame:(CGRect)arg1 type:(long long)arg2 forTileAtIndex:(long long)arg3;
- (CGSize)commentSizeForTileAtIndex:(long long)arg1 commentIndex:(long long)arg2 proposedSize:(CGSize)arg3;
- (CGSize)likesSizeForTileAtIndex:(long long)arg1 proposedSize:(CGSize)arg2;
- (CGSize)captionSizeForTileAtIndex:(long long)arg1 proposedSize:(CGSize)arg2;
- (BOOL)scanTile:(struct PXTileInfo )arg1 ofType:(long long)arg2;
- (BOOL)scanTile:(struct PXTileInfo )arg1 type:(long long )arg2;
- (BOOL)scanTileWithSquareImage:(struct PXTileInfo )arg1;
- (BOOL)scanTileWithHorizontalPanorama:(struct PXTileInfo )arg1;
- (BOOL)scanTileWithLandscapeImage:(struct PXTileInfo )arg1;
- (BOOL)scanTileWithPortraitImage:(struct PXTileInfo )arg1;
- (BOOL)scanAnyTile:(struct PXTileInfo )arg1;
- (BOOL)scanTile:(struct PXTileInfo )arg1 passingTest:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) BOOL isAtEnd;
@property(nonatomic) PXFeedLayoutGeneratorScanState *scanState;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (void)willParseTiles;
- (void)parseTiles;
- (void)enumerateFramesWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)init;

@end

