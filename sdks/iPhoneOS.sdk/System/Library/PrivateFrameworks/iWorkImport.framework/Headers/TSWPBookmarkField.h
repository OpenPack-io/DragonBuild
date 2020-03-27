//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

#import <iWorkImport/TSWPBookmarkEntry-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSWPBookmarkField : TSWPSmartField <TSWPBookmarkEntry>
{
    NSString *_name;
    BOOL _forRange;
    BOOL _hidden;
}

+ (id)uniqueBookmarkNameFromBase:(id)arg1 excludingNames:(id)arg2;
+ (id)normalizedNameForName:(id)arg1;
@property(readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL forRange; // @synthesize forRange=_forRange;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct BookmarkFieldArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct BookmarkFieldArchive )arg1 archiver:(id)arg2;
- (void)resetTextAttributeUUIDString;
@property(readonly, nonatomic) NSString *key;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _NSRange effectiveRange;
@property(readonly, nonatomic) _NSRange range;
- (BOOL)isEquivalentToObject:(id)arg1;
- (BOOL)allowsEditing;
- (int)styleAttributeArrayKind;
- (NSUInteger)attributeArrayKind;
- (int)smartFieldKind;
- (id)copyWithNewName:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 forRange:(BOOL)arg3 hidden:(BOOL)arg4;

@end

