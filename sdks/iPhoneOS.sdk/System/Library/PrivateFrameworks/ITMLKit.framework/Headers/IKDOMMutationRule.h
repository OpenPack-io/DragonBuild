//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMConditional.h>

__attribute__((visibility("hidden")))
@interface IKDOMMutationRule : IKDOMConditional
{
    BOOL _mutable;
}

+ (id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2;
+ (id)mutationRuleWithDOMElement:(id)arg1 mutable:(BOOL)arg2;
@property(readonly, nonatomic, getter=isMutable) BOOL mutable; // @synthesize mutable=_mutable;
- (void)applyOnDOMElement:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithDOMElement:(id)arg1 mutable:(BOOL)arg2;

@end

