//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIImage;

@interface NUTextAndGlyph : NSObject
{
    NSAttributedString *_attributedText;
    NSString *_text;
    UIImage *_glyph;
}

@property(readonly, nonatomic) UIImage *glyph; // @synthesize glyph=_glyph;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
// - (void).cxx_destruct;
- (id)init;
- (id)initWithText:(id)arg1 glyph:(id)arg2;
- (id)initWithAttributedText:(id)arg1 glyph:(id)arg2;
- (id)initWithAttributedText:(id)arg1 text:(id)arg2 glyph:(id)arg3;

@end

