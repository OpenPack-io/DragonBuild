//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetKeyServiceType-Protocol.h>

@class NFLazy, NFPromise;

@interface FCAssetKeyService : NSObject <FCAssetKeyServiceType>
{
    NFLazy *_session;
    NFLazy *_requestEncoder;
    NFPromise *_endpointURLPromise;
}

@property(readonly, nonatomic) NFPromise *endpointURLPromise; // @synthesize endpointURLPromise=_endpointURLPromise;
@property(readonly, nonatomic) NFLazy *requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property(readonly, nonatomic) NFLazy *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)_performHTTPRequestWithData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchWrappingKeysWithIDs:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithConfigurationManager:(id)arg1;

@end

