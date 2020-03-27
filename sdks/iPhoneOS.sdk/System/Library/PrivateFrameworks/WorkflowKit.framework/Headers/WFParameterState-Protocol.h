//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableSerialization-Protocol.h>

@class NSArray, WFParameter, WFVariable;
@protocol WFVariableDataSource;

@protocol WFParameterState <NSCopying, WFVariableSerialization>
- (NSArray *)containedVariables;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;

@optional
+ (Class)processingValueClass;
- (id)initWithVariable:(WFVariable *)arg1;
- (void)processWithVariableSource:(id <WFVariableDataSource>)arg1 parameter:(WFParameter *)arg2 isInputParameter:(BOOL)arg3 userInputRequiredHandler:(void (^)(id <WFParameterState>))arg4 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg5;
- (void)processWithVariableSource:(id <WFVariableDataSource>)arg1 parameter:(WFParameter *)arg2 environment:(long long)arg3 userInputRequiredHandler:(void (^)(id <WFParameterState>))arg4 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg5;
- (void)processWithVariableSource:(id <WFVariableDataSource>)arg1 parameter:(WFParameter *)arg2 userInputRequiredHandler:(void (^)(id <WFParameterState>))arg3 valueHandler:(void (^)(id <NSSecureCoding>, NSError *))arg4;
@end

