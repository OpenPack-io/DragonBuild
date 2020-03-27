//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayoutContentSource-Protocol.h>

@class NSString, PXTitleSubtitleLabelSpec;

@protocol PXGTitleSubtitleSource <PXGLayoutContentSource>
- (PXTitleSubtitleLabelSpec *)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg1;
- (NSString *)subtitleForSpriteAtIndex:(unsigned int)arg1;
- (NSString *)titleForSpriteAtIndex:(unsigned int)arg1;

@optional
- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3;
@end

