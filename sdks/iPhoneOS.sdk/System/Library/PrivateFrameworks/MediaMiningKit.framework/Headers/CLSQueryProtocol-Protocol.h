//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol CLSQueryProtocol <NSObject>
- (void)prepareForRetry;
- (BOOL)isCancelled;
- (void)cancel;
- (void)submitWithHandler:(void (^)(id <CLSQueryProtocol>, NSError *))arg1;
@end

