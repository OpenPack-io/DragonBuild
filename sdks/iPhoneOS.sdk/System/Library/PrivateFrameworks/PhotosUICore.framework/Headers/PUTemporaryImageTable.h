//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLTemporaryImageTable.h>

@interface PUTemporaryImageTable : PLTemporaryImageTable
{
    _Atomic int _indexCounter;
}

- (int)nextCacheIndex;

@end

