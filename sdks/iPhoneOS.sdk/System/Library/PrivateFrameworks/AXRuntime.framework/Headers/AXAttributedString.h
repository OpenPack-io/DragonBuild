//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableString.h>


@interface AXAttributedString : NSMutableString <NSCopying>
{
    struct __CFAttributedString _string;
}

+ (id)string;
+ (id)axAttributedStringWithString:(id)arg1;
- (id)description;
- (id)axAttributedStringDescription;
- (id)substringFromIndex:(NSUInteger)arg1;
- (BOOL)hasAttribute:(id)arg1;
- (id)coalescedFontAttributes;
- (id)coalescedAttributes;
- (id)attributedSubstringFromRange:(_NSRange)arg1;
- (id)uppercaseString;
- (id)lowercaseString;
- (id)string;
- (BOOL)hasAttributes;
- (BOOL)isAXAttributedString;
- (void)enumerateAttribute:(id)arg1 inRange:(_NSRange)arg2 options:(NSUInteger)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (void)enumerateAttributesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)attributeValueForKey:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(NSUInteger)arg2 effectiveRange:(_NSRange )arg3;
- (id)attributesAtIndex:(long long)arg1 effectiveRange:(_NSRange )arg2;
- (void)appendStringOrAXAttributedString:(id)arg1;
- (void)appendAXAttributedString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(NSUInteger)arg3 range:(_NSRange)arg4;
- (id)axStringByReplacingCharactersInRange:(_NSRange)arg1 withString:(id)arg2;
- (id)axAttributedStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 withRange:(_NSRange)arg2;
- (void)removeAttributes:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2 withRange:(_NSRange)arg3;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAttributes:(id)arg1;
- (id)attributedString;
- (const struct __CFAttributedString )cfAttributedString;
- (void)replaceString:(struct __CFString )arg1;
- (void)replaceCharactersInRange:(_NSRange)arg1 withString:(id)arg2;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (id)substringWithRange:(_NSRange)arg1;
- (void)getCharacters:(unsigned short )arg1 range:(_NSRange)arg2;
- (NSUInteger)length;
- (void)convertAttachmentsWithBlock:(id /* CDUnknownBlockType */)arg1;
- (id)stringByTrimmingCharactersInSet:(id)arg1;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
- (id)initWithStringOrAttributedString:(id)arg1;
- (id)initWithCFAttributedString:(struct __CFAttributedString )arg1;
- (id)initWithString:(id)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id )arg1;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id )arg1;

@end

