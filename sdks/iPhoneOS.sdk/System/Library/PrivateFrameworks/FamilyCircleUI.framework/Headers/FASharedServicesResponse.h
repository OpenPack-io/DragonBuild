//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface FASharedServicesResponse : AAResponse
{
    NSArray *_services;
}

@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
// - (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

