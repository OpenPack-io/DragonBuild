//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIUndoTextOperation.h>

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationTyping : _UIUndoTextOperation
{
    _NSRange _replacementRange;
    NSMutableAttributedString *_attributedString;
}

// - (void).cxx_destruct;
- (BOOL)supportsCoalescing;
- (void)undoRedo;
- (BOOL)coalesceAffectedRange:(_NSRange)arg1 replacementRange:(_NSRange)arg2 selectedRange:(_NSRange)arg3 textStorage:(id)arg4;
- (id)initWithAffectedRange:(_NSRange)arg1 inputController:(id)arg2 replacementRange:(_NSRange)arg3;

@end

