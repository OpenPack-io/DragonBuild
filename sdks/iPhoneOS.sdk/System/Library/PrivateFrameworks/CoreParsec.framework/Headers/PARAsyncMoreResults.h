//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFMoreResults.h>

@class NSURL, NSXPCListenerEndpoint, PARSessionConfiguration;

@interface PARAsyncMoreResults : SFMoreResults
{
    NSXPCListenerEndpoint *_endpoint;
    PARSessionConfiguration *_configuration;
    double _scale;
    NSURL *_moreResultsURL;
    NSUInteger _queryId;
    NSUInteger _clientQueryId;
}

+ (BOOL)supportsSecureCoding;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(NSUInteger)arg5 clientQueryId:(NSUInteger)arg6;
+ (id)moreResults:(id)arg1 label:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(NSUInteger)arg5;
@property(readonly, nonatomic) NSUInteger clientQueryId; // @synthesize clientQueryId=_clientQueryId;
@property(readonly, nonatomic) NSUInteger queryId; // @synthesize queryId=_queryId;
@property(readonly, copy, nonatomic) NSURL *moreResultsURL; // @synthesize moreResultsURL=_moreResultsURL;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) PARSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

