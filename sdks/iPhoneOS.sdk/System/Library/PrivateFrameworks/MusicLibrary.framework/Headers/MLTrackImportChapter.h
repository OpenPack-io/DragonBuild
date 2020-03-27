//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying>
{
    NSData *_imageData;
    NSString *_imageCacheKey;
    NSUInteger _startTimeInMilliseconds;
    NSString *_title;
    NSURL *_url;
    NSString *_urlTitle;
}

@property(copy, nonatomic) NSString *imageCacheKey; // @synthesize imageCacheKey=_imageCacheKey;
@property(copy, nonatomic) NSString *URLTitle; // @synthesize URLTitle=_urlTitle;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) NSUInteger startTimeInMilliseconds; // @synthesize startTimeInMilliseconds=_startTimeInMilliseconds;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
// - (void).cxx_destruct;
- (BOOL)isEqualIgnoringTimesAndTitle:(id)arg1;
- (long long)compare:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (void)normalizeProperties;

@end

