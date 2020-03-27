//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, UIColor, UIFont;

@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying>
{
    UIFont *_font;
    NSString *_text;
    BOOL _containsEmoji;
    BOOL _canTruncate;
    BOOL _canTighten;
    BOOL _recalculateHash;
    BOOL _accessibilityReduceTransparencyEnabled;
    NSString *_contentSizeCategory;
    double _scale;
    CGSize _maxSize;
    long long _legibilityStyle;
    UIColor *_textColor;
    UIColor *_focusHighlightColor;
    UIEdgeInsets _textInsets;
    UIEdgeInsets _fontLanguageInsets;
    NSString *_iconLocation;
    NSUInteger _hash;
}

@property(readonly, copy, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(readonly, nonatomic) UIEdgeInsets fontLanguageInsets; // @synthesize fontLanguageInsets=_fontLanguageInsets;
@property(readonly, nonatomic) UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(readonly, nonatomic) UIColor *focusHighlightColor; // @synthesize focusHighlightColor=_focusHighlightColor;
@property(readonly, copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic, getter=isAccessibilityReduceTransparencyEnabled) BOOL accessibilityReduceTransparencyEnabled; // @synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) long long legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(readonly, nonatomic) BOOL containsEmoji; // @synthesize containsEmoji=_containsEmoji;
@property(readonly, nonatomic) BOOL canTighten; // @synthesize canTighten=_canTighten;
@property(readonly, nonatomic) BOOL canTruncate; // @synthesize canTruncate=_canTruncate;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)_noteNeedsHashRecalculation;
@property(readonly, nonatomic, getter=isColorspaceGrayscale) BOOL colorspaceGrayscale;
- (id)initWithParameters:(id)arg1;
- (id)init;

@end

