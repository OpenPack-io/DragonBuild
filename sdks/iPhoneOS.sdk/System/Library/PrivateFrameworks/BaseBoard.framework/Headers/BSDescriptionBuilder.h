//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;
@protocol NSObject;

@interface BSDescriptionBuilder : NSObject
{
    id <NSObject> _object;
    NSMutableString *_proem;
    NSMutableString *_description;
    int _activeComponent;
    NSString *_activePrefix;
    BOOL _useDebugDescription;
}

+ (id)succinctDescriptionForObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;
+ (id)descriptionForObject:(id)arg1;
+ (id)builderWithObject:(id)arg1;
+ (id)nameObjectSeparator;
+ (id)componentSeparator;
@property(nonatomic) BOOL useDebugDescription; // @synthesize useDebugDescription=_useDebugDescription;
@property(retain, nonatomic) NSString *activeMultilinePrefix; // @synthesize activeMultilinePrefix=_activePrefix;
@property(nonatomic) int activeComponent; // @synthesize activeComponent=_activeComponent;
// - (void).cxx_destruct;
- (id)build;
- (id)appendFormat:(id)arg1;
- (id)appendString:(id)arg1;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(id /* CDUnknownBlockType */)arg5;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(id /* CDUnknownBlockType */)arg5;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(id /* CDUnknownBlockType */)arg4;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(id /* CDUnknownBlockType */)arg3;
- (id)modifyBody:(id /* CDUnknownBlockType */)arg1;
- (id)modifyProem:(id /* CDUnknownBlockType */)arg1;
- (void)tryAppendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendKey:(id)arg1;
- (id)appendObjectsAndNames:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (id)appendRect:(CGRect)arg1 withName:(id)arg2;
- (id)appendSize:(CGSize)arg1 withName:(id)arg2;
- (id)appendPoint:(CGPoint)arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendCString:(const char )arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendPointer:(void )arg1 withName:(id)arg2;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(NSUInteger)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(NSUInteger)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2;
- (id)appendUInt64:(NSUInteger)arg1 withName:(id)arg2;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(NSUInteger)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(BOOL)arg3;
- (id)appendFlag:(long long)arg1 withName:(id)arg2;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (id)appendObjectWithName:(id)arg1 formatBlock:(id /* CDUnknownBlockType */)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendSuper;
- (id)initWithObject:(id)arg1;

@end

