//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, SANPVideoLanguageOption;

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <SAAceSerializable>
{
}

+ (id)audioAndSubtitleLanguageOptionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)audioAndSubtitleLanguageOptions;
@property(retain, nonatomic) SANPVideoLanguageOption *currentSubtitles;
@property(retain, nonatomic) SANPVideoLanguageOption *currentAudioTrack;
@property(copy, nonatomic) NSArray *availableTracks;
@property(copy, nonatomic) NSArray *availableSubtitles;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

