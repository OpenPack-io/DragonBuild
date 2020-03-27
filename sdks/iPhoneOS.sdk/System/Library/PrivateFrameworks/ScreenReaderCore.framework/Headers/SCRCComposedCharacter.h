//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRCComposedCharacter : NSObject
{
    NSUInteger _originalRepresentationLength;
    NSUInteger _normalFormDRepresentationLength;
    NSUInteger _normalFormKCRepresentationLength;
    int _originalRepresentation;
    int _normalFormDRepresentation;
    int _normalFormKCRepresentation;
    long long _originalCombinedCharacterLength;
    struct __CFString _originalCombinedCharacter;
}

- (NSUInteger)formKCLength;
- (NSUInteger)formDLength;
- (NSUInteger)originalLength;
- (NSUInteger)length;
- (BOOL)containsUpperCase;
- (BOOL)_formKCContaintsUpperCase;
- (int)originalFromCharAtIndex:(NSUInteger)arg1;
- (int)formKCCharAtIndex:(NSUInteger)arg1;
- (int)formDCharAtIndex:(NSUInteger)arg1;
- (int)charAtIndex:(NSUInteger)arg1;
- (void)_buildFormKC;
- (void)_buildFormD;
- (struct __CFString )copyUnicodeDescriptionString;
- (struct __CFString )originalString;
- (BOOL)isEqualToUChar32:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithComposedCharacter:(struct __CFString )arg1;
- (id)_initWithComposedCharacter:(struct __CFString )arg1;
- (id)initWithCharacter:(int)arg1;
- (id)_initWithSimpleCharacter:(int)arg1;
- (id)_initWithCharacter:(int)arg1;

@end

