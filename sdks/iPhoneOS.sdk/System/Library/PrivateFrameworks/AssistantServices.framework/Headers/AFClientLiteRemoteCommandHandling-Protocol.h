//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SABaseCommand;

@protocol AFClientLiteRemoteCommandHandling
- (oneway void)handleRemoteCommand:(SABaseCommand *)arg1 afterCurrentRequest:(BOOL)arg2 isOneWay:(BOOL)arg3 completion:(void (^)(BOOL, NSError *))arg4;
@end

