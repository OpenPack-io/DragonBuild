//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolBoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    BOOL _values[2];
    BOOL _valueSet[2];
}

- (void)removeAll;
- (void)removeBoolForKey:(BOOL)arg1;
- (void)setBool:(BOOL)arg1 forKey:(BOOL)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (NSUInteger)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndBoolsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateForTextFormat:(id /* CDUnknownBlockType */)arg1;
- (void)setGPBGenericValue:(CDUnion_88782d86 )arg1 forGPBGenericValueKey:(CDUnion_88782d86 )arg2;
- (BOOL)getBool:(BOOL )arg1 forKey:(BOOL)arg2;
@property(readonly, nonatomic) NSUInteger count;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCapacity:(NSUInteger)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithBools:(const BOOL )arg1 forKeys:(const BOOL )arg2 count:(NSUInteger)arg3;
- (id)init;

@end

