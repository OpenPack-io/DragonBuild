//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobIdentifying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying>
{
    int _kind;
    NSUInteger _itemDBRowID;
    NSString *_etag;
}

@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) NSUInteger itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDownloadJobIdentifier:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)columnsValues;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
@property(readonly, copy) NSString *description;
- (id)jobsDescription;
- (id)initWithDBRowID:(NSUInteger)arg1 etag:(id)arg2 kind:(int)arg3;

@end

