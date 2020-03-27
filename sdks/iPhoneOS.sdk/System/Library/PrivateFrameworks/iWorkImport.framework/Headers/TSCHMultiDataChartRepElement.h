//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, TSCHMultiDataAnimatingFrameLayer;
@protocol TSCHMultiDataElementShapeLayer;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepElement : NSObject
{
    CALayer<TSCHMultiDataElementShapeLayer> *mElementLayer;
    TSCHMultiDataAnimatingFrameLayer *mLabelLayer;
    BOOL mElementUndefined;
}

+ (id)elementWithElementLayer:(id)arg1;
@property(nonatomic) BOOL elementUndefined; // @synthesize elementUndefined=mElementUndefined;
@property(readonly, nonatomic) TSCHMultiDataAnimatingFrameLayer *labelLayer; // @synthesize labelLayer=mLabelLayer;
@property(readonly, nonatomic) CALayer<TSCHMultiDataElementShapeLayer> *elementLayer; // @synthesize elementLayer=mElementLayer;
// - (void).cxx_destruct;
- (void)addAnimationForKey:(id)arg1 values:(id)arg2 keyTimes:(id)arg3 toAnimationInfo:(id)arg4;
- (void)setOpacity:(double)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithElementLayer:(id)arg1;

@end

