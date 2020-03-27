//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, TSUZipWriterEntry;
@protocol OS_dispatch_data, OS_dispatch_queue, OS_dispatch_semaphore, TSURandomWriteChannel;

__attribute__((visibility("hidden")))
@interface TSUZipWriter : NSObject
{
    NSUInteger _options;
    NSObject<OS_dispatch_queue> *_channelQueue;
    id <TSURandomWriteChannel> _writeChannel;
    NSObject<OS_dispatch_semaphore> *_writeChannelCompletionSemaphore;
    NSMutableArray *_entries;
    NSArray *_sortedEntries;
    NSMutableDictionary *_entriesMap;
    TSUZipWriterEntry *_currentEntry;
    BOOL _isClosed;
    BOOL _calculateSize;
    BOOL _force32BitSize;
    BOOL _calculateCRC;
    NSUInteger _sizeToMatch;
    unsigned int _CRCToMatch;
    NSDate *_lastModificationDateIfSizeAndCRCMatches;
    NSDate *_newEntryLastModificationDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    NSUInteger _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
}

// - (void).cxx_destruct;
- (void)truncateToOffsetImpl:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)truncateToOffset:(long long)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)truncateToNumberOfEntriesImpl:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)truncateToNumberOfEntries:(NSUInteger)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)entryWithName:(id)arg1;
@property(readonly) BOOL isClosed;
@property(readonly) NSArray *sortedEntries;
- (id)sortedEntriesImpl;
- (void)enumerateEntriesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)handleWriteError:(id)arg1;
@property(readonly) NSUInteger archiveLength;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)writeData:(id)arg1;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(NSUInteger)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(NSUInteger)arg3;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)writeCentralDirectory;
- (void)closeWithQueue:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)addBarrier:(id /* CDUnknownBlockType */)arg1;
- (void)setEntryInsertionOffsetImpl:(long long)arg1;
- (void)setEntryInsertionOffset:(long long)arg1;
- (void)addExistingEntryImpl:(id)arg1;
- (void)addExistingEntry:(id)arg1;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 fromReadChannel:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(NSUInteger)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 writeHandler:(id /* CDUnknownBlockType */)arg7;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(NSUInteger)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 completion:(id /* CDUnknownBlockType */)arg7;
- (void)finishEntry;
- (void)flushCurrentEntryWithQueue:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)flushEntryData;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)addData:(id)arg1;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(NSUInteger)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(BOOL)arg2 lastModificationDate:(id)arg3 size:(NSUInteger)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg6;
- (id)p_writeChannel;
- (NSUInteger)entriesCountImpl;
@property(readonly) NSUInteger entriesCount;
- (id)initWithOptions:(NSUInteger)arg1;
- (id)init;

@end

