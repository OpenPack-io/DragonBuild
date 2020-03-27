//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SXDataRecordStore : NSObject
{
    NSArray *_descriptors;
    NSArray *_records;
}

@property(readonly, nonatomic) NSArray *records; // @synthesize records=_records;
@property(readonly, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
// - (void).cxx_destruct;
- (id)recordsUsingSortDescriptors:(id)arg1;
- (NSUInteger)numberOfRecords;
- (id)initWithRecords:(id)arg1 andDescriptors:(id)arg2;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;

@end

