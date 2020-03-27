//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, NTPBAlternateHeadline;

@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying>
{
    NTPBAlternateHeadline *_alternateHeadline;
    NSString *_articleId;
    NSString *_sourceChannelId;
    NSString *_webEmbedId;
    int _widgetArticleCount;
    int _widgetArticleCountInSection;
    int _widgetArticleRank;
    int _widgetArticleRankInSection;
    int _widgetContentType;
    int _widgetSectionDisplayRank;
    NSString *_widgetSectionId;
    struct {
        unsigned int widgetArticleCount:1;
        unsigned int widgetArticleCountInSection:1;
        unsigned int widgetArticleRank:1;
        unsigned int widgetArticleRankInSection:1;
        unsigned int widgetContentType:1;
        unsigned int widgetSectionDisplayRank:1;
    } _has;
}

@property(retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // @synthesize alternateHeadline=_alternateHeadline;
@property(retain, nonatomic) NSString *webEmbedId; // @synthesize webEmbedId=_webEmbedId;
@property(nonatomic) int widgetArticleCountInSection; // @synthesize widgetArticleCountInSection=_widgetArticleCountInSection;
@property(nonatomic) int widgetArticleCount; // @synthesize widgetArticleCount=_widgetArticleCount;
@property(nonatomic) int widgetArticleRank; // @synthesize widgetArticleRank=_widgetArticleRank;
@property(nonatomic) int widgetArticleRankInSection; // @synthesize widgetArticleRankInSection=_widgetArticleRankInSection;
@property(nonatomic) int widgetSectionDisplayRank; // @synthesize widgetSectionDisplayRank=_widgetSectionDisplayRank;
@property(retain, nonatomic) NSString *widgetSectionId; // @synthesize widgetSectionId=_widgetSectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAlternateHeadline;
@property(readonly, nonatomic) BOOL hasWebEmbedId;
- (int)StringAsWidgetContentType:(id)arg1;
- (id)widgetContentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasWidgetContentType;
@property(nonatomic) int widgetContentType; // @synthesize widgetContentType=_widgetContentType;
@property(nonatomic) BOOL hasWidgetArticleCountInSection;
@property(nonatomic) BOOL hasWidgetArticleCount;
@property(nonatomic) BOOL hasWidgetArticleRank;
@property(nonatomic) BOOL hasWidgetArticleRankInSection;
@property(nonatomic) BOOL hasWidgetSectionDisplayRank;
@property(readonly, nonatomic) BOOL hasWidgetSectionId;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasArticleId;

@end

