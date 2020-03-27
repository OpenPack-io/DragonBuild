//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSTTableDataList.h>

@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList
{
    NSMutableDictionary *mNamesList;
}

- (id)newUniqueNameFromName:(id)arg1 preserveSeed:(BOOL)arg2;
- (id)newUniqueNameFromName:(id)arg1;
- (void)p_setupNamesList;
- (id)allNumberKeys;
- (unsigned int)maxKey;
- (long long)count;
- (id)customFormatWrapperForKey:(unsigned int)arg1;
- (struct TSUCustomFormat )customFormatForKey:(unsigned int)arg1;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat )arg1 withOldKey:(unsigned int)arg2;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat )arg1 duringImport:(BOOL)arg2;
- (BOOL)supportsIDMapForType:(int)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

