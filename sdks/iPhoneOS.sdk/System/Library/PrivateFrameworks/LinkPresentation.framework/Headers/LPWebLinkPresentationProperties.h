//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPLinkPresentationPropertyProvider-Protocol.h>

@class LPAudio, LPCaptionBarPresentationProperties, LPImage, LPImagePresentationProperties, LPInlineMediaPlaybackInformation, LPVideo, NSArray, NSNumber, NSString, UIColor;

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>
{
    BOOL _preliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    NSArray *_alternateImages;
    LPVideo *_video;
    LPAudio *_audio;
    UIColor *_backgroundColor;
    NSNumber *_minimumHeight;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
}

@property(retain, nonatomic) LPInlineMediaPlaybackInformation *inlinePlaybackInformation; // @synthesize inlinePlaybackInformation=_inlinePlaybackInformation;
@property(retain, nonatomic) NSNumber *minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) LPAudio *audio; // @synthesize audio=_audio;
@property(retain, nonatomic) LPVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) NSArray *alternateImages; // @synthesize alternateImages=_alternateImages;
@property(retain, nonatomic) LPImagePresentationProperties *imageProperties; // @synthesize imageProperties=_imageProperties;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *quotedText; // @synthesize quotedText=_quotedText;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *captionBar; // @synthesize captionBar=_captionBar;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isPreliminary) BOOL preliminary; // @synthesize preliminary=_preliminary;
// - (void).cxx_destruct;

@end

