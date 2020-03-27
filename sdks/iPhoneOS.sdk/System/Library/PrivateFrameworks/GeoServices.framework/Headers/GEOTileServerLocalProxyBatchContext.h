//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, GEOTileRequester;

__attribute__((visibility("hidden")))
@interface GEOTileServerLocalProxyBatchContext : NSObject
{
    GEOTileKeyList *_fullList;
    GEOTileKeyList *_interestList;
    GEOTileKeyList *_networkList;
    GEOTileKeyList *_pendingNetworkList;
    GEOTileKeyList *_cacheMissNoDataList;
    GEOTileKeyList *_cacheMissStaleDataList;
    GEOTileKeyList *_cacheMissStaleUnusableDataList;
    unsigned char _loadReason;
    GEOTileRequester *_tileRequester;
}

@property(retain, nonatomic) GEOTileRequester *tileRequester; // @synthesize tileRequester=_tileRequester;
@property(nonatomic) unsigned char loadReason; // @synthesize loadReason=_loadReason;
@property(retain, nonatomic) GEOTileKeyList *cacheMissStaleUnusableDataList; // @synthesize cacheMissStaleUnusableDataList=_cacheMissStaleUnusableDataList;
@property(retain, nonatomic) GEOTileKeyList *cacheMissStaleDataList; // @synthesize cacheMissStaleDataList=_cacheMissStaleDataList;
@property(retain, nonatomic) GEOTileKeyList *cacheMissNoDataList; // @synthesize cacheMissNoDataList=_cacheMissNoDataList;
@property(retain, nonatomic) GEOTileKeyList *pendingNetworkList; // @synthesize pendingNetworkList=_pendingNetworkList;
@property(retain, nonatomic) GEOTileKeyList *networkList; // @synthesize networkList=_networkList;
@property(retain, nonatomic) GEOTileKeyList *interestList; // @synthesize interestList=_interestList;
@property(retain, nonatomic) GEOTileKeyList *fullList; // @synthesize fullList=_fullList;
// - (void).cxx_destruct;

@end

