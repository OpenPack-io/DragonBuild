//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject
{
    NSArray *_thumbnailImages;
    NSArray *_backgroundColors;
    UIImage *_touchIcon;
}

+ (id)new;
@property(readonly, nonatomic) UIImage *touchIcon; // @synthesize touchIcon=_touchIcon;
@property(readonly, copy, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(readonly, copy, nonatomic) NSArray *thumbnailImages; // @synthesize thumbnailImages=_thumbnailImages;
// - (void).cxx_destruct;
- (id)initWithThumbnailImages:(id)arg1 backgroundColors:(id)arg2 touchIcon:(id)arg3;
- (id)init;

@end

