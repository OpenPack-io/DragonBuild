//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, StockChartDisplayMode, StockGraphImageSet;
@protocol GraphRenderOperationDelegate;

@interface GraphRenderOperation : NSObject
{
    BOOL _cancelled;
    BOOL _roundLineCaps;
    unsigned int _volumeCount;
    CGPoint _points;
    NSArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    CDStruct_b5bb7d6f _volumeBars;
    double _volumeBarWidth;
    NSUInteger _maxVolume;
    id <GraphRenderOperationDelegate> _delegate;
    StockGraphImageSet *_graphImageSet;
    StockChartDisplayMode *_displayMode;
    CGSize _graphSize;
    CGSize _volumeGraphSize;
    UIEdgeInsets _graphInsets;
}

@property(retain, nonatomic) StockChartDisplayMode *displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) BOOL roundLineCaps; // @synthesize roundLineCaps=_roundLineCaps;
@property(retain, nonatomic) StockGraphImageSet *graphImageSet; // @synthesize graphImageSet=_graphImageSet;
@property(nonatomic) UIEdgeInsets graphInsets; // @synthesize graphInsets=_graphInsets;
@property(nonatomic) CGSize volumeGraphSize; // @synthesize volumeGraphSize=_volumeGraphSize;
@property(nonatomic) CGSize graphSize; // @synthesize graphSize=_graphSize;
@property(nonatomic) __weak id <GraphRenderOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int volumeCount; // @synthesize volumeCount=_volumeCount;
@property(nonatomic) NSUInteger maxVolume; // @synthesize maxVolume=_maxVolume;
@property(nonatomic) double volumeBarWidth; // @synthesize volumeBarWidth=_volumeBarWidth;
@property(nonatomic) CDStruct_b5bb7d6f volumeBars; // @synthesize volumeBars=_volumeBars;
@property(retain, nonatomic) NSArray *dottedLinePositionsForStyleOnly; // @synthesize dottedLinePositionsForStyleOnly=_dottedLinePositionsForStyleOnly;
@property(retain, nonatomic) NSArray *dottedLinePositions; // @synthesize dottedLinePositions=_dottedLinePositions;
@property(retain, nonatomic) NSArray *linePointCounts; // @synthesize linePointCounts=_linePointCounts;
@property(nonatomic) CGPoint points; // @synthesize points=_points;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
// - (void).cxx_destruct;
- (void)renderVolumeGraph;
- (void)renderLineGraph;
- (void)renderGraphLineInContext:(CGContext )arg1 withColor:(id)arg2 offset:(CGPoint)arg3;
- (CGSize)lineGraphSize;
- (void)render;
- (void)cancel;

@end

