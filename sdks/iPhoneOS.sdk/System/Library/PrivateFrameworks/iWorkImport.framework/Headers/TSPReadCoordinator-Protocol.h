//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, TSPComponent;
@protocol OS_dispatch_queue;

@protocol TSPReadCoordinator <NSObject>
@property(readonly, nonatomic) BOOL isReadingFromDocument;
- (void)readComponent:(TSPComponent *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(BOOL, TSPObject *, NSMapTable *, NSError *))arg3;
- (void)readRootObjectWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(BOOL, TSPObject *, NSMapTable *, NSError *))arg2;
- (BOOL)endReading;

@optional
@property(readonly, nonatomic) long long archiveValidationMode;
- (void)validateArchiveWithCompletion:(void (^)(NSError *))arg1;
@end

