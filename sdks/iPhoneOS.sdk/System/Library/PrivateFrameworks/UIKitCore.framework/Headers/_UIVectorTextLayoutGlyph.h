//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIVectorTextLayoutGlyph-Protocol.h>

@class UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph>
{
    unsigned short _glyph;
    UIBezierPath *_path;
    CGRect _rect;
    CGAffineTransform _pathTransform;
}

@property(nonatomic) CGAffineTransform pathTransform; // @synthesize pathTransform=_pathTransform;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) unsigned short glyph; // @synthesize glyph=_glyph;
// - (void).cxx_destruct;

@end

