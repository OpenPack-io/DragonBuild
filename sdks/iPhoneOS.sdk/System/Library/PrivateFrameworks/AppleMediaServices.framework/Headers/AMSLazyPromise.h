//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise
{
    BOOL _executedBlock;
    id /* CDUnknownBlockType */ _block;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
@property(nonatomic) BOOL executedBlock; // @synthesize executedBlock=_executedBlock;
// - (void).cxx_destruct;
- (BOOL)_runBlock;
- (id)resultWithTimeout:(double)arg1 error:(id )arg2;
- (id)resultWithError:(id )arg1;
- (id)resultBeforeDate:(id)arg1 error:(id )arg2;
- (void)addSuccessBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addFinishBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addErrorBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;

@end

