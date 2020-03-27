//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoder-Protocol.h>

@class NSArray, NSString, UIPasteboard;

__attribute__((visibility("hidden")))
@interface TSPPasteboard : NSObject <TSPDecoder>
{
    UIPasteboard *_pasteboard;
}

+ (id)pasteboardWithPasteboard:(id)arg1;
+ (id)pasteboardWithUniqueName;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)generalPasteboard;
+ (Class)pasteboardClass;
+ (id)activePasteboardForName:(id)arg1;
+ (id)activePasteboards;
+ (id)activePasteboardsQueue;
// - (void).cxx_destruct;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSUInteger pasteboardItemMaxSize;
- (oneway void)invalidate;
@property(readonly, nonatomic) BOOL isSmartCopy;
- (BOOL)containsImportableTextTypes;
- (BOOL)containsImportableRichTextTypes;
- (BOOL)containsNativePasteboardTypes;
- (id)importableImageTypes;
- (id)importableRichTextTypes;
- (long long)clearContents;
@property(readonly, nonatomic) long long changeCount;
@property(readonly, nonatomic) NSString *name;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)stringsForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)addData:(id)arg1 forPasteboardType:(id)arg2;
- (void)addItems:(id)arg1 isSmartCopy:(BOOL)arg2;
- (void)addItems:(id)arg1;
@property(readonly, nonatomic) long long numberOfItems;
- (id)valueForPasteboardType:(id)arg1;
- (id)stringForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1;
- (BOOL)canLoadItemsOfClass:(Class)arg1;
- (BOOL)containsAnyPasteboardTypeInArray:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (id)pasteboardTypes;
@property(readonly, nonatomic) NSArray *URLs;
@property(readonly, nonatomic) NSArray *richTextStrings;
@property(readonly, nonatomic) NSArray *strings;
@property(copy, nonatomic) NSString *string;
- (id)initWithNativePasteboard:(id)arg1;
- (id)initWithUniquePasteboardName;
- (id)initWithPasteboardName:(id)arg1 create:(BOOL)arg2;
- (id)initWithGeneralPasteboard;
- (BOOL)fromIWorkSageDataSource;
- (BOOL)fromExcelDataSource;

@end

