//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CHVisualizationManager;

@protocol CHVisualizationManagerDelegate <NSObject>
- (void)visualizationManagerNeedsDisplay:(CHVisualizationManager *)arg1;
- (void)visualizationManager:(CHVisualizationManager *)arg1 needsDisplayInRect:(CGRect)arg2;

@optional
- (void)visualizationManagerDidUpdateSessionStatus:(CHVisualizationManager *)arg1;
@end

