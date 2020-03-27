//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASDApp, NSPredicate, NSUUID;

@protocol ASDAppLibraryServiceProtocol
- (void)uninstallApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)launchApp:(ASDApp *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(long long))arg3;
- (void)launchApp:(ASDApp *)arg1 withReplyHandler:(void (^)(long long))arg2;
- (void)launchApp:(ASDApp *)arg1 extensionType:(long long)arg2 withReplyHandler:(void (^)(long long))arg3;
- (void)resumeApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)pauseApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)cancelApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)cancelApp:(ASDApp *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)executeQueryWithPredicate:(NSPredicate *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)executeQueryWithPredicate:(NSPredicate *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end

