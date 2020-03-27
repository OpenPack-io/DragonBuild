//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface SCKZoneDiff : NSObject <NSCopying>
{
    NSArray *_modifiedRecords;
    NSArray *_deletedRecordIDs;
}

@property(readonly, copy, nonatomic) NSArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(readonly, copy, nonatomic) NSArray *modifiedRecords; // @synthesize modifiedRecords=_modifiedRecords;
// - (void).cxx_destruct;
- (BOOL)hasSameBaseAsDiff:(id)arg1;
- (void)applyToModifyRecordsOperation:(id)arg1;
- (id)applyToRecords:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2;

@end

