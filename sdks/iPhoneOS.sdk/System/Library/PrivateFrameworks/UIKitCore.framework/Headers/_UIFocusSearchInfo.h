//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusSearchInfo : NSObject
{
    BOOL _forceFocusToLeaveContainer;
    id /* CDUnknownBlockType */ _evaluator;
}

+ (id)defaultInfo;
@property(copy, nonatomic) id /* CDUnknownBlockType */ evaluator; // @synthesize evaluator=_evaluator;
@property(nonatomic) BOOL forceFocusToLeaveContainer; // @synthesize forceFocusToLeaveContainer=_forceFocusToLeaveContainer;
// - (void).cxx_destruct;
- (BOOL)shouldIncludeFocusItem:(id)arg1;
- (id)initWithFocusEvaluator:(id /* CDUnknownBlockType */)arg1;

@end

