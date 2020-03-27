//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class WFVariableString;

@interface WFVariableStringParameterState : NSObject <WFParameterState>
{
    WFVariableString *_variableString;
    long long _userInputInsertionIndex;
}

+ (Class)processingValueClass;
@property(readonly, nonatomic) long long userInputInsertionIndex; // @synthesize userInputInsertionIndex=_userInputInsertionIndex;
@property(readonly, copy, nonatomic) WFVariableString *variableString; // @synthesize variableString=_variableString;
// - (void).cxx_destruct;
- (id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 isInputParameter:(BOOL)arg3 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg4 valueHandler:(id /* CDUnknownBlockType */)arg5;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4;
- (id)containedVariables;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariable:(id)arg1;
- (id)initWithVariableString:(id)arg1;
- (id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2;

@end

