//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODataURLSessionList : NSObject
{
    NSMutableArray *_urlSessions;
    NSMutableArray *_lastUsedDates;
}

// - (void).cxx_destruct;
- (void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(BOOL)arg2;
- (void)addSession:(id)arg1;
- (id)urlSessionForIdentifier:(id)arg1;
- (id)urlSessionForRequest:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (id)init;

@end

