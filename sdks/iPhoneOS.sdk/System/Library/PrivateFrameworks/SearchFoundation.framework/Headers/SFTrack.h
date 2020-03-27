//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFTrack-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SFActionItem;

@interface SFTrack : NSObject <SFTrack, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int highlighted:1;
    } _has;
    BOOL _highlighted;
    NSString *_title;
    NSString *_number;
    NSString *_duration;
    NSURL *_preview;
    SFActionItem *_playAction;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SFActionItem *playAction; // @synthesize playAction=_playAction;
@property(copy, nonatomic) NSURL *preview; // @synthesize preview=_preview;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasHighlighted;
- (id)initWithProtobuf:(id)arg1;

@end

