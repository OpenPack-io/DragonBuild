//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotItem : NSObject
{
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;
// - (void).cxx_destruct;
- (id)description;
- (id)itemIndexes;
- (void)setType:(int)arg1;
- (int)type;
- (void)setRepeatedItemCounts:(unsigned int)arg1;
- (unsigned int)repeatedItemCounts;
- (id)init;

@end

