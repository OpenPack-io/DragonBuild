//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPQuickTypeServerProtocol-Protocol.h>

@interface PPQuickTypeServerHandler : NSObject <PPQuickTypeServerProtocol>
{
}

- (void)registerFeedback:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)hibernateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)warmUpWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(NSUInteger)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (void)quickTypeItemsWithQuery:(id)arg1 limit:(NSUInteger)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)init;

@end

