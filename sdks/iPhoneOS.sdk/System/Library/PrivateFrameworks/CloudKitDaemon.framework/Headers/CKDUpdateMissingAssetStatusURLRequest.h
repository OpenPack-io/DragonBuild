//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSArray;

__attribute__((visibility("hidden")))
@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest
{
    BOOL _recovered;
    BOOL _isPackage;
    CKRecordID *_repairRecordID;
    NSArray *_assetSizes;
    NSArray *_assetPutReceipts;
}

@property(retain, nonatomic) NSArray *assetPutReceipts; // @synthesize assetPutReceipts=_assetPutReceipts;
@property(retain, nonatomic) NSArray *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(nonatomic) BOOL isPackage; // @synthesize isPackage=_isPackage;
@property(nonatomic) BOOL recovered; // @synthesize recovered=_recovered;
@property(copy, nonatomic) CKRecordID *repairRecordID; // @synthesize repairRecordID=_repairRecordID;
// - (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithRepairRecordID:(id)arg1 recovered:(BOOL)arg2 package:(BOOL)arg3 sizes:(id)arg4 putReceipts:(id)arg5;
- (id)initWithRecoveredPackageRepairRecordID:(id)arg1 sizes:(id)arg2 putReceipts:(id)arg3;
- (id)initWithRecoveredAssetRepairRecordID:(id)arg1 size:(NSUInteger)arg2 putReceipt:(id)arg3;
- (id)initWithUnrecoveredRepairRecordID:(id)arg1;

@end

