//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFMIDSMessageInstance : NSObject
{
    long long _retryCount;
    double _retryInterval;
    id /* CDUnknownBlockType */ _retryAction;
}

+ (id)newMessageInstanceWithAction:(id /* CDUnknownBlockType */)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;
@property(copy, nonatomic) id /* CDUnknownBlockType */ retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
// - (void).cxx_destruct;
- (id)description;

@end

