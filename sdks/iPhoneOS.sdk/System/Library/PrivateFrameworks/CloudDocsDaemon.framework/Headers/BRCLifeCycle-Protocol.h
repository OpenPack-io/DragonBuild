//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol BRCLifeCycle <NSObject>
@property(readonly, nonatomic) BOOL isCancelled;
- (void)cancel;
- (void)resume;
- (void)close;
@end

