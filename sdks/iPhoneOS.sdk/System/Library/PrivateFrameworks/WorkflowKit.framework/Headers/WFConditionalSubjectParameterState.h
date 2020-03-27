//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSNumber, NSString;

@interface WFConditionalSubjectParameterState : NSObject <WFParameterState>
{
    BOOL _caseInsensitive;
    BOOL _irrational;
    BOOL _enumeration;
    NSNumber *_maximumLength;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    NSUInteger _tense;
    NSUInteger _displayableTimeUnits;
    NSUInteger _comparableTimeUnits;
    NSString *_unitType;
    NSString *_homeIdentifier;
}

+ (Class)processingValueClass;
+ (id)subjectType;
+ (id)subjectClasses;
@property(copy, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property(readonly, nonatomic, getter=isEnumeration) BOOL enumeration; // @synthesize enumeration=_enumeration;
@property(readonly, nonatomic) NSString *unitType; // @synthesize unitType=_unitType;
@property(readonly, nonatomic) NSUInteger comparableTimeUnits; // @synthesize comparableTimeUnits=_comparableTimeUnits;
@property(readonly, nonatomic) NSUInteger displayableTimeUnits; // @synthesize displayableTimeUnits=_displayableTimeUnits;
@property(readonly, nonatomic) NSUInteger tense; // @synthesize tense=_tense;
@property(readonly, nonatomic, getter=isIrrational) BOOL irrational; // @synthesize irrational=_irrational;
@property(readonly, nonatomic) NSNumber *stepValue; // @synthesize stepValue=_stepValue;
@property(readonly, nonatomic) NSNumber *maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) NSNumber *minimumValue; // @synthesize minimumValue=_minimumValue;
@property(readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive; // @synthesize caseInsensitive=_caseInsensitive;
@property(readonly, nonatomic) NSNumber *maximumLength; // @synthesize maximumLength=_maximumLength;
// - (void).cxx_destruct;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (id)supportedComparisonOperators;
@property(readonly, nonatomic) long long contentType;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(id /* CDUnknownBlockType */)arg3 valueHandler:(id /* CDUnknownBlockType */)arg4;
- (void)getContentWithVariableSource:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)containedVariables;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithHomeIdentifier:(id)arg1;
- (id)initWithVariable:(id)arg1;

@end

