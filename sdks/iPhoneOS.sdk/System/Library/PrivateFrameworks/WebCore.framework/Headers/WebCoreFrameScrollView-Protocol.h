//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol WebCoreFrameScrollView
- (CGPoint)scrollOrigin;
- (void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (void)scrollingModes:(unsigned char )arg1 vertical:(unsigned char )arg2;
- (void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(BOOL)arg3;
@end

