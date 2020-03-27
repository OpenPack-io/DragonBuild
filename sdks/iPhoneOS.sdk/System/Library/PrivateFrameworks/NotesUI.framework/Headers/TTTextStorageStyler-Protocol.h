//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSAttributedString, NSDictionary, NSMutableAttributedString, TTTextStorage;

@protocol TTTextStorageStyler <NSObject>
- (void)resetGuessedFontSizes;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(BOOL)arg2;
- (void)styleText:(TTTextStorage *)arg1 inRange:(_NSRange)arg2 fixModelAttributes:(BOOL)arg3;

@optional
- (void)convertNSTablesToICTables:(NSMutableAttributedString *)arg1 pasteboardTypes:(NSArray *)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4;
@end

