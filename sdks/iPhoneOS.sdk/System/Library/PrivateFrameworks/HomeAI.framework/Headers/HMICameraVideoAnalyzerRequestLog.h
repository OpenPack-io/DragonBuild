//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMICameraVideoAnalyzerRequest;

__attribute__((visibility("hidden")))
@interface HMICameraVideoAnalyzerRequestLog : HMFObject <HMFLogging>
{
    HMICameraVideoAnalyzerRequest *_request;
}

+ (id)logCategory;
@property(readonly) __weak HMICameraVideoAnalyzerRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (id)stringWithFormat:(id)arg1;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

