//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKAppContextDelegate-Protocol.h>

@class IKAppContext, NSDictionary, NSString, NSURL;

@protocol IKAppContextInternalDelegate <IKAppContextDelegate>
- (BOOL)shouldForceIgnoreHTTPCacheForAppContext:(IKAppContext *)arg1;

@optional
- (void)appContext:(IKAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2 validatedJSString:(NSString *)arg3;
- (BOOL)appContext:(IKAppContext *)arg1 shouldStartWithScript:(NSString *)arg2 scriptURL:(NSURL *)arg3 loadedFromFallback:(BOOL)arg4;
@end

