//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFConditionalSubjectParameterState.h>

@class WFContentProperty, WFVariable, WFVariableParameterState;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState
{
    WFContentProperty *_effectiveContentProperty;
    WFVariableParameterState *_variableState;
}

+ (id)subjectType;
@property(readonly, nonatomic) WFVariableParameterState *variableState; // @synthesize variableState=_variableState;
// - (void).cxx_destruct;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isEnumeration;
- (NSUInteger)comparableTimeUnits;
- (NSUInteger)displayableTimeUnits;
- (NSUInteger)tense;
- (BOOL)isIrrational;
- (id)unitType;
- (BOOL)isCaseInsensitive;
- (id)supportedComparisonOperators;
@property(readonly, nonatomic) WFContentProperty *effectiveContentProperty; // @synthesize effectiveContentProperty=_effectiveContentProperty;
- (Class)contentClassProvidingContentProperty;
- (long long)contentType;
- (void)getContentWithVariableSource:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)containedVariables;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) WFVariable *variable;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariable:(id)arg1;
- (id)initWithVariableState:(id)arg1;

@end

