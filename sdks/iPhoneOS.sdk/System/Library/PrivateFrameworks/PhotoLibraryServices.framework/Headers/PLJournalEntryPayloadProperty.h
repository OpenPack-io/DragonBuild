//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface PLJournalEntryPayloadProperty : NSObject
{
    BOOL _requiresConversion;
    BOOL _isUUIDKey;
    BOOL _isToManySubRelationship;
    NSString *_key;
    NSUInteger _type;
    NSSet *_relationPropertyNames;
    NSDictionary *_subRelationshipProperties;
    PLJournalEntryPayloadProperty *_parentProperty;
}

+ (id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(BOOL)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(NSUInteger)arg2 requiresConversion:(BOOL)arg3;
+ (id)payloadPropertyWithKey:(id)arg1 andType:(NSUInteger)arg2;
+ (id)payloadPropertyWithKey:(id)arg1 relationPropertyNames:(id)arg2;
+ (id)payloadPropertyForUUID;
@property(nonatomic) __weak PLJournalEntryPayloadProperty *parentProperty; // @synthesize parentProperty=_parentProperty;
@property(readonly, nonatomic) BOOL isToManySubRelationship; // @synthesize isToManySubRelationship=_isToManySubRelationship;
@property(readonly, nonatomic) NSDictionary *subRelationshipProperties; // @synthesize subRelationshipProperties=_subRelationshipProperties;
@property(readonly, nonatomic) NSSet *relationPropertyNames; // @synthesize relationPropertyNames=_relationPropertyNames;
@property(readonly, nonatomic) BOOL isUUIDKey; // @synthesize isUUIDKey=_isUUIDKey;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isPropertyListSupportedType;
@property(readonly, nonatomic) BOOL requiresConversion;
- (id)description;
- (BOOL)isEqualToKey:(id)arg1;
- (id)initWithKey:(id)arg1 andType:(NSUInteger)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(BOOL)arg4 relationPropertyNames:(id)arg5 isUUIDKey:(BOOL)arg6 isToManySubRelationship:(BOOL)arg7;

@end

