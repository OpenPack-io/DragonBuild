//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IKCSSParser : NSObject
{
}

+ (id)consumeDeclaration:(id)arg1;
+ (id)consumeDeclarationList:(id)arg1;
+ (id)consumeFunction:(id)arg1 fromToken:(id)arg2;
+ (id)consumeSimpleBlock:(id)arg1 startTokenType:(long long)arg2;
+ (id)consumeComponentValue:(id)arg1;
+ (id)consumeAtRule:(id)arg1;
+ (id)consumeQualifiedRule:(id)arg1;
+ (id)consumeRules:(id)arg1 topLevel:(BOOL)arg2;
+ (id)parseStylesheet:(id)arg1;
+ (id)parseRulesList:(id)arg1;
+ (id)parse:(id)arg1;

@end

