//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSTMergeRegionMap : TSPObject
{
    vector_e87daf7b _mergedRects;
}

@property(readonly, nonatomic) const vector_e87daf7b mergedRects; // @synthesize mergedRects=_mergedRects;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

