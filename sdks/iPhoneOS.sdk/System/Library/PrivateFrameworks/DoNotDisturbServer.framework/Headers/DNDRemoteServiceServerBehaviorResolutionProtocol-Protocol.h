//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DNDClientEventDetails, DNDRequestDetails;

@protocol DNDRemoteServiceServerBehaviorResolutionProtocol <NSObject>
- (void)resolveBehaviorForEventDetails:(DNDClientEventDetails *)arg1 requestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(DNDClientEventBehavior *, NSError *))arg3;
@end

