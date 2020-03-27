//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class DOMRange, NSArray, NSString;

@protocol WebMultipleTextMatches <NSObject>
- (NSArray *)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (NSUInteger)countMatchesForText:(NSString *)arg1 inDOMRange:(DOMRange *)arg2 options:(NSUInteger)arg3 limit:(NSUInteger)arg4 markMatches:(BOOL)arg5;
- (BOOL)markedTextMatchesAreHighlighted;
- (void)setMarkedTextMatchesAreHighlighted:(BOOL)arg1;
@end

