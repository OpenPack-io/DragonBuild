//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;
@protocol TVObservable;

@protocol TVObserving <NSObject>
- (void)handleEvent:(NSString *)arg1 sender:(id <TVObservable>)arg2 withUserInfo:(NSDictionary *)arg3;
@end

