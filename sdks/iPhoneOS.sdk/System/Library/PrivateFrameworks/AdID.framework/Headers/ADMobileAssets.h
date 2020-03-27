//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADBackgroundTaskRequest, NSArray, NSDate, NSNumber, NSString, NSURL;
@protocol OS_dispatch_queue_global;

@interface ADMobileAssets : NSObject
{
    BOOL _operationInProgress;
    NSString *_assetType;
    NSString *_version;
    NSURL *_assetPath;
    NSNumber *_maxQueryElements;
    NSArray *_lookbackPeriods;
    ADBackgroundTaskRequest *_task;
    NSDate *_creationTime;
    NSObject<OS_dispatch_queue_global> *_assetQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue_global> *assetQueue; // @synthesize assetQueue=_assetQueue;
@property BOOL operationInProgress; // @synthesize operationInProgress=_operationInProgress;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(retain, nonatomic) ADBackgroundTaskRequest *task; // @synthesize task=_task;
@property(retain, nonatomic) NSArray *lookbackPeriods; // @synthesize lookbackPeriods=_lookbackPeriods;
@property(retain, nonatomic) NSNumber *maxQueryElements; // @synthesize maxQueryElements=_maxQueryElements;
@property(retain, nonatomic) NSURL *assetPath; // @synthesize assetPath=_assetPath;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
// - (void).cxx_destruct;
- (void)findProperAsset:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)doneWithOperations;
- (BOOL)shouldStartOperations;
- (void)createAppUsageVectors:(id /* CDUnknownBlockType */)arg1;
- (void)queryAssetData:(id /* CDUnknownBlockType */)arg1;
- (void)downloadAssetCatalog:(id /* CDUnknownBlockType */)arg1;
- (id)initWithAsset:(id)arg1 andTask:(id)arg2;

@end

