//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider
{
    SUScriptCanvasFunction *_function;
}

- (CGPath )copyPathForMaskWithSize:(CGSize)arg1;
- (id)copyMaskImageWithSize:(CGSize)arg1;
- (void)dealloc;
- (id)initWithFunction:(id)arg1;

@end

