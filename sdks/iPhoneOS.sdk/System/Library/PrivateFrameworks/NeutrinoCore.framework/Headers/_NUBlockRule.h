//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURule.h>

@interface _NUBlockRule : NURule
{
    id /* CDUnknownBlockType */ _predicate;
    id /* CDUnknownBlockType */ _action;
}

// - (void).cxx_destruct;
- (void)performActionWithSystem:(id)arg1;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithPredicate:(id /* CDUnknownBlockType */)arg1 action:(id /* CDUnknownBlockType */)arg2;

@end

