//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData;

@interface HMFMutableHTTPRequest : HMFHTTPRequest
{
}

- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
@property(copy, nonatomic) NSData *body; // @dynamic body;
- (id)responseWithStatusCode:(long long)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4;
- (id)initWithInternalRequest:(id)arg1;

@end

