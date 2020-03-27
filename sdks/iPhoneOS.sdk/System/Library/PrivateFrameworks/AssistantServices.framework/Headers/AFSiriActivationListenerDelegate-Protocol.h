//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFRequestInfo, AFSiriActivationListener, INIntent, NSDictionary, NSString;

@protocol AFSiriActivationListenerDelegate <NSObject>
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 deactivateForReason:(long long)arg2 options:(NSUInteger)arg3 analyticsContext:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 activateWithRequestInfo:(AFRequestInfo *)arg2 completion:(void (^)(NSError *))arg3;
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 prewarmWithRequestInfo:(AFRequestInfo *)arg2 completion:(void (^)(NSError *))arg3;

@optional
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 handleIntent:(INIntent *)arg2 inBackgroundAppWithBundleId:(NSString *)arg3 reply:(void (^)(INIntentResponse *, NSError *))arg4;
@end

