//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, NSURL, UIImage;

@interface SUSectionButton : NSObject <NSCopying>
{
    NSString *_accessibilityTitle;
    NSString *_displayTitle;
    UIImage *_image;
    UIEdgeInsets _imageInsets;
    NSURL *_imageURL;
    float _imageURLScale;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) float imageURLScale; // @synthesize imageURLScale=_imageURLScale;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)applyToBarButtonItem:(id)arg1;
- (void)dealloc;
- (id)initWithSectionButtonDictionary:(id)arg1;

@end

