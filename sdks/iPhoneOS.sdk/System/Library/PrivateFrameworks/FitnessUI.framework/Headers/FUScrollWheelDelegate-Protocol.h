//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class FUScrollWheel;

@protocol FUScrollWheelDelegate <NSObject>

@optional
- (BOOL)scrollWheelShouldBecomeFirstResponder:(FUScrollWheel *)arg1;
- (void)tappedScrollWheel:(FUScrollWheel *)arg1;
- (void)scrollWheel:(FUScrollWheel *)arg1 didChangeCurrentIndexTo:(NSUInteger)arg2;
@end

